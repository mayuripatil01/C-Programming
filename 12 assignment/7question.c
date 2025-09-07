// ADD TWO ARRAY

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,*b,*c,i;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    c=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++){ c[i]=a[i]+b[i]; printf("%d ",c[i]); }
    free(a); free(b); free(c);
}