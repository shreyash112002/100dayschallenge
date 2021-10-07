#include<stdio.h>

struct Stack 
{
	char arr[100];
	int tos;
};

void push(struct Stack *p,char ch);
char pop(struct Stack*p);
int isoprnd(char ch);
 int isempty(struct Stack s);  
 int prcd(char op1,char op2);   
 void convert(char infix[],char postfix[]);  
 int main()
  {
  	 char infix[20],postfix[20];  //result stored in postfix
  	 
  	 printf("Enter infix expression ");
  	 scanf("%s",infix);
  	 
  	 convert(infix,postfix); //call by reference used 
  	 printf("Postfix expression is %s",postfix); 
	    	 
  	 return 0;  	 
}
 void convert(char infix[],char postfix[])
 {
 	struct Stack s;
 	s.tos=-1;
 	int i,j=0;
 	char ch;
 	int pr;
 	for(i=0;infix[i]!='\0';i++) 
 	{
 		ch=infix[i];
 		if(isoprnd(ch)==1) 
		{
			postfix[j]=ch; 
			j++; 
			 }
 	else
 	{
 		while(isempty(s)==0)
 		{
 			pr=prcd(ch,s.arr[s.tos]); 
 			if(pr==1)
 			{
 				break;
			 }
			 	postfix[j]=pop(&s);  //tos char (operator)
			    j++;
		 }
		 push(&s,ch);
	 }
 }
           	while(isempty(s)==0) //returns 0 if stack is not empty
 	{
 		postfix[j]=pop(&s);
 		j++;
 	}//end of while loop
 	postfix[j]='\0'; //for end of postfix expression its programmer's responsibility	
  }//end of convert()   
     int isoprnd(char ch)  
   {
   	 //ch can be uppercase,lower case or digit char 
	 if( (ch>=65&&ch<=90)||
	     (ch>=97&&ch<=122)||
		 (ch>=48&&ch<=57) )
   	   return 1; //if char is an operand
	 else //If all above conditions are false
	    return 0;  //if char is an operator	 
   }
     int isempty(struct Stack s)
    {
   	  if(s.tos==-1)
   	     return 1;  //stack is empty
   	  else
		 return 0;  //stack is not empty		 
	  //return (s.tos==-1);	 "Single Line Version" (== operator gives 1(true) or 0(false)) 
    }
    void push(struct Stack *p,char x)
   {
     if(p->tos==9)
     {
     	printf("Stack Overflow");
     	return;
	 }
	 p->tos=p->tos+1;
	 p->arr[p->tos]=x;	 
   }//end of push()   
   char pop(struct Stack *p)
   {
   	char x;   	
   	if(p->tos==-1)
   	{
   		printf("Stack Empty (Underflow)");
   		return '\0';
	}	
	x=p->arr[p->tos];
	p->tos=p->tos-1;	
	return x;
   }//end of pop()
   int prcd(char op1,char op2)  
  {
 	if(op2=='$') 
 	   return 0; 
 	else if(op1=='$') 
 	  return 1;  
 	else if(op2=='*'||op2=='/'||op2=='%') 
 	  return 0;  
 	else if(op1=='*'||op1=='/'||op1=='%') 
 	  return 1;  
 	else if(op2=='+'||op2=='-') 
 	  return 0;  
 	else  
 	   return 1; 
  }//end of prcd()
  

