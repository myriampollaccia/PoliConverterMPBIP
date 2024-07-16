#include "unit_converter.h"
#include <stdio.h>

void print_title() {
  printf(" ____  _____  __    ____     ___  _____  _  _  _  _  ____  ____  "
         "____  ____  ____ \n");
  printf("(  _ \\(  _  )(  )  (_  _)   / __)(  _  )( \\( )( \\/ )( ___)(  _ "
         "\\(_  _)( ___)(  _ \\\n");
  printf(" )___/ )(_)(  )(__  _)(_   ( (__  )(_)(  )  (  \\  /  )__)  )   /  "
         ")(   )__)  )   /\n");
  printf("(__)  (_____)(____)(____)   \\___)(_____)(_\\_\\  \\/  (____)(_\\_) "
         "(__) (____)(_\\_)\n");
}

void display_menu() {
  printf("\nUnit Converter\n");
  printf("1. Celsius to Fahrenheit\n");
  printf("2. Fahrenheit to Celsius\n");
  printf("3. Kilometers to Miles\n");
  printf("4. Miles to Kilometers\n");
  printf("5. Grams to Ounces\n");
  printf("6. Ounces to Grams\n");
  printf("7. Exit\n");
  printf("Enter your choice: ");
}

int main() {
  int choice;
  float input, result;

  print_title();

  while (1) {
    display_menu();
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter temperature in Celsius: ");
      scanf("%f", &input);
      result = celsius_to_fahrenheit(input);
      printf("%.2f Celsius is %.2f Fahrenheit\n", input, result);
      break;
    case 2:
      printf("Enter temperature in Fahrenheit: ");
      scanf("%f", &input);
      result = fahrenheit_to_celsius(input);
      printf("%.2f Fahrenheit is %.2f Celsius\n", input, result);
      break;
    case 3:
      printf("Enter distance in Kilometers: ");
      scanf("%f", &input);
      result = kilometers_to_miles(input);
      printf("%.2f Kilometers is %.2f Miles\n", input, result);
      break;
    case 4:
      printf("Enter distance in Miles: ");
      scanf("%f", &input);
      result = miles_to_kilometers(input);
      printf("%.2f Miles is %.2f Kilometers\n", input, result);
      break;
    case 5:
      printf("Enter weight in Grams: ");
      scanf("%f", &input);
      result = grams_to_ounces(input);
      printf("%.2f Grams is %.2f Ounces\n", input, result);
      break;
    case 6:
      printf("Enter weight in Ounces: ");
      scanf("%f", &input);
      result = ounces_to_grams(input);
      printf("%.2f Ounces is %.2f Grams\n", input, result);
      break;
    case 7:
      return 0;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }

  return 0;
}
