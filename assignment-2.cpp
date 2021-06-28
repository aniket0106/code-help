#include<stdio.h>
#include<stdlib.h>
void reverse1 (int arr[],int n)
{
	int i=0,j=0;
	int arr1[n];
	for(i=n-1;i>=0;i--)
		arr1[j++]=arr[i];
	
	for(i=0;i<n;i++)
	{
		arr[i]=arr1[i];
	}
}
void reverse2(char *ch,int n)
{
	int i=0,j=n-1;
	char temp;
	for(;i<j;i++,j--)
	{
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
		
	}
}
void display(int arr[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
void display1(char *arr,int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%c\t",arr[i]);
}
int main()
{
	int arr[]={1,2,3,4,5};
	char ch[]={'c','c','d'};
	printf("\n before reversed\n");
	display(arr,5);
	printf("\n after reversed\n");
	reverse1(arr,5);
	display(arr,5);
	
	printf("\n before reversed\n");
	display1(ch,3);
	printf("\n after reversed\n");
	reverse2(ch,3);
	display1(ch,3);
}
