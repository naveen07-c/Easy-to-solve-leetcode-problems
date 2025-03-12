/*problem link
https://leetcode.com/problems/type-of-triangle/description/
*/
#include<stdio.h>
char* triangle(int *arr){
  if(arr[0]==arr[1] && arr[1]==arr[2])
  {
  return "equilateral";
  }
  else if(arr[0]+arr[1]>arr[2] && arr[1]+arr[2]>arr[0] && arr[0]+arr[2]>arr[1]){
     if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]){
       return "isoceles";
     }
     else if(arr[0]!=arr[1] && arr[1]!=arr[2] && arr[0]!=arr[2]){
       return "scalene";
     }
  }
  return "none";
  
}
int main()
{
    int *arr=malloc(sizeof(3*sizeof(int)));
    arr[0]=2;
    arr[1]=1;
    arr[2]=1;
    printf("%s",triangle(arr));
    
    return 0;
}