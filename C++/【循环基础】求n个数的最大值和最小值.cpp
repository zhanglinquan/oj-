#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,maxn=-99999,minn=999999,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x>maxn) maxn=x;
		if(x<minn) minn=x;
	}
	cout<<maxn<<" "<<minn;
	return 0;
}
