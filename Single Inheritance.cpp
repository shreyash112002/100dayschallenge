#include<iostream>
using namespace std;
class Data
{
	protected:
		int a,b;
		public:
			void read()
			{
				cout<<"Enter 2 numbers";
				cin>>a>>b;
			}
};

class Sum:public Data
{
	private:
		int sum;
		public:
			void add()
			{
				sum=a+b;
			}
			void display()
			{
				cout<<"The sum is "<<sum;
			}
};

int main()
{
	Sum s;
	s.read();
	s.add();
	s.display();
}
