#include <stdio.h>//��while������-��������˼���
int main(){
    int answer=5,guess,time=0;
    printf("please enter your guess number:");
    scanf("%d",&guess);
    time=time+1;
    while(guess!=answer){
        if(guess>answer){
            printf("Too large\n");
        }else{
            printf("Too small\n");
        }
            printf("please enter your guess number:");
            scanf("%d",&guess);
            time=time+1;
    }
    printf("Correct!(%d)",time);
    return 0;
}
