#include <stdio.h>
int main(){char ch;if(scanf(" %c",&ch)!=1)return 0;if(ch>='A'&&ch<='Z')printf("Uppercase");else if(ch>='a'&&ch<='z')printf("Lowercase");else printf("Not Alphabet");return 0;}
