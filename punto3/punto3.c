#include <stdio.h>
#define FIL 4
#define COL 4

void imprimir_arr(int arr[4][4]){
    int i, j;
    printf("    TABLA\n\n");
    for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++)
        printf("%d ", arr[i][j]);

        printf("\n\n");
    }
}

int dev_max(int arr[4][4]){
    int i, j;
    int max=arr[0][0];
    for (i=0;i<FIL;i++)
        for (j=0;j<COL;j++)
            if(arr[i][j] > max)
                max = arr[i][j];

    return max;
}


int dev_min(int arr[4][4]){
  int i, j;
    int min=arr[0][0];
    for (j=0;j<COL;j++)
        for (i=0;i<FIL;i++)
            if(arr[i][j] < min)
                min = arr[i][j];

    return min;
}

int main(){

    int i, j, arr[4][4]= {3,33,15,84
                         ,6,25,48,74
                         ,7,41,32,13
                         ,9,71,18,25};

    imprimir_arr(arr);
    dev_max(arr);

    printf("%d", dev_max(arr));
    printf("      %d", dev_min(arr));
    return 0;
}
