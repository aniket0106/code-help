//merge two sorted array
/*
we cant make a function to return an array so for returning the array
we can do this by two ways-:
1.by using static array     static int arr[default size];
2.by using structure        struct abc{int arr[default size];};    struct abc a;
*/
#include<stdio.h>
#include<stdlib.h>
static int arr3[30];
void mergeArray (int arr1[],int arr2[],int n1,int n2)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}
	while(i<n1)
		arr3[k++]=arr1[i++];
	while(j<n2)
		arr3[k++]=arr2[j++];
}
int main ()
{
	int i;
	int arr1[]={5,7,9,10,12,15};
	int arr2[]={1,3,4,6,8,13,14,20};
    mergeArray(arr1,arr2,6,8);
	for(i=0;i<14;i++)
		printf("%d ",arr3[i]);
}
