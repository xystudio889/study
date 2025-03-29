#include<stdio.h>
/*在每一轮比较中，在未排序部分找到最小的元素，放在未排序部分的第一位*/

void selectionSort(int arr[], int n){
    int i, j, minIndex;
    for(i = 0; i < n-1; i++){
        minIndex = i;
        for(j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i){
            arr[i] = arr[i] + arr[minIndex];
            arr[minIndex] = arr[i] - arr[minIndex];
            arr[i] = arr[i] - arr[minIndex];
        }
    }
}

int main(){
    int arr[] = {0,6,5,3,4,1,2,9,7,8};
    int i

    selectionSort(arr, 10);
    for(i = 0; i <1 10; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}