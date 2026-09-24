#include<stdio.h>
int main(){
    int i, length,value,postion, del_postion;
    printf("enter size of array");
    scanf("%d", &length);
    int array[length];
    printf("enter element of array\t");
    for (i = 0;i < length;i++){
        scanf("%d", &array[i]);
    }
    
    printf("array before insertion\n");
    for (i = 0; i < length;i++){
        printf("%d\t", array[i]);
    }
    printf("enter postion want to insert");
    scanf("%d", &postion);
    printf("enter value want to insert");
    scanf("%d", &value);
    for(i = length; i >= postion;i--){
        array[i] = array[i - 1];
    
    }
    array[postion - 1] = value;
    length = length + 1;
    printf("array after insertion\n");
    for (i = 0; i < length;i++) {
        printf("%d\t", array[i]);
    }
    printf("enter postion want to delete:");
    scanf("%d", &del_postion);
    for (i = del_postion - 1; i < length - 1;i++) {
        array[i] = array[i + 1];
    } 
    length = length - 1;
    printf("array after deletion\n");
    for (i = 0; i < length;i++){ 
        printf("%d\t", array[i]);
    }
    return 0;
}