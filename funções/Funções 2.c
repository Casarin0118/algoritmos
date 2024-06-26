#include <stdio.h>
int calular_media(int m1){

     int area = m1*m1;
     return area;
}

void imprimir (int area){
    printf("a area e : %d", area);
}

int main()
{
    printf("\nCalculadora de Areas");
   
    float lado = 0;
    
    printf("\nQual e o tamanho do lado do quadrado?");
    scanf("%f", &lado);

    float area = calular_media(lado);
   
    imprimir(area);

    return 0;
}



 
