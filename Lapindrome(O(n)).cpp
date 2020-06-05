#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,t;
    int b[26],c[26];
    char a[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        j=strlen(a);
        if(j==1)
        {
            printf("NO\n");
            continue;
        }
        for(i=0;i<26;i++)
        b[i]=0,c[i]=0;
        for(i=0;i<j;i++)
        {
            if(i<j/2)
            {
                b[a[i]-'a']++;
            }
            else if(j%2!=0 && i==j/2)
            continue;
            else
            {
                c[a[i]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(b[i]==c[i])
            continue;
            else
            {
                printf("NO\n");
                break;
            }
        }
        if(i==26)
        printf("YES\n");
    }
    return 0;
}
