#include<bits/stdc++.h>
using namespace std;
bool prime(int &x)
{
     int y;
     for(y=2;y<=sqrt(x);y++)
         if (x%y==0)
            return false;
     return true;
}
int main(){
    int h,h2;
    cin>>h;
    h2=h;
    if(prime(h)){
        cout<<h<<endl;
        return 0;
    }
    for(int i=2;i<ceil(h2/2);i++){
        h=h2;
        if(prime(i)&&h%i==0){
            while(h%i==0){
                cout<<i<<endl;  
                h=h/i;
            }
        }
    }
    return 0;
}
