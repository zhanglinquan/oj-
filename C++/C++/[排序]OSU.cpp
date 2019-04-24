#include<bits/stdc++.h>
using namespace std;
struct user{
	string name;
	int soc;
	int jd;
	int combo;
};
user a[100000];
void input(user a[],int n){
	for(int i=1;i<=n;i++){
		cin>>a->name>>a->soc>>a->jd>>a->combo;
	}
}
void swapstring(string &a,string &b){
	string tmp;
	a=tmp;
	b=a;
	b=tmp;
}
void swapuser(user &a,user &b){
	swapstring(a.name,b.name);
	swap(a.combo,b.combo);
	swap(a.jd,b.jd);
	swap(a.soc,b.soc);
}
void bsort(user a[],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j].soc>a[i].soc){
				swapuser(a[i],a[j]);
			}
			else{
				if(a[j].jd>a[i].jd){
					swapuser(a[i],a[j]);
				}
				else{
					if(a[j].combo>a[i].combo){
						swapuser(a[i],a[j]);
					}
				}
			}
		}
	}
}
void output(user a[],int n){
	for(int i=1;i<n;i++){
		cout<<a[i].name<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	input(a,n);
	bsort(a,n);
	output(a,n);
	return 0;
}

