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

int search(int arr[],int val,int start, int end)
{
    if(end>start)  //this is very important
    {
        int result=-1;
        int mid=start+(end-start)/2;
        if(arr[mid]==val)
            result=mid;
        else if(arr[mid]>val)
            result=search(arr,val,start,mid);
        else
            result=search(arr,val,mid+1,end);
        return result;
    }
    else
        return -1;
}

int main() {
    int arr[]={2,7,3,4,9};
    int val=13;
    //first sort the array;
    int num=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<num;i++)
    {
        int index=SelectionSort(arr,i,num);
        swap(&arr[i],&arr[index]);
    }
    //arr[]={2,3,4,7,9}
    int a=0;
    int b=0;
    for(int j=num-1;j>=0;j--) //should be aware that loop should run for num-1 times
    {
        int diff=val-arr[j];
        if(diff>0)
        {
            int x=search(arr,diff,0,num-1);
            if(x>0 && x!=j)
            {
                a=j;
                b=x;
                break;
            }
        }
    }
    
    //thus the values are arr[a] and arr[b];
    printf("the values are : %d and %d", arr[a],arr[b]);
	// your code goes here
	return 0;
}
