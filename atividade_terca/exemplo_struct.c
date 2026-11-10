#include <stdio.h>
struct produto{
    int codigo;
    char categoria;
    double valor;
};

int main(){
    struct produto p1;
    p1.codigo = 1;
    p1.categoria = 'A';
    p1.valor = 10.86;
    printf('Cod: %d\n', p1.codigo);
    printf('Categ: %c\n', p1.categoria);
    printf('Vlr: %lf\n', p1.valor);
    return 0;
}