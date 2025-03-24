#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "repaso.h"

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp) {
    int r = pow(rc, 2);
    int d = pow(xp - xc, 2) + pow(yp - yc, 2);
    if (d < r)
        return INTERNO;
    else if (d == r)
        return EN_CIRCUNFERENCIA;
    else
        return EXTERNO;
}

bool digitoEnNumero(long n, short d) {
    while (n != 0)
{
    int digito = abs(n % 10);
    if (digito == d)
        return true;
    n /= 10;
}

}

enum Referencia dondeEstaElPuntoBis(struct Punto centroC, int rc, struct Punto p) {
    int r = pow(rc, 2), d = (pow(p.x - centroC.x, 2) + pow(p.y - centroC.y, 2));
    if (d < r)
        return INTERNO;
    else if (d == r)
        return EN_CIRCUNFERENCIA;
    else
        return EXTERNO;
    
}

// Función para ordenar jugadores por cantidad de partidos jugados
struct Jugador *jugadoresOrdenadosPorCantDePartidos(struct Jugador equipo[CANT_JUGADORES]) {
    struct Jugador *partidos; // Creo un puntero a la estructura Jugador
    
    partidos=(struct Jugador*)malloc(CANT_JUGADORES*sizeof(struct Jugador)); // Reservo memoria para la estructura Jugador
    
    int edadaux, partaux; // Creo variables auxiliares para la edad y la cantidad de partidos
    
    char nombreaux[TAMANO_STRING]; // Creo un vector auxiliar para el nombre
    
    for (int i = 0; i < CANT_JUGADORES; i++) 
    {
        for (int j = 0; j < CANT_JUGADORES; j++)
        {
            if (partidos[i].partidosJugados > partidos[j].partidosJugados)
            {
                edadaux = partidos[i].edad;
                partaux = partidos[i].partidosJugados;
                partidos[i].edad = partidos[j].edad;
                partidos[i].partidosJugados = partidos[j].partidosJugados;
                partidos[j].edad = edadaux;
                partidos[j].partidosJugados = partaux;
                for (int s = 0; s < TAMANO_STRING; s++)
                {
                    nombreaux[s] = partidos[i].nombre[s];
                    partidos[i].nombre[s] = partidos[j].nombre[s];
                    partidos[j].nombre[s] = nombreaux[s];
                }
            }
        }
    }
    free(partidos);
}

// Función para ordenar jugadores por edad
struct Jugador *jugadoresOrdenadosPorEdad(struct Jugador equipo[CANT_JUGADORES]) {
}

// Función para calcular el promedio de partidos jugados dada una edad
float promedioDePartidosJugados(struct Jugador equipo[CANT_JUGADORES], int edad) {
}

Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]) {
}

// Función que devuelve el piso con más habitantes
int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]) {
}

// Función que devuelve el número de departamentos vacíos
int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]) {
}

// Función que devuelve el promedio de habitantes por departamento
float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]) {
}

void cantidadDeViviendasVaciasPorPiso(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS], int vaciasPorPiso[CANT_PISOS]) {
}

void viviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS],
                     Vivienda viviendasVacias[CANT_PISOS * CANT_DEPARTAMENTOS]) {
}

void procesarArchivo(const char *nombreArchivo) {
}
