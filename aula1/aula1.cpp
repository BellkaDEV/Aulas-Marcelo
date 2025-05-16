#include <iostream>

using namespace std;

const int TAM = 30;


void gerarvetor (int vet1[])
{
    for(int i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 100 + 1;
    }
}

void printarvetor(int vet[])
{
    cout << "vetor gerado eh:" << endl;
    for(int i = 0; i < TAM; i++)
    {
        cout << vet[i] << " ";
    }
}

void BolhaMelhorado(int vet[], int *ptrqtd1a, int *ptrqtd1b)
{
    int i = 1, j, aux;
    *ptrqtd1a = 0;
    *ptrqtd1b = 0;
    bool troca = true;

    while ((i <= TAM) && (troca))
    {
        troca = false;

        for (j = 0; j < TAM - 1; j++)
        {
            (*ptrqtd1b)++;
            if (vet[j] > vet[j + 1])
            {
                troca = true;
                (*ptrqtd1a)++;
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                
            }
        }
        i++;
    }
}
//(*ptrqtd2a)++ (*ptrqtd2b)++

void Insertion( int vet [], *ptrqtd2a, *ptrqtd2b)
{
(*ptrqtd2a) = 0;
(*ptrqtd2b) = 0;

    int i, j, eleito ;
    for( i = 1; i < TAM; i ++)
    {
        eleito = vet [i ];
        j = i - 1;
        while (( j >= 0) && ( vet [j] > eleito ))
        {
            vet [j + 1] = vet [j ];
            (*ptrqtd2a)++
            j--;
        }

        vet [j + 1] = eleito;
        (*ptrqtd2a)++
    }
};


int main ()
{
    srand ( time ( NULL ) );
    int v[ TAM ], k ;
    cout << " Vetor original: ";
    for( k = 0; k < TAM; k ++)
    {
        [ k] = rand () % 100 + 1;
        cout << v [k] << " ";

    }

    Insertion(v);
    cout << "\n Vetor ordenado: ";

    for( k = 0; k < TAM; k ++)
    {
        cout << v [k] << " ";
    }






    int main()
    {
        srand(time(NULL));
        int vet1[TAM];
        int vet2[TAM];
        int vet3[TAM];

        //
        
        int qtdtroca1, qtdcomp1;
        gerarvetor(vet1);
        printarvetor(vet1);
        
        cout << endl;
        
        BolhaMelhorado(vet1, &qtdtroca1, &qtdcomp1);
        cout << "trocas buble melhorado:" << endl;
        cout << qtdtroca1 << endl;
        cout << "comparacoes buble melhorado:" << endl;
        cout << qtdcomp1 << endl;
        
        cout << endl;
        cout << endl;
        
        int qtdtroca2, qtdcomp2;
        gerarvetor(vet2);
        printarvetor(vet2);
        
        cout << endl;
        
        insertion(vet2, %qtdtroca2, &qtdcomp2);
        cout << "trocas insercao:" << endl;
        cout << qtdtroca2<< endl;
        cout << "comparacoes insercao:" << endl;
        cout << qtdcomp2 << endl;
        
        







        return 0;
    }
