#include <stdio.h>//�з�Χ�ĺ��ŵ��
   int main(){
   int MIN,MAX,number;
   printf("MAX= ");
   scanf("%d",&MAX);
   printf("MIN= ");
   scanf("%d",&MIN);
   for(number=MAX;number>=MIN;--number){
        if(number%3==2&&number%5==3&&number%7==2){         //��������
            printf("%d\n",number);      //���ϵ�������ֵ�ɴ�Сӡ
        }
   }
    printf("\n");
    return 0;
}
