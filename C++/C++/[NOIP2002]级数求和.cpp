#include<bits/stdc++.h>
using namespace std;
int main(){
	long double sn=1,k;
	long double n=1;
	cin>>k;
	while(sn<=k){
		n++;
		sn=sn+1/n;
	}
	cout<<n<<endl;
	return 0;
}
