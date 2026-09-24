#include<stdio.h>
int main(){
    int array[10]={10,20,30,40,50}, i, length,value,postion;
    length = 5;
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
     return 0;
    }