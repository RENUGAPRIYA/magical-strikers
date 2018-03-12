#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
  int i, j;
  printf(" Repeating elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
        if(arr[i]==0)
        {
        printf("unique");
        }
        else
        { for (i = 0; i < size; ++i) 
        {
 
            for (j = i + 1; j < size; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] =arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
}   }  
 
int main()
{
  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]);  
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
