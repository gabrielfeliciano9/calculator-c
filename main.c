#include <stdio.h>

int main(){
    float Num1,Num2,Resultado;
    int Operador;

printf("Digite o primeiro numero: \n");
scanf("%f", &Num1);

printf("Digite o segundo numero: \n");
scanf("%f", &Num2);

printf("Selecione o operador: \n");
printf("1 - Soma \n");
printf("2 - Subtracao \n");
printf("3 - Divisao \n");
printf("4 - Multiplicacao \n");

scanf("%d", &Operador);

switch(Operador) {
   case 1: 
     Resultado = Num1 + Num2;
     printf("Resultado: %.2f\n", Resultado);
     break;
     
    case 2:
     Resultado = Num1 - Num2;
     printf("Resultado: %.2f\n", Resultado);
     break;

    case 3:
      if (Num2 != 0){
          Resultado = Num1 / Num2;
          printf("Resultado: %.2f\n", Resultado);
    } else {
          printf("Erro: divisao por zero! \n");
    } 
    break;

    case 4: 
      Resultado = Num1 * Num2;
      printf("Resultado: %.2f\n", Resultado);
      break;

    default:
    printf("Operador invalido!");
}
   return 0;
 }