#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string a;
	    string b;
	    for(int i=0;i<(n/2);i++){
	        a+=s[i];
	    }
	    for(int i=(n/2);i<(n);i++){
	       b+=s[i];
	    }
	    string result1=a+b;
	    string result2=b+a;
	    if(result2==s){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
