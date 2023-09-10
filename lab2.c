#include<stdio.h>
#include<conio.h>

int main(){
float x[5], y[5][5];
int i,j,n;
printf("Enter number:");
scanf("%d", &n);
printf("Enter values:\n");
for(i=0; i<n; i++){
    printf("x[%d]=", i);
    scanf("%f", &x[i]);
    printf("y[%d]=", i);
    scanf("%f", &y[i][0]);
}
for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
        y[j][i]=y[j+1][i-1]- y[j][i-1];
    }
}
printf(" \n forward different table:\n\n");
for(i=0; i<n; i++){
    printf("\t%0.2f", x[i]);
    for(j=0; j<n-i; j++){
        printf("\t%0.2f", y[i][j]);
    }
    printf("\n");

}

getch();
return 0;
}