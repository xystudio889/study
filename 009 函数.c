#include<stdio.h>

//����ʱ����Ҫ�������ͺͱ�����������,���û�в����ط�����
// ��������Ϊvoid
int Sum(int a, int b){
    return a + b;
}

void Move(char addr[]) {
    printf("�ƶ���%s\n",addr);
    return;
}

int main(){
    int a = 1;
    int b = 2;
    printf("%d\n", Sum(a,b));

    int a;
    printf("�����������봫�͵��ĵص㣺")
    scanf("%d",&a);//���ʹ�õ���VS2022����Ҫʹ��scanf_s()
    
    swicth (a){
        case 1:Move("����A");break;
        case 2:Move("����B");break;
        default:Move("δ֪����");break;
    }

    return 0;
}