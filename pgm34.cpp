#include(iostream.h)
#include(conio.h)
#include(stdio.h)
void main( )
{
char ch;
int sp=0, ct=0, line=0;
clrscr( );
cout<<"Enter the  lines of text:";
while((ch=getchar())!=EOF)
{
ct++;
if((ch==' ')
sp++;
if(ch=='\n')
line++;
}
cout<<"Total Lines:"<< line;
getch( );
}
