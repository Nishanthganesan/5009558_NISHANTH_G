#include<stdio.h>
int main()
{
    int ac[26];
    char s[100];
    fgets(s, sizeof(s), stdin);
    char c = 'c';
    char *tmp = s;
    int i;
    int pangram = 1;
    for(i=0;i<26;i++)
    {
        ac[i] =0;
    }
    while(*tmp)
    {
        c=*tmp;
        if(c>='A' && c<='Z')
        c += 32;
        
        if(c>='a' && c<='z')
        {
            ac[c-'a']++;
        }
        tmp++;
    }
    for(i=0;i<26;i++)
    {
        if(ac[i]==0){
            pangram=0;
            break;
        }
    }
    if(pangram==1){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }
}