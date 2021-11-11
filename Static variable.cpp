#include<iostream>
using namespace std;
class Number
{
	public:
		static int num;
		
		void increase()
		{
			num++;
		}
};
int Number ::num=0;
int main()
{
	Number n1;
	n1.increase();
	
	cout<<"Number of 1st object-> "<<n1.num;
	Number n2;
	
		cout<<"\nNumber of 2nd object-> "<<n2.num;
	
}
