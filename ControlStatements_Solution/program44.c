#include <stdio.h>
int main(){int n;if(scanf("%d",&n)!=1)return 0;int a[1000];for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++)for(int j=0;j<n-1;j++)if(a[j]<a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf(i==n-1?"%d":"%d ",a[i]);return 0;}
