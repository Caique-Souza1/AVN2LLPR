#include <stdio.h>

int main(){
    int tam=8;
    int nega[tam],posi[tam],i,x[tam];
    for(i=0;i<tam;i++){
        scanf ("%d",&x[i]);
    }
    for(i=0;i<tam;i++){
        if (x[i]<=0){
        nega[i]=x[i];
        }
        if (x[i]>=0){
        posi[i]=x[i];
        }
    }
    printf("\n");
    printf ("Positivos:\n");
    for(i=0;i<tam;i++){
        if(posi[i]<0){
        posi[i]=0;
        }
        printf ("%d\n",posi[i]);
    }
   
    printf("\n");
    printf ("Negativos:\n");
    for(i=0;i<tam;i++){
        if(nega[i]>0){
        nega[i]=0;
        }
        printf ("%d\n",nega[i]);
    }
    
    printf("\n");
    return 0;
}