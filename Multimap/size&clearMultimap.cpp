#include<iostream>
#include<iterator>
#include<map>
 
using namespace std;

int main()
{
	multimap<int, int> multimp;
	multimp.insert(pair<int,int>(1,45));
	multimp.insert(pair<int,int>(2,54));
	multimp.insert(pair<int,int>(2,44));
	multimp.insert(pair<int,int>(3,54));
	multimp.insert(pair<int,int>(4,50));
	cout<<"Size of multimap is "<<multimp.size();
	multimp.clear();
	cout<<"\nAfter clear\n";
	cout<<"Size of multimap is "<<multimp.size();
	return 0;
}
