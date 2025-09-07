//  maerge two array

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m,*a,*b,*c,i;
    scanf("%d%d",&n,&m);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int*)malloc((n+m)*sizeof(int));
    for(i=0;i<n;i++){ scanf("%d",&a[i]); c[i]=a[i]; }
    for(i=0;i<m;i++){ scanf("%d",&b[i]); c[n+i]=b[i]; }
    for(i=0;i<n+m;i++) printf("%d ",c[i]);
    free(a); free(b); free(c);
}