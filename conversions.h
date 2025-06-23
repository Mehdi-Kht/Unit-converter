#ifndef CONVERSIONS_H
#define CONVERSIONS_H

// Température
float celsius_to_fahrenheit(float c);
float fahrenheit_to_celsius(float f);

// Longueur
float m_to_cm(float m);
float cm_to_m(float cm);
float cm_to_inches(float cm);
float inches_to_cm(float in);

// Poids
float kg_to_lb(float kg);
float lb_to_kg(float lb);

// Temps
float sec_to_min(float sec);
float min_to_sec(float min);
float min_to_hour(float min);
float hour_to_min(float hour);

#endif