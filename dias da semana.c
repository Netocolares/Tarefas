
  #include <stdio.h>

int main(void){

    int dias;

 
    printf("digite um numero que esteja entre 1 e 7\n");

        scanf("%d", &dias);

    switch (dias)
    {
    case 1:
        printf("segunda");
        break;
    case 2:
        printf("terça");
        break;
    case 3:
        printf("quarta");
        break;
    case 4:
        printf("quinta");
        break;
    case 5:
        printf("sexta");
        break;
    case 6:
        printf("sabado");
        break;
    case 7:
        printf("domingo");
        break;
    default:
        break;
    }

    return 0;
}
