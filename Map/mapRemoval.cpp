#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main()
{
	map<int,int> numbers;
	map<int,int>::iterator it;
	
//	entering values in map numbers
	numbers.insert(pair<int, int>(1,40));
	numbers.insert(pair<int, int>(2,23));
	numbers.insert(pair<int, int>(3,56));
	numbers.insert(pair<int, int>(4,12));
	
//	printing map numbers
	for(it=numbers.begin();it!=numbers.end();it++)
	{
			cout<<"first value is "<<it->first;
	        cout<<"  second value is "<<it->second;
	        cout<<endl;
	}
	
//	Removing value with key value 2
    numbers.erase(2);
    
//    after removal
    cout<<"\nAFTER REMOVAL :\n";
    for(it=numbers.begin();it!=numbers.end();it++)
	{
			cout<<"first value is "<<it->first;
	        cout<<"  second value is "<<it->second;
	        cout<<endl;
	}

}
