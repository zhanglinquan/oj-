#include <stdio.h>
void sort(int a[],int left,int right)
{
     int i,j,t;
     i=left,j=right+1;
     if(left<right){
      while(1){
       while(i+1<right+1&&a[++i]<a[left]);
       while(j-1>left-1&&a[--j]>a[left]);
       if(i>=j)break;
       t=a[i],a[i]=a[j],a[j]=t;
      }
      t=a[left],a[left]=a[j],a[j]=t;
      sort(a,left,j-1);
      sort(a,j+1,right);
     }
}
  
int main()
{
    int a,b[4],ma,mi,i;
    scanf("%d",&a);
    for(;;)
    {
        for(i=0;i<4;i++)b[i]=a%10,a/=10;
        sort(b,0,3);
        ma=b[3]*1000+b[2]*100+b[1]*10+b[0];
        mi=b[3]+b[2]*10+b[1]*100+b[0]*1000;
        a=ma-mi;
        printf("%d-%d=%d\n",ma,mi,a);
        if(a==6174)break;
    }
    return 0;
}

