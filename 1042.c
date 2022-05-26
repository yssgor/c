#include <stdio.h>

int main () {

    int num1, num2, num3, aux, i, v[3];

    scanf("%d %d %d", &num1, &num2, &num3);

    v[0] = num1;
    v[1] = num2;
    v[2] = num3;

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(v[i] < v[j]){
                aux = v [j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

    for(i = 0; i < 3; i++)
        printf("%d\n", v[i]);

    printf("\n%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}