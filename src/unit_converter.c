#include "unit_converter.h"

float celsius_to_fahrenheit(float celsius) {
  return celsius * 9.0 / 5.0 + 32.0;
}

float fahrenheit_to_celsius(float fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float kilometers_to_miles(float kilometers) { return kilometers * 0.621371; }

float miles_to_kilometers(float miles) { return miles / 0.621371; }

float grams_to_ounces(float grams) { return grams * 0.035274; }

float ounces_to_grams(float ounces) { return ounces / 0.035274; }
