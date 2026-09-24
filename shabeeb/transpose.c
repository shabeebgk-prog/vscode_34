#include<stdio.h>
void display(int row, int cols, int matrix[row][cols]);
void transpose(int row,int cols,int matrix1[row][cols],int matrix2[row][cols]);
int main () {
    int i,j,row,cols,;
    printf("enter number of rows");
    scanf("%d",&row);
    printf("enter the number of colomns");
    scanf("%d", &cols);
    int matrix[row][cols];
    printf("\nenter elements");
    for(i=0;i < row;i++){
        for(j=0;j < cols;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nmatrix :");
    display(row, cols,matrix);
    printf("enter number of rows of matrix 2:");
    scanf("%d",&r2);
    printf("enter the number of colomns of matrix 2:");
    scanf("%d", &c2);
    int matrix2[r2][c2];
    printf("\nenter elements of matrix 2:");
    for(i=0;i < row;i++){
        for(j=0;j < cols;j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nmatrix 2:");
    display(r2,c2,matrix2);
    addmatrix(row,cols,matrix1,matrix2);
    return 0;

}
void display(int row, int cols, int matrix[row][cols]){
    int i,j;
    printf("\nenter matrix");
    for(i=0;i < row;i++){
        printf("\n");
        for(j=0;j < cols;j++){
            printf("%d\

