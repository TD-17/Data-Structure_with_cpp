#include<conio.h>
#include<iostream>
using namespace std;
class base
{
	protected:
		int i;
		public:
		base()
		{
			cout<<"i am default constructor of base class ";
		}
		base(int x,int y)
		{
			cout<<"i am parameterised constructor of base class";
		}
};
class derived:public base
{
	int k;
	public:
	derived(int z):base(23,12)
	{
		cout<<"\ni am parameterised constructor of derived class";
	}
};
int main()
{
	derived obj(2);
	return 0;
}
