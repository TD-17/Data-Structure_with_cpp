#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>a{2,3,6,7,8};
	vector<int>b{2,3,4,5};
	auto firstchange=mismatch(begin(a),end(a),begin(b));
	int avalue=*(firstchange.first);
	int bvalue=*(firstchange.second);
	cout<<avalue<<" "<<bvalue;
	return 0;
}
