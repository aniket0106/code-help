// Online C compiler to run C program online
#include <stdio.h>
void shellSort(int arr[],int n)
{
    int gap=0,i=0,temp=0;
    for(gap=n/2;gap>0;gap=gap/2)
    {
        for(i=0;i+gap<n && i<n;i++)
        {
            if(arr[i]>arr[i+gap])
            {
                temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;
            }
            if(i-gap>=0 && arr[i-gap]>arr[i])
            {
                temp=arr[i-gap];
                arr[i-gap]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main() {
    int i=0;
    int arr[9]={46,58,30,38,62,14,18,10,4};
    shellSort(arr,9);
    for(i=0;i<9;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
