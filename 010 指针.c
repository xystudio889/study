#include<stdio.h>

int main(){
    int* p; //使用类型+*定义指针
    int num = 10;
    p = &num; //使用&使p为num的指针
    printf("%p\n%d\n", p, *p);//使用%p打印指针,使用*获取指针指向的内容

    return 0;
}