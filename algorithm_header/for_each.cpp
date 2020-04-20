#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> a{2,3,4,5,5,6};
	auto numbers=for_each( begin(a),end(a),[](int &elem){elem=2;
	});
	for(auto &i:a)
	{
		cout<<i<<endl;
	}
	return 0;
}
