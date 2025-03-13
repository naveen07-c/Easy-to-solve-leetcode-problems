https://leetcode.com/problems/monotonic-array/description/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isMonotonic(int* nums, int numsSize) 
{  int count_inc=0,count_dec=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]<nums[i]) count_inc++;
        else if(nums[i-1]>nums[i]) count_dec++;
    }
      return !(count_inc!=0 && count_dec!=0);
}
int main()
{
int *arr=malloc(sizeof(int)*4);
arr[0]=1;
arr[1]=2;
arr[2]=2;
arr[3]=3;
if(isMonotonic(arr,4)){
printf("true");
}
else printf("false");

}