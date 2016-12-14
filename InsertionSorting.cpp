#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void InsertionSort(int arr[],int index)
{
    int val=arr[index];
    int j=index;
    j=j-1;
    while(j>=0 && arr[j]>val)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=val;
}

int main() {
	// your code goes here
	int arr[]={5,4,3,2,1};
	int num=sizeof(arr)/sizeof(arr[0]);
	printf("Before Sorting\n");
	for(int i=0;i<num;i++)
	    printf("%d ",arr[i]);
	
	//Sort array by Insertion Sort
	for(int j=1;j<num;j++)
	    InsertionSort(arr,j);
	
	printf("\nAfter sorting\n");
	for(int i=0;i<num;i++)
	    printf("%d ",arr[i]);
	return 0;
}
