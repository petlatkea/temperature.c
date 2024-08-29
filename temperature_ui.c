#include <stdio.h> 

void display_intro()
{
  printf("Velkommen til temperatur-programmet\n");
  printf("-----------------------------------\n");
}

void display_menu()
{
  printf("Vælg funktion\n");
  printf("(f) Fahrenheit til Celsius\n");
  printf("(c) Celsius til Fahrenheit\n");
  printf("(x) exit\n");
}

float get_value()
{
  float value;
  scanf("%f", &value);
  return value;
}

char get_choice()
{
  char choice;
  scanf(" %c", &choice);
  return choice;
}