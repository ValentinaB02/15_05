#include <Led.h>
Led ledRojo(13,false,0);
Led ledAmarillo(12,false,0);
Led Verde(11,false,0);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  ledRojo.encender();
}
