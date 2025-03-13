/**
 * Problem Link
 https://leetcode.com/problems/next-greater-element-i/description/
 */
int check(int *nums2,int nums2Size,int index){
 
    for(int i=index;i<nums2Size;i++){
        if(nums2[i]>nums2[index]){
           return nums2[i];
        }
    }
    return -1;
       
}
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
 int *res=malloc(sizeof(int)*nums1Size);
 int k=0;
 for(int i=0;i<nums1Size;i++)  {
    for(int j=0;j<nums2Size;j++){
        if(nums1[i]==nums2[j]){
            res[k]=  check(nums2,nums2Size,j) ;
            k++;
            break;
        }
    }

 } 
 *returnSize=nums1Size;
  return res;  
}
