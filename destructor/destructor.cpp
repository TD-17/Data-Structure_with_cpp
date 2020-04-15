#include<conio.h>
#include<iostream>
using namespace std;
class myclass
{
	public:
		myclass()
		{
			cout<<"i am constructor of myclass";
		}
		~myclass()
		{
			cout<<"\ni am destructor of myclass";
			
		}
};
int main()
{
	myclass obj; /* for perfect results go to turbo new2.cpp */
	
	return 0;

}
