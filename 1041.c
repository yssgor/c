#include <stdio.h>

int main (){
    float eixoY, eixoX;

    scanf("%f %f", &eixoX, &eixoY);

    if((eixoX == 0) && (eixoY == 0)){
        printf("Origem\n");
    }else if (eixoX == 0){
        printf("Eixo Y\n");
    }else if(eixoY == 0){
        printf("Eixo X\n");
    }else if( (eixoX > 0) && (eixoY > 0) ){
        printf("Q1\n");
    }else if( (eixoX > 0) && (eixoY < 0) ){
        printf("Q4\n");
    }else if( (eixoX < 0) && (eixoY > 0) ){
        printf("Q2\n");
    }else if( (eixoX < 0) && (eixoY < 0) ){
        printf("Q3\n");
    }

    return 0;

}