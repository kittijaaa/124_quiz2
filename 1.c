#include<stdio.h>
int main() {
    long n=0,i,j=1,x=2,k=8,l=0,m=0 ;
    for(;n<=100000000;){
        scanf("%d",&n) ;
        m=0 ;l=0 ;
            for(j=1;j<=n;j++){
                l++ ;
                for(;j>=k;x++,k=x*x*x){
                  if(j%k==0){
                        m++ ;
                        break ;
                  }
                }
            }
            if(l==n){
                printf("%d",l) ;
            }else if(l+m==n){
                printf("%d",l-m) ;

            }

    }
    return 0 ;
}
