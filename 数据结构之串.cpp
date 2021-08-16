#include <stdio.h>
#include<stdlib.h>
#include <string.h> 
//BF
/*int BF(char s[],char t[])
{
    int i=0,j=0;
    while(s[i]!='\0'&&t[j]!='\0')
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            i=i-j+1;
            j=0;
        }
    }
    if(t[j]=='\0')
    {
        return i-j;
    }
    else 
        return -1;
}
int main()
{
    char s[]="goodgoogle";
    char t[]="google";
    int x=BF(s,t);
    printf("%d",x);
    return 0;
}*/
//KMP
int next[1000001];
void get_next(char t[])
{
    int i=0,j=-1;
    next[0]=-1;
    while(i<strlen(t)-1)
    {
        if(j==-1||t[i]==t[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else{
            j=next[j];
        }
    }
}

int kmp(char s[],char t[])
{
    int i=0,j=0;
    int len1=strlen(s);
    int len2=strlen(t);
    while(i<len1&&j<len2)
    {
        if(j==-1||s[i]==t[j])
        {
            i++;
            j++;
        }
        else 
        {
            j=next[j];
        }
    }
    if(j>=len2)
    {
        return i-len2+1;
    }
    else
        return -1;
}
int main()
{
    char s[101],t[101];
    gets(s);
    gets(t);
    get_next(t);
    printf("%d",kmp(s,t));
    return 0;
}
