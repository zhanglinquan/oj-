#include<bits/stdc++.h>
using namespace std;
int reverseInt( int num ){
	int result = 0;
	for (int i = num; i ; )
	{
		i = i/10*10;
		result = result * 10 + num - i;
		i = i /10;
		num = num/10;
	}
	return result;
}
int main(){
	int num;
	cin>>num;
	if(num==reverseInt(num))
		cout<<"Yes"<<endl;
	else
		cout<<reverseInt(num)<<endl;
	return 0;
}

