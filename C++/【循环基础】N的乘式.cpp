#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	for(int i=1;i*i<=n;i++){
		if(n%i==0) cout<<n<<"="<<i<<"*"<<n/i<<endl;
	}
	return 0;
}

