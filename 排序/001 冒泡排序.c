#include<stdio.h>
/*如果后面一个元素比前面的大,就交换它们*/
int main(){
    int arr[10] = {0,6,5,3,4,1,2,9,7,8};
    int i,j;

    for (i = 0; i < 9; i++){
        for(j = 0; j < 9-i; j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j + 1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    for (i = 0; i < 9; i++){
        printf("%d,", arr[i]);
    }

    return 0;
}