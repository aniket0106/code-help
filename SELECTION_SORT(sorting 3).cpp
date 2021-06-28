//implementing selection sort
#include<stdio.h>
#include<stdlib.h>
void selectionSort (int arr[],int n)
{
	int i=0,temp=0,j=0,min=0;
	//number of passes
	for(i=0;i<n-1;i++)
	{
		//choose i element as min element
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;	
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;	
	}
}
int main()
{
	int i=0;
	int arr[]={16,10,14,5,3,1};
	selectionSort(arr,6);
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);
	return 0;
}
/*
time complexity 
average case -:o(n^2)
max number of comparsion o(n^2)
max number of swap o(n)

selection sort is not adaptive in nature 
best case-:o(n^2)
max number of comparsion o(n)
max number of swap o(n)

selection sort is stable in nature that is if we provide two
duplicate elements then position after sorting will reamin 
same
*/
