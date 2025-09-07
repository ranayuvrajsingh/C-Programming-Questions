#include <stdio.h>
int main(){for(int n=1;n<=1000;n++){int x=n,s=0;while(x){int d=x%10;s+=d*d*d;x/=10;}if(s==n)printf(n==1000?"%d":"%d ",n);}return 0;}
