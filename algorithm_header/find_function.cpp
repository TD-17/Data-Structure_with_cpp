#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v{4,6,7,8,2,6};
	string s{"hi i am Tanya Dixit"};
	vector<int>::iterator result=find(begin(v),end(v),7);
	if(result !=end(v))
	{
			cout<<"found at position "<<result-begin(v)+1<<endl;
	}
//	vector<char>::iterator ch=find(begin(s),end(s),'T');
    auto l=find(begin(s),end(s),'T');
	cout<<*l;

	return 0;
}
