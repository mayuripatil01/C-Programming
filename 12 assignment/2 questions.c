// 2 nd question search elements

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,i,x,f=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++) if(a[i]==x){ printf("Found at %d",i+1); f=1; break; }
    if(!f) printf("Not found");
    free(a);
}