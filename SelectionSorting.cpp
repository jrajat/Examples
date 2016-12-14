#include <iostream>
using namespace std;
#include <stdio.h>

int SelectionSort(int arr[],int index,int num)
{
    int ind=index;
    int val=arr[index];
    for(int i=index;i<num;i++)
    {
        if(val>arr[i])
        {
            val=arr[i];
            ind=i;
        }
    }
    return ind;
}
void swap(int *a,int *b)
{
    int val=*a;
    *a=*b;
    *b=val;
}


int main() {
    int arr[]={2,7,3,4,9};
    int val=16;
    //first sort the array;
    int first=0;
    int num=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<num;i++)
    {
        int index=SelectionSort(arr,i,num);
        swap(&arr[i],&arr[index]);
    }
   
   for(int j=0;j<num;j++)
    printf("%d ",arr[j]);
	// your code goes here
return 0;
}
