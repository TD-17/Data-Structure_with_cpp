#include<iostream>
#include<vector>
#include<algorithm>

#include<cstring>
using namespace std;
class employee
{
	int salary;
	string firstname;
	string lastname;
	public:
		employee(string fname,string lname,int sal)
		{
			salary=sal;
			lastname=lname;
			firstname=fname;
		}
		int get_salary()
		{
			return salary;
		}
		string name()
		{
			return firstname+","+lastname;
		}
		void display()
		{
			cout<<firstname<<" "<<lastname<<" "<<salary<<endl;
		}
};
int main()
{
	 vector<employee> e{{"kate","gre",1000},{"obvious","artificial",2000},{"fake","name",1000},{"alan","turning",2000},{"grace","hopper",2000},{"anita","borg",2000}};
//	 sort(begin(e),end(e),[](employee e1,employee e2){return e1.get_salary()<e2.get_salary();
//	 });
//	 for_each(begin(e),end(e),[](employee e1){e1.display();
//	 });
//	 sort(begin(e),end(e),[](employee e1,employee e2){return e1.name()>e2.name();
//	 });
	 stable_sort(begin(e),end(e),[](employee e1,employee e2){return e1.get_salary()<e2.get_salary();
	 });
	 for_each(begin(e),end(e),[](employee e1){e1.display();
	 });
	 return 0;
}
