#include <stdio.h>
int main(){int s=0;for(int n=2;n<=1000;n++){int p=1;for(int i=2;i*i<=n;i++)if(n%i==0){p=0;break;}if(p)s+=n;}printf("%d",s);return 0;}
