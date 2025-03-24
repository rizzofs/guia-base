#include <stdio.h>
#include <assert.h>

#include "aserciones.h"
#include "../repaso.h"
#include "cadenas.h"


int main() {
    imprimir_titulo("Tests de Ejercicio 1");

    int xc1=0,yc1=0,rc1=2,xp1=1,yp1=1;
    assert(int_eq(dondeEstaElPunto(xc1,yc1,rc1,xp1,yp1),INTERNO));

    int xc2=0,yc2=0,rc2=1,xp2=1,yp2=1;
    assert(int_eq(dondeEstaElPunto(xc2,yc2,rc2,xp2,yp2),EXTERNO));

    int xc3=0,yc3=0,rc3=1,xp3=1,yp3=0;
    assert(int_eq(dondeEstaElPunto(xc3,yc3,rc3,xp3,yp3),EN_CIRCUNFERENCIA));
    
    printf("Todos los tests pasaron exitosamente\n");

    return 0;
}
