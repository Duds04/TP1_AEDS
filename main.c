#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
// #include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");

    InicializaDicionario(ptrDicionario);
    CriaListasPorLetra(ptrDicionario); // OK
    // arquivo de entrada tem que estar na pasta entradas do programa
    // ConstroiDicionario(ptrDicionario, "./entradas/gabriel.txt");
    
    printf("Constroi dicionario\n");
    ConstroiDicionario(ptrDicionario, "./entradas/ent.txt");


    ExibirListaPorLetra(ptrDicionario, 'a');

    // MostrarPlavras(ptrDicionario);

   /*

    // char guardaPalavra[200]; // vetor auxiliar para guardar palavra
    // TPalavra salva;
    // TListaDePalavras LA;

    // LPIniciaLista(&LA);

    // strcpy(guardaPalavra, "teste");
    // // printf("%s\n", guardaPalavra);

    

    // // salva.Palavra = guardaPalavra;
    // LPreencherPalavra(&salva, guardaPalavra);
    // // printf("%s\n", salva.Palavra);
    // LPInsereFinal(&LA, &salva);

    // strcpy(guardaPalavra, "teste2");
    // LPreencherPalavra(&salva, guardaPalavra);
    // LPInsereFinal(&LA, &salva); 
    
    // // LImprimeListaPalavra(&LA);


    // CriaListasPorLetra(ptrDicionario); 


    // LPalavraVazia(&guarda);

    // for (int j = 0; j < 5; j++)
    // {
    //     scanf(" %c", &g);
    //     LPreencherPalavra(&guarda, g);
    // }

    // LImprimeCadeia(&guarda);

    // printf("\n1");
    // InicializaDicionario(ptrDicionario);

    // printf("\n2\n");
    // pCelulaDicionario pAux;
    // pAux = ptrDicionario->pPrimeiro;

    // printf("\n3\n");
    // CriaListasPorLetra(ptrDicionario);
    // LPInsereFinal(&(pAux->Lista), &guarda); // dando pau

    // printf("\n4\n");
    // LImprimeListaPalavra(&(pAux->Lista));

    /* TLetra guarda;
    // TLetra x;
    // TPalavra b;
    // char g;

    // LPalavraVazia(&b);

    // for (int j = 0; j < 5; j++)
    // {
    //     scanf(" %c", &g);
    //     LPreencherPalavra(&b, g);
    // }

    // printf("Vou taca\n");
    // LImprimeCadeia(&b);

    // LDeletaTudo(&b);
     LImprimeCadeia(&b);*/

    return 0;
}