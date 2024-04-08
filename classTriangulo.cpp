#include <iostream>

int main () {

    float num1, num2, num3;

    printf("classificação de triângulos.\n\n");
    printf("digite um numero:\n");
    scanf("%f", &num1);
    printf("digite um segundo numero:\n");
    scanf("%f", &num2);
    printf("digite um terceiro numero:\n");
    scanf("%f", &num3);
    
    
    if(num1 == num2 && num2 == num3 && num1 == num3 ){
        printf("o triangulo é equilátero.\n");

    } else if (((num1 == num2)&& (num1 == num2) != num3) || ((num1 == num3)&& (num1 == num3)!= num2) || ((num2 && num3)&& (num2 && num3) != num1)){
        printf("o triangulo é isósceles.\n");
    } else {
        printf("o triangulo é Escaleno.\n");
    }

return 0;
}