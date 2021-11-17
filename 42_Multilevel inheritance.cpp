#include<iostream>
using namespace std;
class Person
{
	public :
		int age;
		char name[20];
		public:
		void getdata1()
		{
			cout<<"Enter age ";
			cin>>age;
			cout<<"Enter name ";
		    cin>>name;
		}
		public :
			void putdata1()
			{
				cout<<"Name is "<<name;
				cout<<"\nAge is "<<age;
			}
};

class Employee: public Person
{
	protected:
		char desig[20];
		public :
			float basic, da,hra,cca;
			public:
				void getdata2()
				{
					cout<<"\nEnter designation ";
					cin>>desig;
					cout<<"\n Enter Basic,DA,HRA,CCA";
					cin>>basic>>da>>hra>>cca;
				}
				void putdata2()
				{
					cout<<"\n Designation is "<<desig;
					cout<<"\n Basic-> "<<basic;
					cout<<"\n DA->"<<da ;
					cout<<"\n HRA->"<<hra;
					cout<< "\n CCA-> "<<cca;
				}
};

class Salary: public Employee
{
	public :
		float Total_salary;
		
		public:
			void calculate()
			{
				Total_salary=basic+da+hra+cca;
			}
			void display()
			{
				cout<<"\nTotal salary is "<<Total_salary;
			}
};

int main()
{
	Salary s;
	s.getdata1();
	s.putdata1();
	s.getdata2();
	s.putdata2();
	s.calculate();
	s.display();
}
