#include "conversions.h"

// Température
float celsius_to_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}
float fahrenheit_to_celsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

// Longueur
float m_to_cm(float m) {
    return m * 100;
}
float cm_to_m(float cm) {
    return cm / 100;
}
float cm_to_inches(float cm) {
    return cm / 2.54;
}
float inches_to_cm(float in) {
    return in * 2.54;
}

// Poids
float kg_to_lb(float kg) {
    return kg * 2.20462;
}
float lb_to_kg(float lb) {
    return lb / 2.20462;
}

// Temps
float sec_to_min(float sec) {
    return sec / 60;
}
float min_to_sec(float min) {
    return min * 60;
}
float min_to_hour(float min) {
    return min / 60;
}
float hour_to_min(float hour) {
    return hour * 60;
}