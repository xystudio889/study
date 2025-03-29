#include<stdio.h>

int main(){
    int a;
    //scanf输入赋值需要使用&a,格式化方法不变
    printf("请输入数字：");
    scanf("%d",&a);//如果使用的是VS2022，需要使用scanf_s()

    printf("用户输入了:%d \n",a);

    return 0;
}
