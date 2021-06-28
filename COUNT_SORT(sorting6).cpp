//implementing count sort with stability
#include<stdio.h>
#include<stdlib.h>
void countSort(int arr[],int max,int size)
{
	int i=0;
	int count[max+1];
	int output[size];
	for(i=0;i<=max;i++)
		count[i]=0;
	for(i=0;i<size;i++)
		count[arr[i]]++;
	for(i=1;i<=max;i++)
		count[i]=count[i]+count[i-1];
	for(i=size-1;i>=0;i--)
		output[--count[arr[i]]]=arr[i];
	for(i=0;i<size;i++)
		arr[i]=output[i];
}
int main()
{
	int arr[]={4,2,1,2,1,4,1,9,6,3,4};
	int i=0,max=-1;
	for(i=0;i<11;i++)
		if(max<arr[i])
			max=arr[i];
	countSort(arr,max,11);
	for(i=0;i<11;i++)
		printf("%d  ",arr[i]);
	return 0;
}
