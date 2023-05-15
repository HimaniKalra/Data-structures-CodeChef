#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int maxeeee(int arr[],int n)
{
    sort(arr,arr+n);
    int mc=1,c=1;
    int me=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        c++;
        else
        c=1;
        if(c>mc)
    {
        mc=c;
        me=arr[i-1];
    }
    }
    return me;
    
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n,a,b=0; cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int maxf;
	    maxf=maxeeee(arr,n);
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=maxf)
	        b++;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
