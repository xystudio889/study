#include<stdio.h>

int main(){
flag://ʹ������+:����һ����ǩ
    if(number <=3) {
        printf("aaa\n");
        number++;
        goto flag;
    }
    printf("����");
    goto flag;//goto�Ὣ�൱�ڴӱ�ǩλ�ô��¿�ʼ�������룬���Թ���ʹ��goto�ᵼ�´���֧�����顣
    printf("��ʽ����");
    return 0;
}