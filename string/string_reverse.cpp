#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		string s,result,s1;
		cin>>s;  
        int p=s.rfind('.');  
     
        result = s.substr(p+1, s.size()); 
       
        if(p!=-1)
        {
            result=result+'.';
        }
      
		
		for(i=p-1;i>=0;i--)
		{
            if(s[i]=='.' || i==0)
			{
				if(i==0)
				 s1=s.substr(i,p-i);
				else
				 s1=s.substr(i+1,p-i);
				result=result+s1;
				p=i;
			}		
 		}
		cout<<result<<endl;
	}
}
