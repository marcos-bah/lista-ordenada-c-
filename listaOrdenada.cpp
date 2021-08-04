#include "listaOrdenada.h"

template <class T>
ListaOrdenada<T>::ListaOrdenada() {
    this->inicio = NULL;
    this->fim = NULL;
}

template <class T>
ListaOrdenada<T>::~ListaOrdenada() {
    No* aux = inicio;
    while(aux != NULL){
        No* aux2 = aux->proximo();
        delete aux;
        aux = aux2;
    }
}

template <class T>
void ListaOrdenada<T>::inserir(T dado){
    No* novo = new No(dado);
    if(inicio == NULL){
        inicio = novo;
        fim = novo;
    }else{
        fim->proximo(novo);
        fim = novo;
    }
}

template <class T>
void ListaOrdenada<T>::imprimir(){
    No* aux = inicio;
    while(aux != NULL){
        std::cout << aux->getDado() << std::endl;
        aux = aux->proximo();
    }
}

template <class T>
void ListaOrdenada<T>::remover(T dado){
    No* aux = inicio;
    No* ant = NULL;
    while(aux != NULL){
        if(aux->getDado() == dado){
            if(ant == NULL){
                inicio = aux->proximo();
            }else{
                ant->proximo(aux->proximo());
            }
            delete aux;
            break;
        }
        ant = aux;
        aux = aux->proximo();
    }
}

template <class T>
bool ListaOrdenada<T>::buscar(T dado){
    No* aux = inicio;
    while(aux != NULL){
        if(aux->getDado() == dado){
            return true;
        }
        aux = aux->proximo();
    }
    return false;
}

template <class T>
void ListaOrdenada<T>::ordenar(){
    //iniciando
    T dd;
    No* atual = inicio;
    while(atual != NULL){
        No* prox = atual->proximo();
        
        while(prox!=NULL){
            if(atual->getDado() > prox->getDado()){
                dd = atual->getDado();
                atual->setDado(prox->getDado());
                prox->setDado(dd);
            }
            prox = prox->proximo();
        }

        //serve para ir ao próximo valor
        atual = atual->proximo();
    }
}
