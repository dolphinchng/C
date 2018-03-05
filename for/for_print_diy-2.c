int main(){  // 求1加到N的整数和
   int sum=0,i,N;
   printf("N=");
   scanf("%d",&N);
   for(i=1;i<=N;i++){
        sum=sum+i;
   }
   printf("sum is %d\n",sum);
   return 0;
}
