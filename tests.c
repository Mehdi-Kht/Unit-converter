#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "conversions.h"

#define EPSILON 0.0001

int float_equals(float a, float b) {
    return fabs(a - b) < EPSILON;
}

int main() {
    // Température
    assert(float_equals(celsius_to_fahrenheit(0), 32));
    assert(float_equals(fahrenheit_to_celsius(32), 0));

    // Longueur
    assert(float_equals(m_to_cm(1), 100));
    assert(float_equals(cm_to_m(200), 2));
    assert(float_equals(cm_to_inches(2.54), 1));
    assert(float_equals(inches_to_cm(1), 2.54));

    // Poids
    assert(float_equals(kg_to_lb(1), 2.20462));
    assert(float_equals(lb_to_kg(2.20462), 1));

    // Temps
    assert(float_equals(sec_to_min(120), 2));
    assert(float_equals(min_to_sec(2), 120));
    assert(float_equals(min_to_hour(120), 2));
    assert(float_equals(hour_to_min(1.5), 90));

    printf("Tous les tests unitaires ont réussi !\n");
    return 0;
}