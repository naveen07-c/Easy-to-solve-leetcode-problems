/* problem link
https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/
 */
#include<stdio.h>
int digit(int n,int m){
  int num1=0,num2=0;
  for(int i=1;i<=n;i++){
    if(i%m==0){
     num2+=i; 
    }
    else{ 
    num1+=i;
    }
  }
  return num1-num2;

}
int main()
{
    printf("%d",digit(5,1));
    return 0;
}