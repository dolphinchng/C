#include <stdio.h>//ӡ���ض�������������ӡ��1��10֮�䲻��3�ı�����ż��
int main(){
    int count;
    for(count=2;count<=10;count+=2){
        if(count%3!=0){
        printf("%d\n",count);
        }
    }
    return 0;
}
