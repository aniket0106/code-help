//implementing bubble sort
#include<stdio.h>
#include<stdlib.h>
void bubbleSort (int arr[],int n)
{
	int i=0,j=0,temp=0,flag=0;
	//total number of passes
	for(i=0;i<n-1;i++)
	{
		//total number of comparsion
		for(j=0;j<n-i-1;j++)
		{
			flag=0;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				//we make bubble sort adaptive using flag as variable;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}
int main()
{
	int i=0;
	int arr[]={16,10,14,5,3,1};
	bubbleSort(arr,6);
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);
	return 0;
}
/*
time complexity 
average case -:o(n^2)
max number of comparsion o(n^2)
max number of swap o(n^2)

bubble sort is not adaptive in nature or by default
but we can make it adaptive by using flag as variable
which will break loop if the loop was sorted
best case-:o(n)
max number of comparsion o(n)
max number of swap o(1)

bubble sort is stable in nature that is if we provide two
duplicate elements then position after sorting will reamin 
same
*/
