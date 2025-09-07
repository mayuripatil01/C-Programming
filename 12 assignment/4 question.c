// odd even

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,i;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Even:");
    for(i=0;i<n;i++) if(a[i]%2==0) printf("%d ",a[i]);
    printf("\nOdd:");
    for(i=0;i<n;i++) if(a[i]%2) printf("%d ",a[i]);
    free(a);
}