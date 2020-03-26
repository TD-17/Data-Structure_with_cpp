#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char name[20],temp[3];
	int k,l,r;
	int count =0;
	int arr[3],a=0,t=0;
	gets(name);
	for(int i=0;name[i]!=NULL;i++)
	{
		if(name[i]==' ')
		{
			temp[t]=NULL;
			arr[a++]=atoi(temp);
			t=0;
		}
		else if(name[i+1]==NULL)
		{
			temp[t++]=name[i];
			temp[t]=NULL;
			arr[a++]=atoi(temp);
			t=0;
		}
		else
		{
			temp[t++]=name[i];
		}
		
	}

	k=arr[0];
	l=arr[1];
	r=arr[2];
	for(int i=l+1;i<r;i++)
	{
		if(i%k==0)
		{
			count++;
		}
	}
	cout<<"\n"<<count;
	getch();
	return 0;
	
}
