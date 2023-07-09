#include <stdio.h>

int main() {
    int i,j,n;
    
    scanf("%d",&n);
    n = n-1;
    for(i=0; i<n; i++){
        printf("  ");
    }
    printf("9\n");
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++) {
            printf("  ");
        }
        for(j=9;j>=9-(2*i);j--){
            printf("%d ",j);
        }
        printf("\n");
    }
 for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++) {
            printf("  ");
        }
        for(j=9;j>=9-(2*i);j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=0; i<n; i++){
        printf("  ");
    }
    printf("9\n");
}