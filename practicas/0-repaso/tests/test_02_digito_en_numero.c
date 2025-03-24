#include <stdio.h>
#include <assert.h>

#include "aserciones.h"
#include "../repaso.h"
#include "cadenas.h"


int main() {
    imprimir_titulo("Tests de Ejercicio 2");

    int numero_1=987,buscado_1=7;
    assert(bool_eq(digitoEnNumero(numero_1,buscado_1),true));

    int numero_2=987,buscado_2=6;
    assert(bool_eq(digitoEnNumero(numero_2,buscado_2),false));

    int numero_3 = 1458, buscado_3 = 5;
    assert(bool_eq(digitoEnNumero(numero_3, buscado_3), true));

    int numero_4 = 101, buscado_4 = 0;
    assert(bool_eq(digitoEnNumero(numero_4, buscado_4), true));

    int numero_5 = -987, buscado_5 = 7;
    assert(bool_eq(digitoEnNumero(numero_5, buscado_5), true));

    printf("Todos los tests pasaron exitosamente\n");


    return 0;
}
