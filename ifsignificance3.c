#include <stdio.h>//�Ƚ�a,b,c��������ֵ��������c,��a,b�нϴ�Ļ�������b
int main(){
    int a,b,c,t;
    printf("before: ");
    scanf("%d%d%d",&a,&b,&c);
    if(c<a){
      t=c;c=a;a=t;
    }
    if(c<b){
      t=c;c=b;b=t;
    }
    if(b<a){
      t=b;b=a;a=t;
    }
    printf("After:%d %d %d",a,b,c);
    return 0;
}
