#include <stdio.h>//�ҳ���������������ϰ
int main(){
    int N,i;
    printf("N = ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){      //�г����ܵĺ�ѡ��
        if(N%i==0){        //���ϸ����� N����������������N������(����:����Ϊ0)
        printf("%d ",i);
        }
    }
    return 0;
}
