#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000];
    char T[1000];
    int a=0,b=0;
    gets(S);
    gets(T);
    a=strlen(S);
    b=strlen(T);
    printf("%d %d\n",a,b);
    printf("%s %s",S,T);
    return 0;
}

