//implementing bubble sort
#include<stdio.h>
#include<stdlib.h>
void insertionSort (int arr[],int n)
{
	int i=0,hole,value;
	//first element is sorted hence we will start wirth second element and goes upto last
	for(i=1;i<n;i++)
	{
		//lets we create hole
		hole=i;
		value=arr[i];
		//insert element in sorted array from the end
		while(hole>0 && arr[hole-1]>value)
		{
		    //if the last element is bigger then shift to right and check for second last 
			arr[hole]=arr[hole-1];
			hole--;
		}
		//if the element in the array is small then inserted element then add or if the inserted element is smallest
		arr[hole]=value;
	}
}
int main()
{
	int i=0;
	int arr[]={16,10,14,5,3,1};
	insertionSort(arr,6);
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);
	return 0;
}
/*
time complexity 
average case -:o(n^2)
max number of comparsion o(n^2)
max number of swap o(n^2)

insertion sort is  adaptive in nature 
best case-:o(n)
max number of comparsion o(n)
max number of swap o(1)

insertion sort is stable in nature that is if we provide two
duplicate elements then position after sorting will reamin 
same
*/
