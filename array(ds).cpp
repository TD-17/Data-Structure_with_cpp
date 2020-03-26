#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	if(t>=1 && t<=1000)
	{
	    for(int i=0;i<t;i++)
	    {
	        int n;
	        if(n>=0 && n<=100000)
	        {
	         cin>>n;
	         int arr[100000];
	         int arr2[100000];
	         for(int i=0;i<n;i++)
	         {
	             cin>>arr[i];
	         }
	         for(int j=0;j<n;j++)
	         {
	             int temp[100000];
	             for(int i=0;i<n;i++)
	             {
	              if(arr[i]==j)
	              {
	              	 temp[j]=arr[i];
	                 arr2[j]=temp[j];
	              }
	              temp[j]=0;
	              
	             } 
	             if(arr2[j]!=j)
	             {
	                 arr2[j]=-1;
	             }
	            
	         }
	         for(int i=0;i<n;i++)
	         {
	             cout<<arr2[i]<<" ";
	         }
	         
	        } 
	    }
	}
	return 0;
}
