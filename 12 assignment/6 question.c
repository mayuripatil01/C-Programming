// 6 prime number

#include <stdio.h>
#include <stdlib.h>
int prime(int x){ if(x<2)return 0; for(int i=2;i<=x/2;i++) if(x%i==0) return 0; return 1; }
int main(){
    int n,*a,i;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) if(prime(a[i])) printf("%d ",a[i]);
    free(a);
}