#include <stdio.h>//�����ж���ϰ
int main(){
    int N;
    printf("N = ");
    scanf("%d",&N);
    int number;
    int count=0;//Ҳ������Ϊ isPrime=1,����Ҳ�øı�
    for(number=2;number<N&&count==0;++number){
        if(N % number==0){
        count++;//isPrime=0;
        }

    }
    if(count==0){  //if(isPrime)����Ϊ��ʱ,��1
        printf("YES\n");
    }else {
        printf("NO\n");
    }

    return 0;
}
