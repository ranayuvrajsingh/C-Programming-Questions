#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1||n<=0)return 0;int a[100000];for(int i=0;i<n;i++)scanf("%d",&a[i]);int cand=0,cnt=0;for(int i=0;i<n;i++){if(cnt==0){cand=a[i];cnt=1;}else if(a[i]==cand)cnt++;else cnt--;}int f=0;for(int i=0;i<n;i++)if(a[i]==cand)f++;if(f>n/2)printf("%d",cand);else printf("No Majority");return 0;}
