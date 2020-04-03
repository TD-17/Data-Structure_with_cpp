#include<iostream>
using namespace std;

int merge(int *arr,int *a1,int *a2, int s,int e)
{
	int i=0,j=0,k=0,count=0;
	while(i<s && j<e)
	{
		if(a1[i]>a2[j])
		{
			arr[k++]=a2[j++];
			count=count+s-i;
		}
		else
		{
			arr[k++]=a1[i++];
		}
	}

	while(j<e)
		arr[k++]=a2[j++];
	
	
	while(i<s)
		arr[k++]=a1[i++];
	
	return count;
}

int mergesort(int *arr,int start,int end)
{
    int mid,*a1,*a2,i,k;
    int count=0;	
	if(start>end)
	 return 0;
	if(start==end)
	 return 0;
	if(start==end-1)
	{
		if(arr[start]>arr[end])
		{
		 swap(arr[start],arr[end]);
		 return 1;	
		}
		else 
		 return 0;
	}
	 
	   
		mid=(start+end)/2;
		a1=new int[mid+1];
		a2=new int[end-mid];
	  	for(i=start;i<=mid;i++)
	  	 a1[i]=arr[i];
	  	for(i=mid+1;i<=end;i++)
	  	 a2[i-(mid+1)]=arr[i];
		  
	  	 count+=mergesort(a1,0,mid);
	  	 count+=mergesort(a2,0,end-mid-1);
	  	 count+=merge(arr,a1,a2,mid+1,end-mid);
	  	 
	
	delete []a1;
	delete []a2;
	return count;
}
int main()
{
	int t,n,*arr,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		arr=new int[n];
	    for(i=0;i<n;i++)
	    {
		   cin>>arr[i];
	    }
	    cout<<mergesort(arr,0,n-1)<<endl;
	}

	return 0;
}
