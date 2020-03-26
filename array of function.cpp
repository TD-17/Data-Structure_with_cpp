#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"addition of numbers is:"<<a+b;
	
}
void subtract(int a,int b)
{
	cout<<"subtraction of numbers is:"<<a-b;
}
void multiply(int a,int b)
{
	cout<<"multiplication of numbers is:"<<a*b;
}
int main()
{
	void (*fun_point[])(int,int)={add,subtract,multiply};
	int ch;
	int a=10;
	int b=20;
	cout<<"choose the value of ch";
	cin>>ch;
	if(ch>2)
	{
		return 0;
	}
	(*fun_point[ch])(a,b);
	return 0;
}
	
	
