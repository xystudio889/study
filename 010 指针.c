#include<stdio.h>

int main(){
    int* p; //ʹ������+*����ָ��
    int num = 10;
    p = &num; //ʹ��&ʹpΪnum��ָ��
    printf("%p\n%d\n", p, *p);//ʹ��%p��ӡָ��,ʹ��*��ȡָ��ָ�������

    return 0;
}