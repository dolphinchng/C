#include <stdio.h>//���ŵ��
int main(){
   int number=1;
   while(!(number%3==2&&number%5==3&&number%7==2)){         //����������
    ++number;
   }
    printf("%d",number);
    return 0;
}
