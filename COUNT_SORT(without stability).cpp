//implementing count sort without stability
#include<stdio.h>
#include<stdlib.h>
void countSort(int arr[],int max,int size)
{
	int i=0,j=0,k=0;
	int count[max+1];
	int output[size];
	for(i=0;i<=max;i++)
		count[i]=0;
	for(i=0;i<size;i++)
		count[arr[i]]++;
	for(i=0;i<=max;i++)
	{
		if(count[i]==0)
			continue;
		else
		{
			j=count[i];
			while(j>0)
			{
				arr[k++]=i;
				j--;
			}
		}
	}
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
