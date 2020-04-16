#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v{3,5,7,8,9,1};
	int odds;
	bool a,b,c;
	odds=count_if(begin(v),end(v),[](int elem){return elem%2!=0;});
	a=(odds==v.size());
	b=(odds>0);
	c=(odds==0);
	a=all_of(begin(v),end(v),[](int elem){return elem%2!=0;});
	b=any_of(begin(v),end(v),[](int elem){return elem%2!=0;});
	c=none_of(begin(v),end(v),[](int elem){return elem%2!=0;});
	cout<<a<<" "<<b<<" "<<c;
	return 0;
} 
