//implementing radix sort 
#include<stdio.h>
#include<stdlib.h>
void countSort(int arr[],int max,int size,int temp)
{
	int i=0;
	int count[max+1];
	int output[size];
	for(i=0;i<=max;i++)
		count[i]=0;
	for(i=0;i<size;i++)
		count[(arr[i]/temp)%10]++;
	for(i=1;i<=max;i++)
		count[i]=count[i]+count[i-1];
	for(i=size-1;i>=0;i--)
		output[--count[(arr[i]/temp)%10]]=arr[i];
	for(i=0;i<size;i++)
		arr[i]=output[i];
}
void radixSort(int arr[],int max,int size)
{
	int i=0;
	for(i=1;max/i>0;i*=10)
	{
		countSort(arr,max,size,i);
	}
}
int main()
{
	int arr[]={212,107,150,25,5,802,102,99,160};
	int i=0,max=-1;
	for(i=0;i<9;i++)
		if(max<arr[i])
			max=arr[i];
	radixSort(arr,max,9);
	for(i=0;i<9;i++)
		printf("%d  ",arr[i]);
	return 0;
}
