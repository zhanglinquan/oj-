#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int &x)
{
     int y;
     for(y=2;y<=sqrt(x);y++)
         if (x%y==0)
            return false;
     return true;
}//判断是否为质数 
bool jo(int &u){
	if(u%2==0){
		return false;
	}
	else
		return true;
}//判断奇数 
bool ij(int &re){
	if(re%2==0){
		return true;
	}
	else
		return false;
}//判断偶数 
bool g(int &p){
	if(isprime(p)||jo(p))
		return false;
	else
		return  true;
}//是否满足分解条件 
int main(){
	int in,o=0,m=2;
	cin>>in;
	if(g(in)){
		while(in!=0&&ij(in)){
			in=in/m;
			o++;
		}
	}
	cout<<o<<endl;
	return 0;
}

