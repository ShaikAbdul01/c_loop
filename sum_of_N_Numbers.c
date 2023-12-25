#include<stdio.h>
int main(){


    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d + %d = %d\n",sum,i,sum+i);
        sum+=i;
    }
    // printf("%d",sum);
    return 0;
}