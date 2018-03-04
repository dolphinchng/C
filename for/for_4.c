#include <stdio.h>//印出1-10之间的偶数
int main(){
   int count;
   for(count=1;count<=10;count++){
        if(count%2==0){
            printf("%d\n",count);
        }
   }
       return 0;
}
