# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int i, n, d ; 
 clrscr() ; 
 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= 5 ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 getch() ; 
}
