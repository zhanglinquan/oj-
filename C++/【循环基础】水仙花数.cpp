#include<iostream>
using namespace std;
int main(){
	int in,g,s,b,k=0;
	for(int i=100;i<=999;i++){
		in=i;
		g=in%10;
		in=in/10;
		s=in%10;
		b=in/10;
		if(b*b*b+s*s*s+g*g*g==i)
			{
				if(k==0){
				
					cout<<i;
					k=1;
				}
				else{
					cout<<" "<<i;
				}
			}
	}
	return 0;
}

