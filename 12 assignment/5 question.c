// 5 alterate elements

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,i;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i+=2) printf("%d ",a[i]);
    free(a);
}
