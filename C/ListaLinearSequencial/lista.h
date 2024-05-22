#define max 30
#define deuzika -1 
#define naodeuzika 1

typedef int TipoChave;

typedef struct{
    TipoChave chave;
}Registro;

typedef struct{
    Registro V[max];
    int N;
}Lista;

void Iniciar(Lista *L);
void RetornarNElementos(Lista *L);
void ImprimirElementos(Lista *L);
void ReiniciarLista(Lista *L);
int BuscaElemento(Lista *L, TipoChave *ch);
int InsertFinal(Lista *L, Registro *r);
int InsertInicio(Lista *L, Registro *r);
int InsertPos(Lista *L, Registro *r, int j);
int ExcluirElemento(Lista *L, TipoChave *ch);
