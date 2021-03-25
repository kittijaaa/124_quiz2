#include<stdio.h>
int main() {
    long n=1,i,j=1,x=2,k=8,l,m,y=0 ;
    if(n>=1&&n<=1000000)
    scanf("%ld",&n) ;
        m=0 ;l=0 ;
            for(j=1;j<=n;j++){
                l++ ; k=8;x=2;
                for(;j>=k;x++,k=x*x*x){
                  if(j%k==0){
                        m++ ;
                        break ;
                  }
                }
            if(j==n){
                for(;j>=k;x++,k=x*x*x){
                  if(j%k==0){
                        printf("Not Cube Free") ;
                        y=1;
                        break ;
                  }
                }
                if(y!=1)
                    printf("%ld",l-m) ;
                    }
            }
    return 0 ;
}
