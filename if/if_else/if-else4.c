#include <stdio.h>//ʹ��if-else������������
int main(){
    int num1,num2;
    char op;
    float answer;
    printf("");
    scanf("%d%c%d",&num1,&op,&num2);
    if(op=='+'){
        answer=num1+num2;
    } else if(op=='-'){
        answer=num1-num2;
    } else if(op=='*'){
        answer=num1*num2;
    } else{
        answer=(float)num1/num2;//��num1����ǿ��ת����float���ͣ�ʹ�ý��Ϊ������
    }
    printf("%f",answer);
    return 0;
}

