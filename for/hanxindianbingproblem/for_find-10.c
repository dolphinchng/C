#include <stdio.h>//ʹ��for���ʵ�ֺ��ŵ���е����ֵ
int main(){
    int max,number;
    printf("MAX= ");
    scanf("%d",&max);
    int answer=0;	//��ֵ�Ҳ���ʱ,��֤��˳���˳�
    for(number=max;number>=1&&answer==0;number--){         //�Ӵ�С��,&&answer==0��֤answer�ҵ���ʱ�˳�,Ϊ���ֵ��
       if(number%3 ==2 && number%5 ==3 && number%7 ==2){
                answer=number;          //
       }
    }
    if(answer!=0){
    printf("%d",answer);
    }
    return 0;
}
