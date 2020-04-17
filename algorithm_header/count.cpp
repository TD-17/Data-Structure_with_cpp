#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v{3,5,6,7,8,1,8,3,8,8,8};
	int num,target=8;
	num=count(v.begin(),v.end(),target);
	cout<<num<<endl;
	num=count(v.begin(),v.end(),3);
	cout<<num;
	return 0;
}
