//implementing quick sort using array
#include<stdio.h>
#include<stdlib.h>
int partiation (int arr[],int start,int end)
{
	int temp,pivot=arr[end],i=start,index=start;
	
	for(i=start;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
			index++;
		}
	}
	arr[end]=arr[index];
	arr[index]=pivot;
	
	return index;
}
void quickSort (int arr[],int start,int end)
{
	int rindex;
	if(start<end)
	{
		rindex=partiation(arr,start,end);
		quickSort(arr,start,rindex-1);
		quickSort(arr,rindex+1,end);
	}
}
int main ()
{
	int i=0;
	int arr[]={30,10,48,16,2,6,32,20};
	quickSort(arr,0,7);
	for(i=0;i<8;i++)
		printf("\n\t%d",arr[i]);
}
