#include<conio.h>
#include<iostream>
using namespace std;
class myclass
{
	public:
		myclass()
		{
			cout<<"i am default constructor of class myclass";
		}
		
		myclass(int i)
		{
			cout<<"\n \ni am parametric constructor of class myclass";
		}
		myclass(int x,int y)
		{
			cout<<"\n \nhello";
		}
};
int main()

{
	myclass obj;
	myclass obj1(30);
	myclass obj2(3,4);
	getch();
	return 0;
}
