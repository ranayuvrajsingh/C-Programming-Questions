#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;if(n<=1){printf("Not Prime");return 0;}int i=2;while(i*i<=n&&n%i)i++;printf(i*i>n?"Prime":"Not Prime");return 0;}
