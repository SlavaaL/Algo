
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){
    int i, n;
    printf("Введите длину массива: ");
    scanf("%i",&n);
    int * calculations = malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("calculations[%d] = ",i);
        scanf("%d", &calculations[i]);
    }
    
    int sum = 0;
    for(i = 0; i < n; i++){
        if (calculations[i] % 2 == 0){
            sum = sum + 1;
        }
    }
    printf("Количество парных элементов в массиве: %d", sum);
    return 0;
}
