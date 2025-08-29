#include <stdio.h>
#include <stdbool.h>

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
    printf("Valor de pi é %lf\n", pi); //Outra coisa, qual é dessas nomeclaturas... %d parta int, float faz sentido e lf até q tmb...
    //Ue só apareceu 6..? Então qual a diferença de usar %f e %lf? ,_,

    double e = 2.7182818284590; //Número subestimado, deveria ser usado mais...
    printf("Valor de e é %.15lf", e); //Agr foi todos os 15...

    printf("\n\n"); //Dando um espacinho para ficar bonito no terminal



    //CARACTERES
    char letra = 'L'; //Ia usar meu nome, mas pelo q me lembro char/string... Pera isso é char... Diferente de String... Vamos seguir o tutorial né...
    //Ia dizer que char/string é meio chatinho em C...
    printf("A letra é: %c\n", letra);

    char simbolo1 = '*'; //Ta de sacanagem que era a aspas duplas...
    char simbolo2 = '%';
    char simbolo3 = '&'; 
    printf("C é cha to com chars/strings... Bem chato... %c %c %c", simbolo1, simbolo2, simbolo3); //C'est la vie
    //kudos para mim que tentei só colocar varias vars em um output só (tutorial ainda nem tocou nisso, se for tocar...)
    
    printf("\n\n");



    //STRINGS (Tambén não sei como traduzir isso direito... "Texto" talvez?)
    //Claro... String vai ser um array de caracteres... Tutorial nem ensinou o que é array...
    //Apesar que começar a aprender a programar com C é meio overkill...
    char name[] = "Lucas";
    printf("Olá eu sou o Godzilla %s\n", name); //Achei mais fácil que char...

    //Agora alguns testes de curiosidade...
    char broken_name[3] = "lucas";
    printf("Nome quebrado: %s", broken_name); //Quase tive um troço bugando e vendo char em vez de string...
    //Interressante...
    printf("Nome quebrado 2: %.3s\n", broken_name); //Interressante, dessa vez respeitou só os 3...
    printf("Nome: %s, nome zoado %.3s\n", name); //Testar com a string 'certinha'
    //Interressante, dessa vez não usou nada na 2nd var que foi apontado apenas uma var no print...
    printf("Nome: %s, nome zoado %.3s\n", name, name); //è sem muita diferença... Imagino se tem alguma função definir o valor do array como char[3]

    char comida[] = "Pão de Queijo"; //Eu deveria seguir fiel o tutorial, mas sou rebelde e uso valores que podem quebrar o programa e.e
    printf("%s deveria ser um patrimônio nacional", comida);
    //Interressante, acusou erro por não ter o []...

    printf("\n\n");



    //BOOLEAN/BOOL (Taquei no Google Tradutor e nem tem tradução... Bool/Boolean significa algo em inglês pelo menos?)
    //Que sem vergonhice (para não usar palavras de baixo calão...)
    //Tem que usar <stdbool.h>... E eu pensava q C devia ser um garrancho inicial e teria vários QoL com o tempo...
    //Isso me faz perguntar... O que dá para fazer com C sem as duas bibliotecas... Vou fazer um teste em uma 'folder' separada depois
    bool is_online = true; //Coresponde a 1
    bool is_dead = false; //Coresponde a 0
    printf("Está online: %d\n", is_online); //E claramente mostou 1...
    printf("Está morto: %d\n", is_dead);
    //Não tenho saudades de quando eu tive meu primeiro contato com C e acentos não funcionavam... Viva o Linux...?
    //Deve ser devido ao compilador mesmo... Nossa fazer isso funcionar naquela época tinha sido uma desgraça...
    //Lembro que os laboratórios da facul tinha tudo já pronto, mas fazer rodar em casas foi foda... Professor nem ensinou a fazer rodar...

    //Bool em C tem um corportamento bem parecido com o PHP... Mostra como 0 e 1 ao dar print...
    //Me pergunto se só não era mais fácil usar inteiros mesmo... Se bem que para redijibilidade é interressante o uso de 'true' e 'false'
    //No tutorial mesmo falou que é raro ou nem se usa bool em print e parando para pensar, realmente...

    is_online = false; //Não explicou que é possível alterar valores das variaveis depois... Mas estou fazendo isso para teste
    if(is_online)
    {
        printf("Godzilla %s está ONLINE!!!", name);
    }
    else
    {
        printf("Godzilla %s FUGIU!!!", name);
    }

    return 0;
}