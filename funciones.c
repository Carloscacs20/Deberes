#include <stdio.h>
#include "funciones.h"

float calcularCapitalPorAnio(float capitalRestante, int tiempo) {
    return capitalRestante / tiempo;
}

float calcularInteresPorAnio(float capitalRestante, float tasaInteresAnual) {
    return capitalRestante * (tasaInteresAnual / 100);
}

float calcularCapitalConInteres(float capitalPorAnio, float interesPorAnio) {
    return capitalPorAnio + interesPorAnio;
}

float calcularCuotaMensual(float capitalConInteres) {
    return capitalConInteres / 12;
}