#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main()
{
	multimap<int, int> multimp1,multimp2;
	multimp1.insert(pair<int,int>(1,45));
	multimp1.insert(pair<int,int>(2,54));
	multimp2.insert(pair<int,int>(2,44));
	multimp2.insert(pair<int,int>(3,54));
	multimap<int,int>::iterator it;
	cout<<"First multimap:\n";
	for(it=multimp1.begin();it!=multimp1.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	cout<<"Second multimap:\n";
	for(it=multimp2.begin();it!=multimp2.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	multimp1.swap(multimp2);
	cout<<"AFTER SWAPPING-------\n";
	cout<<"First multimap:\n";
	for(it=multimp1.begin();it!=multimp1.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	cout<<"Second multimap:\n";
	for(it=multimp2.begin();it!=multimp2.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	
}
