#include<stdio.h>

int main(){
    int a;

    printf("���������֣�");
    scanf("%d",&a);//���ʹ�õ���VS2022����Ҫʹ��scanf_s()
    
    //if��֧��if,else if��else����
    if(a == 1){
        printf("����A");
    }
    else if(a == 2){
        printf("����B");
    }
    else {
        printf("δ֪����");
    }

    return 0;
}
