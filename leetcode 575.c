problem link
https://leetcode.com/problems/distribute-candies/description/?envType=problem-list-v2&envId=array

int compare(const void *a, const void *b){
    return (*(int *)a)-(*(int*)b);
}
int distributeCandies(int* candyType, int candyTypeSize) {
    int c=1;
    qsort(candyType,candyTypeSize,sizeof(int),compare);
    for(int i=1;i<candyTypeSize;i++){
        if(candyType[i]!=candyType[i-1]){
            c++;
        }
    }
   if(c<(candyTypeSize/2))
    return c;

return candyTypeSize/2;
 }
