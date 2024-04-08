#include <iostream>

int main () {

    int num;

    printf("digite um numero:");
    scanf("%d", &num);

    if(num %3 ==0 && num %5==0){
        printf("o número digitado é multiplo de 3 e 5.\n");

    } else {
        printf("o número é não é multiplo\n");
    }

return 0;
}