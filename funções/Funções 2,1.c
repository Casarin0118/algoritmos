#include <stdio.h>
#include <math.h>

int calc_area(int m1){

     int area = 3.14 * (m1 *m1);
     return area;
}

void imprimir (int area){
    printf("a area e : %d", area);
}

int main()
{
    printf("\nCalculadora de Areas");
   
    float raio = 0;
    
    printf("\nQual e o tamanho do raio do circulo?");
    scanf("%f", &raio);

    float area = calc_area(raio);
   
    imprimir(area);

    return 0;
}



 
