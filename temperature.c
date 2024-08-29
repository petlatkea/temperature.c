#include <stdio.h>

void display_intro();
void display_menu();
float fahrenheit_to_celsius(float fahr);
float celsius_to_fahrenheit(float celsius);
float get_value();
char get_choice();

int main() 
{

  display_intro();

  // vis menu
  display_menu();
  // tag imod valg

  printf("Indtast valg: ");
  char choice = get_choice();

  printf("Du valgte %c\n", choice);

  // hvis (f) så fahrenheit:
{
    // bed om temp i fahrenheit
    printf("Indtast temperatur i Fahrenheit: ");
    float fahr = get_value();

    // lav omregening
    float celsius = fahrenheit_to_celsius(fahr);

    // udskriv resultat
    printf("%f fahrenheit er %.2f grader celsius\n", fahr, celsius);
}
  // hvis (c) så celsius
{
    // bed om temp i celsius
    printf("Indtast temperatur i Celsius: ");
    float celsius = get_value();

    // lav omregning
    float fahr = celsius_to_fahrenheit(celsius);

    // udskriv resultat
    printf("%f celsius er %.2f grader fahrenheit\n", celsius, fahr);
}
  
  // hvis (x) så exit

  // ellers repeat


  return 0;
}

float fahrenheit_to_celsius(float fahr) 
{
  float celsius = (fahr - 32) * 5 / 9;
  return celsius;
}

float celsius_to_fahrenheit(float celsius) 
{
  float fahr = celsius * 9 / 5 + 32;
  return fahr;
}


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
  scanf("%c", &choice);
  return choice;
}