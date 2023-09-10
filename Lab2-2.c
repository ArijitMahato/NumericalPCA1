#include<stdio.h>
#include<conio.h>

int main(){
    float x[5], y[5][5];
    int i, j ,n;
    printf("Enter number of data?\n");
    scanf("%d", &n);
    printf("Enter data:\n");
    for(i=0; i<n; i++){
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
        printf("y[%d]=", i);
        scanf("%f", &y[i][0]);
    }
    // generating backward difference table
    for(i=1; i<n; i++){
        for(j = n-1; j>i-1; j--){
            y[j][i] = y[j][i-1] - y[j-1][i-1];
        }

    }
    printf("\n Backward difference Table\n\n");
    for(i=0; i<n; i++){
        printf("%0.2f", x[i]);
        for(j=0; j<n; j++){
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
