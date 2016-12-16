#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Merge(int arr[],int x,int y, int z)
{
    int a1=y-x+1; //since beg and mid value so always mid+1 since loop will be like i<mid+1;
    int a2=z-y;
    int b1[a1];
    for(int i1=0;i1<a1;i1++)
        b1[i1]=arr[x+i1];
        
    int b2[a2];
    for(int i2=0;i2<a2;i2++)
        b2[i2]=arr[y+1+i2];//since mid value already considered so need to take it again..
        
    int num=x;
    int c1=0;
    int c2=0;
    while(c1<a1 && c2<a2)
    {
        if(b1[c1]>b2[c2])
        {
            arr[num]=b2[c2];
            c2++;
        }
        else
        {
            arr[num]=b1[c1];
            c1++;
        }
        num++;
    }
    while(c1<a1)
    {
        arr[num]=b1[c1];
        num++;
        c1++;
    }
    while(c2<a2)
    {
        arr[num]=b2[c2];
        num++;
        c2++;
    }
    
}

void MergingSort(int a[],int beg,int end)
{
    if(end>beg)
    {
        int mid=beg+(end-beg)/2;
        MergingSort(a,beg,mid);
        MergingSort(a,mid+1,end);
        Merge(a,beg,mid,end);
    }
}

int main() {
    int arr[]={1,2,6,5,4,3};
    int num=sizeof(arr)/sizeof(arr[0]);
    printf("Array before Sorting\n");
    
    for(int i=0;i<num;i++)
        printf("%d ",arr[i]);
        
    printf("\nArray After sorting\n");
    MergingSort(arr,0,num-1);
    for(int i=0;i<num;i++)
        printf("%d ",arr[i]);
	// your code goes here
	return 0;
}
