
typedef struct No{
    int chave;
    struct No* esquerda;
    struct No* direita;
    struct No* pai;
}No;

No* getNode();
No* inserir(No* raiz, int chave);
No* buscaChave(No* raiz, int chave);
No* remover(No* raiz, int chave);
No* predecessor(No* n);
No* sucessor(No* n);
No* maximo(No* raiz);
No* minimo(No* raiz);
void preOrdem(No* raiz);
void emOrdem(No* raiz);
void posOrdem(No* raiz);