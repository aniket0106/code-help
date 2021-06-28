#include<stdio.h>
#include<stdlib.h>
int keyCheck(int arr[],int k,int x,int n)
{
	int i=0,j=0,flag=0;
	while(j<n)
	{
		flag=0;
		while(j<n && j-i<k)
		{
			if(arr[j]==x)
				flag=1;
			j++;
		}
		if(flag!=1)
			return 0;
		i=j;
	}
	return 1;
}
int main()
{
	int arr[]={3,5,2,4,9,3,1,7,3,11,12,3};
	int arr1[]={5,8,7,12,14,3,9};
	int arr2[]={23,23,23,65,34,54,76,32,23,45,21,23,25};
	int res=keyCheck(arr2,5,23,13);
	if(res==1)
		printf("\nkey is presented in all intervals of array");
	else
		printf("\nkey is not present in all intervals of an array");
}
