#include<stdio.h>

int main(){
    int times = 1;
    //while循环会判断条件是否满足,若不满足,退出循环
    while (times <= 3) {
        printf("AAA\n");
        times++; //使times+1
    }
    printf("退出循环")
    //使用break退出
    times = 1;
    while (times <= 3) {
        printf("AAA\n")
        times++ //使times+1
        if (times == 2) {
            break;
        }
    }
    printf("退出循环")
}
