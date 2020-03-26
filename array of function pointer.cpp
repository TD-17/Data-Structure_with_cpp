#include<stdio.h>
#include<conio.h>
void add(int a, int b)
{
	printf("addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("subtraction is %d\n", a-b);
	
}
void multiply(int a, int b)
{
	printf("multiplication is %d\n", a*b);
}
int main()
{
	int ch;
	
	void (*funptr[])(int, int)={add, subtract, multiply};
	int a=2;
	int b=3;
	printf("enter your choice : \n");
	scanf("%d",&ch);
	if(ch>2)
	 return 0;
	(*funptr[ch])(a, b);
	return 0;

}

