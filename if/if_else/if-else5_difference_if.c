#include <stdio.h>//ʹ��if-else�Զ�����������ֵ��������if��䡣(ʡȥ�ظ�)
int main(){
    int a,b,c,max;
    printf("please enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c){
        max=a;
    } else if(b>=a&&b>=c){
        max=b;
    } else if(c>=a&&c>=b){  //if��ʡ��
        max=c;
    }
    printf("%d",max);
    return 0;
}

