#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0}; //�ͱ�����������,��������������Ҫд���鳤��
    printf("%d\n", arr[0]);//����±��0��ʼ
    //ʹ��forѭ����ӡ
    int i;
    for(i = 0 ; i <= 9; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}