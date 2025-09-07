// sum of two elements

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,i,s=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){ scanf("%d",&a[i]); s+=a[i]; }
    printf("Sum=%d",s);
    free(a);
}

