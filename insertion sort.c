#include<stdio.h>
#include<math.h>
void insertionsort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}}
	void printarray(int arr[],int n)
	{
		
		int i;
		for(i=0;i<n;i++)
		printf("\t %d",arr[i]);
		printf("\n");
	}
	int main()
	{
		int arr[]={13,54,1,98,543,89999};
		int n=sizeof(arr)/sizeof(arr[0]);
		insertionsort(arr,n);
		printarray(arr,n);
		return 0;
	}
