#include <stdio.h>

int main(){
    
    int tamanhoMatriz; // Variavel para o tamanho da matriz
    int pontoInicial, pontoFinal; // Variaveis para a coleta do ponto de partida e destino do usuário
    
    scanf("%d", &tamanhoMatriz); // Lê o tamanho da Matriz
    
    int matrizGrafos[tamanhoMatriz][tamanhoMatriz]; //Matriz com o tamanho estabelecido pelo usuario
    
    //Lê a matriz inserida pelo usuario
    for(int aux = 0; aux < tamanhoMatriz; aux++){ // índice da linha da Matriz
        for(int aux2 = 0; aux2 < tamanhoMatriz; aux2++){ // Índice da coluna da matriz
            scanf("%i", &matrizGrafos[aux][aux2]);
        }  
    }
    
    //Lê o ponto de partida e o destino final do usuário
    scanf("%d", &pontoInicial);
    scanf("%d", &pontoFinal);
    
    
    int referencia = 0; //Variavel para armazenar o local atual do usuario durante a análise
    int novaReferencia; //Variavel para armazenar o novo local do usuario durante a análises seguintes
    int valorPosicao = 1000; //Valor estipulado alto para não interferir na análise do valor 
    int novoValorPosicao; //Pega e atualiza os valores
    int distancia; //Guarda e soma as distancias percorridas
    
    //Variavel que armazena as cidades já visitadas
    int visitados[10] = {111, 111, 111, 111, 111, 111, 111, 111, 111, 111}; 
    int analise = 0;
    visitados[analise] = pontoInicial; //Recebe a primeira cidade visitada
    
    //Analisa a linha que o usuário indicou
    for(int aux = 0; aux < tamanhoMatriz; aux++){ // índice da linha da Matriz 
      // matrizGrafos[aux][pontoInicial];
       
      //Pega o menor valor da linha da matriz    
        if(( matrizGrafos[aux][pontoInicial] != 0) && (valorPosicao > matrizGrafos[aux][pontoInicial]) ){
            valorPosicao = matrizGrafos[aux][pontoInicial];
            referencia = aux;
         }
    }
    
    //Debug de variaveis 
    // printf("Debbug 1 \n");
    // printf("Linha inicial: %d ", pontoInicial);
    // printf("Menor valor encontrado: %d ", valorPosicao);
    // printf("proxima Linha: %d ", referencia);
    // printf("\n");
    // printf("Debbug 2\n");
    
    //Atualiza o vetor de cidades visitadas
    analise = 1;
    visitados[analise] = referencia;
    
    //atualiza a soma dos valores de distancia
    distancia = valorPosicao;
    
    //Encontra o menor caminho, caso seja impossível encontra-lo de maneira direta na primeira linha analisada
    novaReferencia = referencia;
    int auxiliarReferencia = 0;
    while(novaReferencia != pontoFinal){
        novoValorPosicao = 1000;
        
            for(int aux = 0; aux < tamanhoMatriz; aux++){
               // matrizGrafos[aux][novaReferencia]; 
                
                //Pega o menor valor da linha da matriz analisada
                //Não executa cidades já analisadas
                    if((matrizGrafos[aux][novaReferencia] != 0)
                    && (novoValorPosicao > matrizGrafos[aux][novaReferencia]) 
                    && (aux !=  visitados[0]) && (aux !=  visitados[1])
                    && (aux !=  visitados[2]) && (aux !=  visitados[3])
                    && (aux !=  visitados[4]) && (aux !=  visitados[5])
                    && (aux !=  visitados[6]) && (aux !=  visitados[7])
                    && (aux !=  visitados[8]) && (aux !=  visitados[9])){
     
                        novoValorPosicao = matrizGrafos[aux][novaReferencia];
                        auxiliarReferencia = aux;
                     
                    }  
            }
            
        distancia = distancia + novoValorPosicao;
        novaReferencia = auxiliarReferencia;
        analise = analise + 1;
        visitados[analise] = novaReferencia;
    
    //Debug de variaveis 
    // printf("Linha atual: %d ", referencia);
    // printf("Menor valor encontrado: %d ", novoValorPosicao);
    // printf("proxima Linha: %d ", novaReferencia);
    // printf("\n");
    
     } 
     
     //Imprime para o usuário a distancia e o caminho percorrido
    if(novaReferencia == pontoFinal){
        printf("Distancia total entre %d e %d: %d\n", pontoInicial, pontoFinal, distancia);
        
            printf("Caminho: %d->", pontoInicial);
            for(int y = 1; y < analise; y++){
                printf("%i->", visitados[y]);
            }
            printf("%d\n", pontoFinal);
    }  
    return 0;
}