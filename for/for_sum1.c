#include <stdio.h>//求1加到100的整数和
int main(){
   int sum=0,i;
   for(i=1;i<=100;i++){
   sum=sum+i;
   }
   printf("sum is %d\n",sum);
   return 0;
}
