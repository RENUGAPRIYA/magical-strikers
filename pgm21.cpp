#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, tn;
     int sum = 0;
 
     printf("Enter the first term value : ");
     scanf("%d", &a);
     printf("Enter the total numbers : ");
     scanf("%d", &n);
     printf("Enter the common difference : ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
