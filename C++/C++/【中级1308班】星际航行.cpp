#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,in,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>in;
		if(in%10==0) k++;
	}
	cout<<k<<endl;
	return 0;
}
