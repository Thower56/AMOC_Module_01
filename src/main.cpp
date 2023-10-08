#include <Arduino.h>

void allumerDELInterne(int p_duree);
void eteindreDELInterne(int p_duree);
void morseSOS();
void morseLong();
void morseCourt();
void morseEspace();

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop()
{
  //Exercice 1
  // allumerDELInterne(100);
  // eteindreDELInterne(100);

  //Exercice 2
  // allumerDELInterne(1000);
  // eteindreDELInterne(500); 

  // allumerDELInterne(500);
  // eteindreDELInterne(1000);

  //Exercice 3
  // allumerDELInterne(15);
  // eteindreDELInterne(15);

  //Exercice 4
  // allumerDELInterne(15);
  // eteindreDELInterne(15);

  //Exercice 5
  morseSOS();

  //Exercice 6
  // #define HIGH 0x1
  // #define LOW  0x0
  // #define LED_BUILTIN 13
}

void allumerDELInterne(int p_duree)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(p_duree);
}

void eteindreDELInterne(int p_duree)
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(p_duree);
}
void morseSOS()
{
  morseCourt();
  morseCourt();
  morseCourt();
  morseEspace();
  morseLong();
  morseLong();
  morseLong();
  morseEspace();
  morseCourt();
  morseCourt();
  morseCourt();
  morseEspace();
  morseEspace();
}
void morseLong()
{
  allumerDELInterne(600);
  eteindreDELInterne(600);
}
void morseCourt()
{
  allumerDELInterne(200);
  eteindreDELInterne(200);
}
void morseEspace()
{
  eteindreDELInterne(600);
}