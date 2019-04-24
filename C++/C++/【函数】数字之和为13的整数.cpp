#include<bits/stdc++.h>
using namespace std;
int numsum(int in){
	int we,sum=0;
	while(in!=0){
	we=in%10;
	in=in/10;
	sum+=we;
	}
	return sum;
}
int main(){
	for(int i=1;i<=1000;i++){
		if(numsum(i)==13) cout<<i<<endl;
	}
	return 0;
}

