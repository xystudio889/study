#include<stdio.h>

int main(){
    int times = 1;
    //whileѭ�����ж������Ƿ�����,��������,�˳�ѭ��
    while (times <= 3) {
        printf("AAA\n");
        times++; //ʹtimes+1
    }
    printf("�˳�ѭ��")
    //ʹ��break�˳�
    times = 1;
    while (times <= 3) {
        printf("AAA\n")
        times++ //ʹtimes+1
        if (times == 2) {
            break;
        }
    }
    printf("�˳�ѭ��")
}
