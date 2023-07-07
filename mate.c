  #include <stdio.h>

int main(void){

    int contas = 0;
    int mate = 1 * 0;

 
    printf("digite 1, 2 ou 3 para resolver uma conta de matematica\n");

        scanf("%d", &contas);

    switch (contas)
    {
    case 1:
        printf("quanto e 9 x 9\n");
        scanf("%d" , mate);
        if (mate = 81)
        {
            printf("voce acertou\n");
        }
         else
        {
            printf("voce errou");
        }
        
        break;
    case 2:
                printf("quanto e 10 x 10\n");
        scanf("%d" , mate);
        if (mate = 100)
        {
            printf("voce acertou\n");
        }
        else
        {
            printf("voce errou");
        }
        
        break;
    case 3:
                printf("quanto e 100 x 100\n");
        scanf("%d" , mate);
        if (mate = 10000)
        {
            printf("voce acertou\n");
        }
        else
        {
            printf("voce errou");
        }
        
        break;
    default:
        break;
    }

    return 0;
}
