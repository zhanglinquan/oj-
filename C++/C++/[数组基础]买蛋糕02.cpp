#include<bits/stdc++.h>
using namespace std;
struct num{
		int num;
		int i;
};
/*
	class num{
		public:
			int num;
			int i;
};
*/
num a[1000000];
void bsort(num a[],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[j].num>=a[i].num) {
				swap(a[j].num,a[i].num);
				swap(a[j].i,a[i].i);
			} 
		}
	}
}
void input(num a[],int n){
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].i=i;
	}
}
void output(num a[],int n){
	for(int i=1;i<n;i++){
		cout<<a[i].i<<" ";
	}
	cout<<a[n].i<<endl;
}
int main(){
	int n;
	cin>>n;
	input(a,n);
	bsort(a,n);
	output(a,n);
	return 0;
}

