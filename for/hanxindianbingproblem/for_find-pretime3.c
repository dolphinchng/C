#include <stdio.h>//�Һ��ŵ���е�ǰ��С��ֵ
int main(){
    int number;
    int count=0;
    for(number=1;number<=1000&&count<3;number++){   //count<3�������
        if(number%3 ==2 && number%5 ==3 && number%7 ==2){
            ++count;
            if(count<=3){
            printf("%d ",number);
        }
        }

    }
    return 0;
}
