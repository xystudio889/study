#include<stdio.h>

//定义时候需要返回类型和变量输入类型,如果没有不返回返回则
// 返回类型为void
int Sum(int a, int b){
    return a + b;
}

void Move(char addr[]) {
    printf("移动到%s\n",addr);
    return;
}

int main(){
    int a = 1;
    int b = 2;
    printf("%d\n", Sum(a,b));

    int a;
    printf("请用数字输入传送到的地点：")
    scanf("%d",&a);//如果使用的是VS2022，需要使用scanf_s()
    
    swicth (a){
        case 1:Move("城市A");break;
        case 2:Move("城市B");break;
        default:Move("未知城市");break;
    }

    return 0;
}