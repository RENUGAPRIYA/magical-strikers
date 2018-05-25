#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void stre(char (&a1)[20], int j1, int i1)
{
    char b[20];
    for(int k=i1-j1;k<i1;k++)
        b[k]=a1[i1-k-1];
    for(k=i1-j1;k<i1;k++);
        a1[k]=b[k];
}

void main()
{
    clrscr();
    int j;
    char a[20];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        j++;
        if(a[i]==' ')
        { 
            stre(a,j,i);
            j=0;
        }
    }
    stre(a,j,i);
    for(j=0;j<i;j++)
    cout<<a[j];
    getch();
}
