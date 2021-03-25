#include<stdio.h>
int main() {
    long n=1,i,j,x,k,m=0,y=0 ;
    scanf("%ld",&n) ;
            for(j=1;j<=n;j++){
                for(k=8,x=2;j>=k;x++,k=x*x*x){
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
                    printf("%ld",j-m) ;
                    }
            }
    return 0 ;
}
