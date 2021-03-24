#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main (void){

    double V, average, sum;
    int n, a, step;
    double * calculation;
    
    void output(double *calculation, int n){
    int i;
        for(i = 0; i < n; i++){
            printf("calculation[%d] = %lf \n",i, calculation[i]);
        }
    }
        
    void more(double *calculation, int n){
    int i;
    printf("Элементы, которые больше введенного порога: \n");
        for(i = 0; i < n; i++){
            if (calculation[i] > step){
                printf("calculation[%d] = %lf \n",i, calculation[i]);
            }
        }
    }
        
    void less(double *calculation, int n){
    int i;
    printf("Элементы, которые меньше введенного порога: \n");
        for(i = 0; i < n; i++){
            if (calculation[i] < step){
                printf("calculation[%d] = %lf \n",i, calculation[i]);
            }
        }
    }
    
    printf("Сколько раз производить вычисление объема правильного тетрэдра?\n");
    scanf("%i",&n);
    
    calculation = malloc(n*sizeof(double));
    
    for (int i = 0; i < n; i++){
        
        printf ("Ребро тетраэдра a = ");
        scanf("%i", &a);
        V = (pow(a, 3) * sqrt(2)) / 12;
        printf ("Объем правильного тетраэдра V = %lf \n", V);
        calculation[i] = V;
    }
    
    printf("История вычислений:  \n");
    output(calculation, n);
    sum = 0;
    for (int i = 0; i < n; i++){
        average = calculation[i];
        sum = sum + average;
    }
    average = sum/n;
    printf ("Среднее арифметическое значение результатов = %lf \n", average);
    printf("Введите порог: ");
    scanf("%i",&step);
    more(calculation, n);
    less(calculation, n);
    free(calculation);
return 0;

}
