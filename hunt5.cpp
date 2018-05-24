int a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int b[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
#include<stdio.h>
main()
{
int i,j,size;
char srt[100];
clrscr();
printf("enter your string size");
scanf("%d",&size);
printf("enter your name or a string");
for(i=0;i<=size;i++)
{
scanf("%c",&str[i]);
}
            for(i=0;i<=size;i++)
             {
              for(j=0;j<26;j++)
                {
                 if(str[i]==a[j] && str[i]==b[j])
                 {
                  int m[j]=a[j];
                  int n[j]=b[j];
                   cout<<a[j]<<b[j];
                  }
                 }
              }
}
