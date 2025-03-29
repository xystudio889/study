#include<stdio.h>

int main(){
    int intArr[2][2] = {{1,2},{3,4}};//使用多个下标构建多维数组
    char charArr[4][20] ={"ABCD","EFGA","AAAA","HELO"};

    int i,j;

    for(i=0,i<2,i++) {
        for (j=0,j<2,j++){
            print("%d",intArr[i][j]);
        }
        printf("\n");
    }
    for(i=0,i<4,i++) {
        printf("%s\n",charArr[i]);
    }

    return 0;
}