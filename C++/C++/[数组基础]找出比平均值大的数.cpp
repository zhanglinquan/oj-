#include<bits/stdc++.h>
using namespace std;
double a[10000000];
void input(double a[],int maxn){
	for(int i=1;i<=maxn;i++){
		cin>>a[i];
	}
}
long double find_av(double a[],int maxn){
	long double av=0;
	for(int i=1;i<=maxn;i++){
		av+=a[i];
	}
	av/=maxn;
	return av;
}
int output_overav(double a[],int maxn,long double av){
	int overs=0;
	for(int i=1;i<=maxn;i++){
		if(a[i]>=av) overs++;
	}
	return overs;
}
int main(){
	int n;
	cin>>n;
	input(a,n);
	long double av;
	av=find_av(a,n);
	cout<<output_overav(a,n,av)<<endl;;
	return 0;
}

