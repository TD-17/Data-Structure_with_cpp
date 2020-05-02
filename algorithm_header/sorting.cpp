#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int i,a[5]={5,7,2,1,8};
	vector<int> v{4,7,8,1,2,-9,-3,-5,-8};
	vector<int> v1=v;
	sort(begin(v1),end(v1));
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	sort(begin(v1),end(v1),[](int elem1, int elem2){ return elem1>elem2;});
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	
	sort(begin(v1),end(v1),[](int elem1, int elem2){ return abs(elem1)>abs(elem2);});
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	sort(a,a+5);
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(a,a+5,greater<int>());
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for_each(begin(v1),end(v1),[](int x)
	{cout<<x<<" ";});
	return 0;
}
