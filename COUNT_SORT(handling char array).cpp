//implementing count sort with stability
#include<stdio.h>
#include<stdlib.h>
void countSort(char arr[],int size)
{
	int i=0;
	char count[26];
	char output[size];
	for(i=0;i<26;i++)
		count[i]=0;
	for(i=0;i<size;i++)
		count[arr[i]-'a']++;
	for(i=1;i<26;i++)
		count[i]=count[i]+count[i-1];
	for(i=size-1;i>=0;i--)
		output[--count[arr[i]-'a']]=arr[i];
	for(i=0;i<size;i++)
		arr[i]=output[i];
}
int main()
{
	char arr[]={'a','d','e','f','b','e','c','d','a','d'};
	int i=0;
	countSort(arr,10);
	for(i=0;i<10;i++)
		printf("%c  ",arr[i]);
	return 0;
}
