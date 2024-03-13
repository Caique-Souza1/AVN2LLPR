#include <stdio.h>

int main(){
    int i,j,produto;
    int x[6][3];
    for(i=0;i<6;i++){
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<3;j++){
            produto=(x[i][3] * x[i][3]);
        }
    }
    printf("%d",produto);
    return 0;
}