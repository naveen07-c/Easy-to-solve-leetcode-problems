/* problem link
 https://leetcode.com/problems/single-number/description/
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5]={2,3,3,4,4};
    // actual logic
      int num =0;
      for(int i=0;i<5;i++){
         num^=arr[i];
      }
      //  return num;
      // actual logic
      printf("%d",num);
 return 0;
}
