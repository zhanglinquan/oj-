#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,i2,s=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		i2=i;
		while(i2){
			if(i2%10==x) s++;
			i2/=10;
		}
	}
	cout<<s<<endl;
	return 0;
}

