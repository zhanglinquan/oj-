#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,b,g;
	cin>>g>>s;
	cin>>b;
	n=g*100+s*10;
	for(int i=0;i<=9;i++){
		n+=i;
		if(n%b==0) cout<<i<<endl;
		n=n-i;
	}
	return 0;
}

