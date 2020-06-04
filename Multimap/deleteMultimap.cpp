#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main()
{
	multimap<int,int> multimp;
	multimp.insert(pair<int,int>(1,45));
	multimp.insert(pair<int,int>(2,54));
	multimp.insert(pair<int,int>(2,44));
	multimp.insert(pair<int,int>(3,54));
	multimp.insert(pair<int,int>(4,50));
	
	multimap<int,int>::iterator it;
	for(it=multimp.begin();it!=multimp.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	cout<<"\nAfter erasing the key 2 from multimap\n";
	multimp.erase(2);
	for(it=multimp.begin();it!=multimp.end();it++)
	{
		cout<<"Key "<<it->first;
		cout<<" Value "<<it->second<<endl;
	}
	return 0;
}
