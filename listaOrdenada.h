#include <iostream>

#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H

template <class T>
class ListaOrdenada{
    private:
        class No{
            private:
                No* prox;
                T dado;
            public:
                No(T dado){
                    this->dado = dado;
                    prox = NULL;
                }
                ~No() {}
                No* proximo(){
                    return prox;
                }
                void proximo(No* novo){
                    prox = novo;
                }
                T getDado(){
                    return dado;
                }
                void setDado(T dd){
                    this->dado = dd;
                }
        };
        No* inicio;
        No* fim;
    public:
        ListaOrdenada();
        ~ListaOrdenada();
        
        void inserir(T dado);
        void imprimir();
        void remover(T dado);
        bool buscar(T dado);
        void ordenar();
};

#endif

