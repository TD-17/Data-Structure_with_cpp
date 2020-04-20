#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{2,3,4,5,6};
	vector<string> words{"one","two","three"};
	//sum of elements in vector a.
	int total=accumulate(begin(a),end(a),0);
	cout<<total<<endl;
	//sum of even elements in vector a.
	total=accumulate(begin(a),end(a),0,[](int total,int i){if(i%2==0) return total+i; return total;
	});
	cout<<total<<endl;
	//accumulate function on vector words of string
	auto allwords=accumulate(begin(words),end(words),string{});
	cout<<allwords<<endl;
	allwords=accumulate(begin(words),end(words),string{"words:"},[](const string &total,string &s){return total+" "+s;
	});
	cout<<allwords<<endl;
	return 0;
}
