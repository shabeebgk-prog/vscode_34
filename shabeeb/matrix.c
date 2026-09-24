#include<stdio.h>
void display(int row, int cols, int matrix[row][cols]);
int main () {
    int i,j,row,cols;
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
    display(row, cols,matrix);
    return 0;

}
void display(int row, int cols, int matrix[row][cols]){
    int i,j;
    printf("\nenter matrix");
    for(i=0;i < row;i++){
        printf("\n");
        for(j=0;j < cols;j++){
            printf("%d\t", matrix[i][j]);
        }
    }
}