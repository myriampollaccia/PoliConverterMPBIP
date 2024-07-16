#include "../src/unit_converter.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 0.0001

void test_celsius_to_fahrenheit() {
  assert(fabs(celsius_to_fahrenheit(0) - 32) < EPSILON);
  printf("All celsius_to_fahrenheit tests passed!\n");
}

void test_fahrenheit_to_celsius() {
  assert(fabs(fahrenheit_to_celsius(32) - 0) < EPSILON);
  printf("All fahrenheit_to_celsius tests passed!\n");
}

void test_kilometers_to_miles() {
  assert(kilometers_to_miles(1) == 0.621371);
  printf("All kilometers_to_miles tests passed!\n");
}

void test_miles_to_kilometers() {
  assert(miles_to_kilometers(0.621371) == 1);
  printf("All miles_to_kilometers tests passed!\n");
}

void test_grams_to_ounces() {
  assert(fabs(grams_to_ounces(1) - 0.035274) < EPSILON);
  printf("All grams_to_ounces tests passed!\n");
}

void test_ounces_to_grams() {
  assert(fabs(ounces_to_grams(0.035274) - 1) < EPSILON);
  printf("All ounces_to_grams tests passed!\n");
}

int main() {
  test_celsius_to_fahrenheit();
  test_fahrenheit_to_celsius();
  test_kilometers_to_miles();
  test_miles_to_kilometers();
  test_grams_to_ounces();
  test_ounces_to_grams();
  return 0;
}
