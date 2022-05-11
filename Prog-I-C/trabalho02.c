/*Enunciado

Em uma de suas viagens a Marte, a sonda lançada pela empresa SpaceX acabou encontrando a primeira forma de vida fora da Terra, e trouxe consigo alguns indivíduos para serem estudados em nosso planeta.

Além da aparência externa diferente do que estamos acostumados a ver por aqui, a estrutura interna destes indivíduos também é significativamente diferente. Por exemplo, enquanto na Terra a ordem das bases nitrogenadas nos nucleotídeos de DNA determina as características de um indivíduo, nos marcianos o que importa é a quantidade de cópias de cada base no filamento. Além disso, o mDNA (DNA marciano) pode ser composto por 6 bases distintas, representadas pelas letras de A a F, e todos os indivíduos possuem filamentos de DNA com 12 bases.

Como as características de um indivíduo são determinadas pelo número de cópias de cada base no filamento de mDNA, dois indivíduos que apresentam a mesma característica podem ter filamentos de mDNA diferentes (ordem diferente das bases, mas mesma quantidade de cada uma). Por exemplo, um indivíduo que tenha um filamento de mDNA formado pelas bases ABCDEFFEDCBA apresentará a mesma característica observada em um indivíduo que tenha o filamento de mDNA FEDCBAABCDEF, já que ambos apresentam duas ocorrências de cada base em seus filamentos.

Dado este contexto, você foi contratado pela SpaceX para desenvolver um programa que auxilie os pesquisadores nos estudos sobre os marcianos. Seu programa deverá ser capaz de receber múltiplos casos de teste, sendo que cada um deles será formado por dois filamentos de mDNA, e verificar se os pares de filamentos resultam em uma mesma característica ou não.

Mais especificamente, seu programa receberá como entrada o valor de n de casos de teste e, na sequência, 2n filamentos de mDNA (um por linha, formados por 12 bases cada um), que deverão ser comparados par a par. Caso os dois filamentos em um par levem a uma mesma característica, seu programa deverá imprimir na saída a frase "Caracteristicas Iguais" (sem acentos). Caso contrário, a frase "Caracteristicas Diferentes" (também sem acentos). ATENÇÃO: O seu programa deve imprimir a saída na tela assim que um par de filamentos de mDNA tiver sido lido.

Exemplo de execução:

3
ABCDEFFEDCBA
FEDCBAABCDEF
Caracteristicas Iguais
AAAAAAAAAAAF
AAAAAAAAAABF
Caracteristicas Diferentes
AABBCCDDEEFF
FFEEDDCCBBAA
Caracteristicas Iguais

*/

#include <stdio.h>

int main(){
    //Declaração da variavel usada para a quantidade de vezes que o código vai se repetir
    int quantX = 0;
    //Declaração de variaveis usadas para coletar o "placar-parcial" do DNA Humano
    int nA = 0, nB= 0, nC= 0, nD= 0, nE= 0, nF= 0;
    //Declaração de variaveis usadas para coletar o "placar-parcial" do DNA Marciano
    int nmA = 0, nmB = 0, nmC = 0, nmD = 0, nmE = 0, nmF = 0;
    //Declaração de variavel do "placar-final"
    int placar = 0;
        
        //Após ler e armazenar o valor em "quantX", esse valor vai ser usado para a repetição
        //Dentro dessa repetição, vão ser lidos dois valores, a base do DNA Humano e do DNA marciano
        scanf("%d", &quantX);
        for( ; quantX > 0; quantX--){
            char dnaHumano[12];
            char dnaMarciano[12];
            scanf("%s", dnaHumano);
            scanf("%s", dnaMarciano);
            
                //A base do DNA é constituida por 12 valores. Por conta disso, ela vai ser repetida 12x até baseDNA for igual a 0
                for(int baseDNA = 0; baseDNA < 12; baseDNA++){
                    placar = 0;
                    //Comparação do dnaHumano
                    //Se o valor inserido pelo usuario for igual a algumas dessas letras, o placar-parcial delas será aumentado
                    if(dnaHumano[baseDNA] == 'A'){
                        nA++;
                    } 
                    else if(dnaHumano[baseDNA] == 'B'){
                        nB++;
                    } 
                    else if(dnaHumano[baseDNA] == 'C'){
                        nC++;
                    } 
                    else if(dnaHumano[baseDNA] == 'D'){
                        nD++;
                    } 
                    else if(dnaHumano[baseDNA] == 'E'){
                        nE++;
                    } 
                    else if(dnaHumano[baseDNA] == 'F'){
                        nF++;
                    }
                    
                    //Comparação do dnaMarciano
                    //Se o valor inserido pelo usuario for igual a algumas dessas letras, o placar-parcial delas será aumentado
                    if(dnaMarciano[baseDNA] == 'A'){
                       nmA++; 
                    } else if(dnaMarciano[baseDNA] == 'B'){
                       nmB++; 
                    } else if(dnaMarciano[baseDNA] == 'C'){
                       nmC++; 
                    } else if(dnaMarciano[baseDNA] == 'D'){
                       nmD++; 
                    } else if(dnaMarciano[baseDNA] == 'E'){
                       nmE++; 
                    } else if(dnaMarciano[baseDNA] == 'F') {
                       nmF++; 
                    }
                    
                    //Comparacão dnaHumano com o dnaMarciano
                    //Após a análise, se as letras atribuidas estiverem em condição de igualdade, o "placarFinal" será igual a 1
                    //Caso contrário, ele permanecerá em 0
                    if((nA == nmA) && (nB == nmB) && (nC == nmC) && (nD == nmD) && (nmE == nmE) && (nF == nmF)){
                        placar++;
                    } else if (placar == 0) {
                      } 
                }
                //Resultado
                //Se o "placar final" for maior que 0, significa que o if anterior foi verdadeiro. Caso isso aconteça, as 
                //caracteristicas são iguais. Caso o contrário, as caracteristicas são distintas.
                //As varivaveis de "placares" foram resetadas para não interferir em proximas analises
                if(placar > 0){
                    printf("Caracteristicas Iguais\n");
                    placar = 0;
                    nA = 0, nB= 0, nC= 0, nD= 0, nE= 0, nF= 0;
                    nmA = 0, nmB = 0, nmC = 0, nmD = 0, nmE = 0, nmF = 0;
    
                } else{
                    printf("Caracteristicas Diferentes\n");
                    placar = 0;
                    nA = 0, nB= 0, nC= 0, nD= 0, nE= 0, nF= 0;
                    nmA = 0, nmB = 0, nmC = 0, nmD = 0, nmE = 0, nmF = 0;
            }
            
        //DEBBUG
        //Pessoalmente, eu tenho a prática de vizualizar o que todas as variavies estão recebendo
        //Com isso, tenho melhor controle com erros de escrita, sintaxe ou de lógica.
      /*printf("DEBBUG PLACAR %d\n", placar);
        printf("DEBBUG nA %d\n", nA);
        printf("DEBBUG nB %d\n", nB);
        printf("DEBBUG nC %d\n", nC);
        printf("DEBBUG nD %d\n", nD);
        printf("DEBBUG nE %d\n", nE);
        printf("DEBBUG nF %d\n", nF);
        printf("DEBBUG nmA %d\n", nmA);
        printf("DEBBUG nmB %d\n", nmB);
        printf("DEBBUG nmC %d\n", nmC);
        printf("DEBBUG nmD %d\n", nmD);
        printf("DEBBUG nmE %d\n", nmE);
        printf("DEBBUG nmF %d\n", nmF);*/
        }
    return 0 ;
}