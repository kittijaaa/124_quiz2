#include<stdio.h>
int main() {
    long n,i,j,x,k,l,m=1,a[9]={0},p,y ;
        scanf("%ld",&n) ;
    for(y=2;y<=n;y++){
        for(p=y,i=0;p>0;p/=10,i++){
            j = p%10 ;
            a[i] = j ;

        }
        for(k=0,l=i-1,x=0;k<=l;k++,l--){
            if(a[k]==a[l]){
                x+=1;
            }
        }
        if(i+1==x*2+1){
            m+=1 ;
        }else if(i+1==x*2){
            m+=1 ;
        }
    }
    if(n==1){
        printf("1") ;
    }else
        printf("%ld\n",m) ;

    return 0 ;
}
