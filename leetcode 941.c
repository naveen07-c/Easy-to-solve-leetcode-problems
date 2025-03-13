Problem link
https://leetcode.com/problems/valid-mountain-array/description/?envType=problem-list-v2&envId=array


int max_arr(int *arr,int size){
     int index=0,max=arr[0];
        for(int i=0;i<size;i++){
            if(max<arr[i]){
                max=arr[i];
                index=i;
            }
        }
        return index;
    }

bool validMountainArray(int* arr, int arrSize){
    if(arrSize<3){
        return false;
    }
    int max_i=max_arr(arr,arrSize);
    if((arr[0]==arr[max_i]||arr[arrSize-1]==arr[max_i])){
        return false;
    }

for(int i=0;i<max_i;i++){
    if(arr[i]>=arr[i+1]){
      return false;
    }
}
for(int i=max_i;i<arrSize-1;i++){
    if(arr[i]<=arr[i+1]){
        return false;
    }
}
return true;
}
