#include <stdio.h>
#include <assert.h>

#include "aserciones.h"
#include "../repaso.h"
#include "cadenas.h"


int main() {
    imprimir_titulo("Tests de Ejercicio 3");

    struct Punto centro={0,0};
    struct Punto p1={1,1};
    struct Punto p2={1,0};
    int r1=2,r2=1;

    assert(int_eq(dondeEstaElPuntoBis(centro,r1,p1),INTERNO));
   
    assert(int_eq(dondeEstaElPuntoBis(centro,r2,p1),EXTERNO));
   
    assert(int_eq(dondeEstaElPuntoBis(centro,r2,p2),EN_CIRCUNFERENCIA));

    printf("Todos los tests pasaron exitosamente!\n");

    return 0;
}
