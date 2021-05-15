//Definir las variables y los métodos
//DECLARACIÓN

#ifndef Sensor_h //Nombre del archivo
#define Sensor_h
#include "Arduino.h"

class Sensor {
  private:
    int distanciaMedida;
    int pinEntrada1;
    int pinEntrada2;
    int distanciaRAW;

    
    void inicializarPines();
    int procesarDistancia(distanciaRAW);
}
