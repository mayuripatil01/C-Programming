// 1 que using malloc function
// find min max
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,*a,i,min,max;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    min=max=a[0];
    for(i=1;i<n;i++){ if(a[i]<min)min=a[i]; if(a[i]>max)max=a[i]; }
    printf("Min=%d Max=%d",min,max);
    free(a);
}