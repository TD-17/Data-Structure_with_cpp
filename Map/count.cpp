#include<iostream>
#include<iterator>
#include<map>
 
using namespace std;

int main()
{
	map<int,int> mp;
	map<int,int>:: iterator it;
	mp.insert({1,46});
	mp.insert({2,56});
	mp.insert({3,67});
	mp.insert({4,78});
	mp.insert({5,98});
	if(mp.count(2))
	{
		cout<<"The key 2 is present\n";
	}
	else 
	 cout<<"The key 2 is not present\n";
	if(mp.count(13))
	{
		cout<<"The key 13 is present\n";
	}
	else 
	 cout<<"The key 13 is not present\n";
	return 0;
}
