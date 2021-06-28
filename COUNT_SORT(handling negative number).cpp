//implementing count sort handling negative number 
#include<stdio.h>
#include<stdlib.h>
int minEle(int arr[],int size)
{
	int i=0,min=-1;
	for(i=0;i<size;i++)
		if(min>arr[i])
			min=arr[i];
	return min;
}
void countSort(int arr[],int max,int size)
{
	int i=0;
	int min=minEle(arr,size);
	max=max-min;
	int count[max+1];
	int output[size];
	
	for(i=0;i<=max;i++)
		count[i]=0;
	for(i=0;i<size;i++)
		count[arr[i]-min]++;
	for(i=1;i<=max;i++)
		count[i]=count[i]+count[i-1];
	for(i=size-1;i>=0;i--)
		output[--count[arr[i]-min]]=arr[i];
	for(i=0;i<size;i++)
		arr[i]=output[i];
}
int main()
{
	int arr[]={6,4,-3,4,5,-2,5,1,0,8};
	int i=0,max=-1;
	for(i=0;i<11;i++)
		if(max<arr[i])
			max=arr[i];
	countSort(arr,max,11);
	for(i=0;i<11;i++)
		printf("%d  ",arr[i]);
	return 0;
}
