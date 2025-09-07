#include <stdio.h>
int main(){char ch;if(scanf(" %c",&ch)!=1)return 0;int v=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');printf(v?"Vowel":"Consonant");return 0;}
