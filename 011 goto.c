#include<stdio.h>

int main(){
flag://使用名字+:制作一个标签
    if(number <=3) {
        printf("aaa\n");
        number++;
        goto flag;
    }
    printf("结束");
    goto flag;//goto会将相当于从标签位置从新开始解析代码，所以过多使用goto会导致代码支离破碎。
    printf("正式结束");
    return 0;
}