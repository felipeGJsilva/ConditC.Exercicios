#include <iostream>

int main () {

    int num;

    printf("digite um ano:");
    scanf("%d", &num);

    if(num %4 == 0 && num %100 != 0 && num %400 == 0){
        printf("o número digitado é bissesto.\n");

    } else {
        printf("o número é não é bissexto.\n");
    }

return 0;
}