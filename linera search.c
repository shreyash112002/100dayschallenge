#include<stdio.h>
void lin_search(int a[],int n,int x);
int main()
{
	int a[50],i,x,n;
	printf("Enter elements to be stored");
	scanf("%d",&n);
	
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched");
	scanf("%d");
		lin_search(a,n,x);
		return 0;
		
}

void lin_search(int a[],int n , int x)
{
	int i,count=0; //to manage index
  	
  	for(i=0;i<n;i++)
  	{
  	   if(a[i]==x)
  	   {
  		 printf("Number found at position %d \n",i+1);  //IMP : i+1
    	 count++;
	   }
	}
	
	if(count==0)
       printf("Number not found");	
}
