/* problem Link
https://leetcode.com/problems/intersection-of-two-arrays/description/
*/
#include <stdio.h>
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
     int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int k = 0; // Count of unique intersection elements
    int i, j;
    
   
    for (i = 0; i < nums1Size; i++) {
        for (j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                
                int alreadyExists = 0;
                for (int m = 0; m < k; m++) {
                    if (result[m] == nums1[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }

                if (!alreadyExists) {
                    result[k++] = nums1[i];
                }
                break; 
            }
        }
    }

    *returnSize = k; // Set the size of the result array

    return result; // Return the result array
}