#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0}; //和变量命名类似,但变量名后面需要写数组长度
    printf("%d\n", arr[0]);//输出下标从0开始
    //使用for循环打印
    int i;
    for(i = 0 ; i <= 9; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}