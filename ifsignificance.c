#include <stdio.h>//用两个变数的数值交换对三个变数做排序，观察结果归类主要动作
int main(){
    int a,b,c,t;
    printf("please enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(b<a&&a<=c||b<=c&&c<a){
        t=b;b=a;a=t;
    }
    if(c<a&&a<=b||c<b&&b<a){
        t=c;c=a;a=t;
    }
    if(a<=c&&c<b||b<=c&&c<a||c<a&&a<=b){
        t=c;c=b;b=t;
    }
    printf("After:%d %d %d\n",a,b,c);
    return 0;
}
