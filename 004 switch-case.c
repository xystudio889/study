#include<stdio.h>

int main(){
    int a;

    printf("请输入数字：");
    scanf("%d",&a);//如果使用的是VS2022，需要使用scanf_s()
    
    //swicth将匹配到对应的输入值,判断值必须是常量，都不满足时候进入default分支。
    //这段代码相当于上个项目的代码。
    swicth (a){
        case 1:printf("城市A");break; //不写break会怎样呢？试一试吧！
        case 2:printf("城市B");break;
        default:printf("未知城市");break;
    }

    return 0;
}
