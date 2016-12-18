#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	// your code goes here
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	//need to find the maximum sum of Contiguous Subarray
	int count=sizeof(arr)/sizeof(arr[0]);
	int max_so_far=0;
	int max_ending_here=0;
	for(int i=0;i<count;i++)
	{
	    max_ending_here+=arr[i];
	    if(max_ending_here<0)
	        max_ending_here=0;
	    if(max_so_far<max_ending_here)
	        max_so_far=max_ending_here;
	}
	printf("The sum of Contiguous Array is %d ",max_so_far);
	return 0;
}
