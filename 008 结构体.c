#include<stdio.h>

//ʹ��struct����ṹ��
struct Student {
    char name[20];
    int age;
    char gender[5];
    int score;
}

int main(){
    struct Student studentList[2];
    int i = 0;

    strcpy(studentList[0].name,"С��");//ʹ��strcpy���ýṹ��
    studentList[0].age = 10;
    strcpy(studentList[0].gender,"��");
    studentList[0].score = 100;

    strcpy(studentList[1].name,"С��");
    studentList[1].age = 15;
    strcpy(studentList[1].gender,"Ů");
    studentList[1].score = 85;

    for(i = 0; i < 2; i++){
        printf("name:%s\nage:%d\ngender:%s\nscore:%d",studentList[i].name,studentList[i].age,studentList[i].gender,studentList[i].score);
    }

    return 0;
}