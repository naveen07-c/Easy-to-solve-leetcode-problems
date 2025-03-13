#include <stdio.h>
#include <stdlib.h>
void moveZeroes(int* nums,int size) {
    int temp=0, l=0;
    for(int r=0; r<size; r++) {
        if(nums[r]!=0) {
            temp=nums[r];
            nums[r]=nums[l];
            nums[l]=temp;
            l++;
        }
    }
    for(int i=0; i<size; i++) {
        printf("%d\t",nums[i]);
    }
}

int main()
{
    int *arr=malloc(sizeof(int)*4);
    arr[0]=0;
    arr[1]=12;
    arr[2]=0;
    arr[3]=11;
    moveZeroes(arr,4);
    return 0;
}