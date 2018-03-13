#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int catcmp(const void *a, const void *b)
{
    char ab[32], ba[32];
    sprintf(ab, "%d%d", *(int*)a, *(int*)b);
    sprintf(ba, "%d%d", *(int*)b, *(int*)a);
    return strcmp(ba, ab);
}
void maxcat(int *a, int len)
{
    int i;
    qsort(a, len, sizeof(int), catcmp);
    for (i = 0; i < len; i++)
        printf("%d", a[i]);
    putchar('\n');
}
int main(void)
{
    int n,q;
    scanf("%d",&n);
    int x[n];
    for(q=0;q<n;q++)
    scanf("%d",&x[q]);
     maxcat(x, sizeof(x)/sizeof(x[0]));
     return 0;
}
