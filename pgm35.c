#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int num, i;
   num = i = 0;


       printf("\n\nCount total number of numerics :\n");
       printf("--------------------------------------------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

     /* Checks each character of string*/

    while(str[i]!='\0')
    {
        if((str[i]>='0' && str[i]<='9'))
        {
          num++;
        }
        i++;
    }

    printf("Number of numeric in the string is : %d\n", alp);
 
}
