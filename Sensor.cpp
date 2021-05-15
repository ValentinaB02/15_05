//Creación del constructor: Inicialización atributos
//INICIALIZACIÓN Y LÓGICA
#include "Sensor.h"
#include "Arduino.h"

Sensor::Sensor (int distanciaMedida,
    int pinEntrada1,
    int pinEntrada2,
    int distanciaRAW){
    pinEntrada1=3;
    pinEntrada2=4;
    distanciaRAW=0;
  }

void Sensor::inicializarPines(){
  pinMode (pinEntrada1,INPUT);
  pinMode (pinEntrada2,INPUT);
  }

int Sensor::procesarDistancia(){
  
  }

  
