#include<conio.h>
#include<iostream>
using namespace std;
class myclass
{
	public:
		myclass()
		{
			cout<<"\n am default constructor of myclass ";
			
		}
		myclass(int i)
		{
			cout<<"\ni am parameterised constructor of myclass";
			
		
		}
		myclass(myclass &o)
		{
			cout<<"\ni am copy constructor of myclass";
			
		}
		~myclass()
		{
			cout<<"\ni am destructor of myclass";
		}
	
};
myclass funcv(myclass o)
{
	cout<<"\n\nhello";
	return o;
}
int main()
{
	myclass obj;
	myclass obj1=obj;
	obj=funcv(obj1);
	getch();
	return 0;
	
}
