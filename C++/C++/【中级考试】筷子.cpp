#include<bits/stdc++.h>
using namespace std;
int a[10000005];
void input(int a[],int n){
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x]++;
	}
}
int main(){
	int n;
	cin>>n;
	input(a,n);
	for(int i=1;i<=1000000;i++){
		if(a[i]%2!=0){
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}

