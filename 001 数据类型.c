#include<stdio.h>

int main(){
    /*常用的数据类型有int,char,float,double四种类型*/
    int a = 1; //整数
    char b = 'a'; //字符
    float c = 0.1; //浮点数
    double d = 0.01; //双精度浮点数(精度更高)

    /*
    printf函数接受输入值格式:
    %d:整数
    %c:字符
    %f:浮点数
    %lf:双精度浮点数
    */

    printf("%d \n",a);
    printf("%c \n",b);
    printf("%f \n",c);
    printf("%lf \n",d);

    return 0;
}
