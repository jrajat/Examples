#include <iostream>
using namespace std;
#include <stdio.h>


int search(int arr[],int val,int start, int end)
{
    if(end>start)
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
    int arr[]={2,3,4,5,9,15,25,35,100};
    /**Let's take a scenario for seraching 30 in this array.
     * start=0 and end=8; mid=0+(8-0)/2=4; arr[4]=9<30..
     * the function will go for search(arr,val,mid+1,end)=search(arr,30,5,8)
     * mid=5+(8-5)/2=6
     * arr[6]=25<30
     * so it will again go for search(arr,30,6,8)
     * mid=6+(8-6)/2=7
     * arr[7]=35>30 so it will go for search(arr,30,6,7)
     * now again mid=6+(7-6)/2=6;
     * so arr[6]=25<30 so it will go for search(arr,30,6,6)
     * now this loop will continue for infinite time.. so to avoid this situation we nedd to write end>start
     * */
    int val=90;
    int num=sizeof(arr)/sizeof(arr[0]);
    int index=search(arr,val,0,num-1);
    printf("Index is %d ",index);
	// your code goes here
return 0;
}
