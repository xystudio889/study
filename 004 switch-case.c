#include<stdio.h>

int main(){
    int a;

    printf("���������֣�");
    scanf("%d",&a);//���ʹ�õ���VS2022����Ҫʹ��scanf_s()
    
    //swicth��ƥ�䵽��Ӧ������ֵ,�ж�ֵ�����ǳ�������������ʱ�����default��֧��
    //��δ����൱���ϸ���Ŀ�Ĵ��롣
    swicth (a){
        case 1:printf("����A");break; //��дbreak�������أ���һ�԰ɣ�
        case 2:printf("����B");break;
        default:printf("δ֪����");break;
    }

    return 0;
}
