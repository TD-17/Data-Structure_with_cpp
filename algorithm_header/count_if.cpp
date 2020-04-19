#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int odd;
	vector<int> v{3,5,6,7,8,9,1,9};
	odd=count_if(begin(v),end(v),[](int elem){return elem%2!=0;});
	cout<<odd;
	return 0;
}
