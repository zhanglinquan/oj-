#include<bits/stdc++.h>
using namespace std;
int reverseInt( int num ){
	int result = 0;
	for (int j = num; j ; )
	{
		j = j/10*10;
		result = result * 10 + num - j;
		j = j /10;
		num = num/10;
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	if(reverseInt(n)==n) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}

