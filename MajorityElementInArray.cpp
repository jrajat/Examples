#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;


void swap(int *a,int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
}
void SelectionSort(int a[],int index, int num)
{
    int x=a[index];
    int j=index;
    for(int i=index+1;i<num;i++)
    {
        if(x>a[i])
        {
            x=a[i];
            j=i;
        }
    }
    swap(&a[index],&a[j]);
}
int main() {
	// your code goes here
	int arr[]={7,4,4,4,3,4,6};
	/*we need to find the Majority Element*/
	//we will try to sort the element by selection sort
	int num=sizeof(arr)/sizeof(arr[0]);
	printf("Array Before Sorting\n");
	for(int j=0;j<num;j++)
	    printf("%d ",arr[j]);
	for(int i=0;i<num;i++)
	    SelectionSort(arr,i,num);
	printf("\nArray After Sorting\n");
    for(int j=0;j<num;j++)
	    printf("%d ",arr[j]);
	    
	 /*Now we need to find the majority element.
	 so there are three cases the majority element from starting or from end or it
	 can be in between*/
    
    int mid=num/2;
    int a=mid;
    int x=0;
  
    for(int i=0;i<mid;i++)
    {
        if(arr[i]==arr[a+i])
        {
            x=x+1;
            break;
        }
    }
    
    if(x>0)
        printf("\nThe given array is Majority array");
    else
        printf("\nThe given array is not Majority array");
        
	return 0;
}
