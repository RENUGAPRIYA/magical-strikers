#include<cstdio>
#include<algorithm>
#define min(x,y)(x<y?x:y)

using namespace std;
#define min(x,y)(x<y?x:y)

int main()

{
int a[1000],n,i,min1=0,min2=0;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
sort(a,a+n);
min2=abs(a[1]-a[0]);
for(i=2;i<n;i++)
{ 
  min1=abs(a[i]-a[i-1]);
	min2=min(min2,min1);
}

printf("%d\n",min2);
	return 0;
}
