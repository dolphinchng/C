#include <stdio.h>//����������������,��С����
int main(){
    int a,b,c,t;
    printf("please enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c){
        t=a;a=c;c=t;
    }
    if(a>c&&c>=b){
        t=a;a=b;b=c;c=t;
    }
    if(b>=a&&a>c){
        t=a;a=c;c=b;b=t;
    }
    if(b>c&&c>=a){
        t=b;b=c;c=t;
    }
    if(c>=a&&a>b){
        t=a;a=b;b=t;
    }

    printf("��С�����˳��Ϊ:%d %d %d.\n",a,b,c);
    return 0;
}
