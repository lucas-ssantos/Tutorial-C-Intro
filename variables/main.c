#include <stdio.h>

int main()
{
    //Aprendendo sobre variáveis

    //INTEIROS
    int inteiro = 2;
    int inteiro2 = 3;
    printf("-- INT\n");
    printf("Valor da variavel inteiro é de: %d\n", inteiro);
    printf("Valor da variavel inteiro2 é de: %d", inteiro2);

    printf("\n\n"); //Dando um espacinho para ficar bonito no terminal



    //FLUTUANTES
    float luz_vel = 3.3; //podia ter escolhido um exemplo melhor... Bom, vamos usar 3.3 nanossegundos que é a aproximação para 1m
    printf("-- FLOAT\n");
    printf("A velocidade da luz em metros é de %f nanossegundos...\nNanossesgundos realmente tm dois ss???\n\n", luz_vel);
    printf("A velocidade da luz em metros é de %.1f nanossegundos...\nAgora capando os decimais\n\n", luz_vel);

    float float_rnd = 2.35;
    printf("Float aleatório: %.2f\n\n", float_rnd); //Não tive a capacidade mental de pensar em um exemplo que use 2 casas decimais...
    //WTF erro de 3.30...? Faltou colocar a variável que vai ser usada... Usou a anterior, engraçado.

    float temperatura = -3.5;
    printf("A temperatura é de %.1f°C\n", temperatura); //Números negativos funcionam direto... PHP funciona com negativos também?
    int num_neg = -3;
    printf("Inteiro também funciona...? %d", num_neg); //sim... Será q to ficando maluco achando que as linguagens
    //não funcionam com negativo...?

    printf("\n\n"); //Dando um espacinho para ficar bonito no terminal



    //DOUBLES (não sei como traduzir isso para pt-br)
    double pi = 3.141592654; //Podem conter 15 a 16 digitos depois do decimal... 
    //Float seria só 6? (pelo menos é a quantidade que aparece no terminal quando não filtra os números...)
    printf("-- DOUBLE\n");
    printf("Valor de pi é %lf", pi); //Outra coisa, qual é dessas nomeclaturas... %d parta int, float faz sentido e lf até q tmb...

    printf("\n\n"); //Dando um espacinho para ficar bonito no terminal

    return 0;
}