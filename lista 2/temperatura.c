
 #include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura atual: ");
    scanf("%f", &temperatura);

    if (temperatura < 13) {
        printf("Esta frio.\n");
    } else if (temperatura >= 13 && temperatura < 25) {
        printf("Esta agradavel.\n");
    } else if (temperatura >= 25 && temperatura < 30) {
        printf("Esta calor.\n");
    } else {
        printf("Esta muito calor.\n");
    }

    return 0;
}
   
