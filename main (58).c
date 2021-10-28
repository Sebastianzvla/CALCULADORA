#include <stdio.h>

int iA,iB,opAns,iC;
int Op,OpA, resultado;
int Ans(int OpA, int resultado, int iC);

int main()
{

for(;;)
{
    printf("\nQue operacion desea realizar ?\n1)Suma\n2)Resta\n3)Multiplicacion\n4)Division\n");
    scanf("%i",&Op);
    printf("\nIngresa un numero: ");
    scanf("%i",&iA);
    printf("\nIngresa otro numero:");
    scanf("%i",&iB);

    switch(Op)
    {
        case 1:
        resultado = ((iA) + (iB));
        break;
        case 2:
        resultado = ((iA) - (iB));
        break;
        case 3:
        resultado = ((iA) * (iB));
        break;
        case 4:
        resultado = ((iA) / (iB));
        break;
        default: printf("\nLa operacion no se encuentra en el rango seleccionar otra");
        break;
    }

    printf("\nEl total es : %i",resultado);
    printf("\n\nDesea realizar otra operacion con el ans ? \n1) Si\n2)No\n");
    scanf("%i",&opAns);
    if(opAns == 1)
    {
            printf("\nQue operacion desea realizar ?\n1)Suma\n2)Resta\n3)Multiplicacion\n4)Division\n");
            scanf("%i",&OpA);
            printf("\nIngresa un numero para realizarlo con la ans: ");
            scanf("%i",&iC);
            Ans(OpA,resultado,iC);

    }
    else 
    {
        return 0;
    }

}
return 0;
}

int Ans(int OpA, int resultado, int iC)
{
    int Ans;
        switch(OpA)
    {
        case 1:
        Ans = ((resultado) + (iC));
        break;
        case 2:
        Ans = ((resultado ) - (iC));
        break;
        case 3:
        Ans = ((resultado) * (iC));
        break;
        case 4:
        Ans = ((resultado) / (iC));
        break;
        default: printf("\nLa operacion no se encuentra en el rango seleccionar otra");
        break;
    }
    printf("\n Tu resultado final es: %i", Ans);
    return 0;
}
