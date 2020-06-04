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
	numbers.insert(pair<int, int>(5,23));
	
//	printing map numbers
	for(it=numbers.begin();it!=numbers.end();it++)
	{
			cout<<"first value is "<<it->first;
	        cout<<"  second value is "<<it->second;
	        cout<<endl;
	}
	cout<<"\nLOWER AND UPPER BOUND\n";
	
//	lower bound of 4
    cout<<"key "<<numbers.lower_bound(4)->first;
    cout<<" value "<<numbers.lower_bound(4)->second<<endl;
    
//  upper bound of 4
    cout<<"key "<<numbers.upper_bound(4)->first;
    cout<<" value "<<numbers.upper_bound(4)->second<<endl;

	return 0;
}
