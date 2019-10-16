#include <stdio.h>
#include <stdlib.h>
#define FIL 4
#define COL 4

int pds(int pf, int pc, int matriz[pf][pc]){
    int i, j, c=1;
    for (i=0; i<pf && c; i++){
        for(j=0;j<pc && c; j++){
            if(matriz[pf][pc]>matriz[pf][j] && matriz[pf][pc]<matriz[i][pc]){
                c=0;
                }else
                    c=1;
            }
        }

    return c;
}

void imprimir_arr(int arr[4][4]){
    int i, j, k;
    printf("   TABLA\n\n");
    for (k=0;k<4;k++)
        printf("%d  ", k);

    printf("\n-----------\n");

    for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++)
        printf("%d ", arr[i][j]);
        printf("\n\n");
    }
}

int main(){

    int arr[FIL][COL] = {3,33,15,84
                        ,6,25,48,74
                        ,7,41,32,13
                        ,9,71,18,25};

    int pf=3, pc=0;
    imprimir_arr(arr);
    pds(pf, pc, arr);


    if(pds(pf,pc,arr)==1)
        printf("Hay un punto de silla en: (%d,%d)", pf,pc);
    else
        printf("No hay un punto de silla en: (%d,%d)", pf, pc);


    return 0;
}
