#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,in,jj;
	cin>>n;
	cin>>in;
	if(in%2!=0){
	cout<<in;
	jj=0;	   } 
	else
		jj=9;
	for(int i=1;i<n;i++){
		cin>>in;
	if(in%2!=0&&jj==0){
		cout<<" "<<in;
		jj=88;
					  }
		else
		{
			if(in%2!=0&&jj==9)
			{
			cout<<in;
			jj=88;				
			}
			else
			{
				if(in%2!=0&&jj==88)
					{
						cout<<" "<<in;
					}
			}
			} 
						}
	return 0;
		}
