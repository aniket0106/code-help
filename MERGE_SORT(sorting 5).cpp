#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int start,int mid,int end)
{
	int brr[8];
	int i=start,j=mid+1,k=start;
	while(i<=mid&&j<=end)
	{
		if(arr[i]<arr[j])
			brr[k++]=arr[i++];
		else
			brr[k++]=arr[j++];
	}
	while(i<=mid)
		brr[k++]=arr[i++];
	while(j<=end)
		brr[k++]=arr[j++];
	for(i=start;i<=end;i++)
		arr[i]=brr[i];
}
void mergeSort(int arr[],int start,int end)
{
	int mid=0;
	if(start<end)
	{
		mid=(end+start)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
int main ()
{
	int i=0;
	int arr[]={30,10,48,16,2,6,32,20};
	mergeSort(arr,0,7);
	for(i=0;i<8;i++)
		printf("\n\t%d",arr[i]);
} 
