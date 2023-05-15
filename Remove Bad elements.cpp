#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int t;
	cin>>t;
	while(t--)
	{ long int n,count=1,temp=1,max=0;
	  scanf("%d",&n);
	  int a[n];
	  for(long int i=0;i<n;i++)
	  { scanf("%d",&a[i]);
	  } 
	  sort(a,a+n);
      for(int i=1;i<n;i++)
      { if(a[i]==a[i-1])
        temp++;
        else temp=1;
        if(temp>max)
        max=temp;
      }
     printf("%d",(n-max));
     printf("\n");
	}
	return 0;
}
