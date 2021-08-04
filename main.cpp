#include "listaOrdenada.cpp"

int main(int argc, char const *argv[])
{
    ListaOrdenada<int> lista;

    lista.inserir(1);
    lista.inserir(0);
    lista.inserir(9);
    lista.inserir(2);
    lista.inserir(7);
    lista.inserir(24);

    std::cout << "Sem Ordenar:\n";

    lista.imprimir();

    std::cout << "Com Ordenacao:\n";

    lista.ordenar();
    lista.imprimir();

    return 0;
}