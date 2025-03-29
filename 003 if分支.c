#include<stdio.h>

int main(){
    int a;

    printf("请输入数字：");
    scanf("%d",&a);//如果使用的是VS2022，需要使用scanf_s()
    
    //if分支有if,else if和else三种
    if(a == 1){
        printf("城市A");
    }
    else if(a == 2){
        printf("城市B");
    }
    else {
        printf("未知城市");
    }

    return 0;
}
