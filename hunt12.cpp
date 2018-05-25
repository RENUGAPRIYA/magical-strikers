#include <iostream>
using namespace std;
 
void MaxHeapify(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2*i;
 
	while (j <= n)
	{
		if (j < n && a[j+1] > a[j])
			j = j+1;
		if (temp > a[j])
			break;
		else if (temp <= a[j])
		{
			a[j/2] = a[j];
			j = 2*j;
		}
	}
	a[j/2] = temp;
	return;
}
 
void Build_MaxHeap(int a[], int n)
{
	int i;
	for(i = n/2; i >= 1; i--)
		MaxHeapify(a, i, n);
}
 
int main()
{
	int n, i, temp, k;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	n++;
	int arr[n];
	for(i = 1; i < n; i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>arr[i];
	}
 
	cout<<"\nEnter the k value: ";
	cin>>k;
 
	Build_MaxHeap(arr, n-1);
 
	for(i = n-1; i >= n-k; i--)
	{
		temp = arr[i];
		arr[i] = arr[1];
		arr[1] = temp;
		MaxHeapify(arr, 1, i - 1);
	}
 
	cout<<"\nAfter max-heapify the given array "<<k<<" times the array state is: ";
	for(i = 1; i < n; i++)
		cout<<"->"<<arr[i];
 
	cout<<"\n\nThe "<<k<<"th largest element is: "<<arr[n-k];
	return 0;
}
