#include "src/HeptaSat.h"

HeptaCdh    cdh;
HeptaEps    eps;
HeptaSensor sensor;

void setup() {
  cdh.begin();
  eps.init();
  sensor.begin();
}

void loop() {
  float ax, ay, az;
  sensor.get_acceleration(&ax, &ay, &az);
  cdh.printf("Acceleration: ax=%.2f, ay=%.2f, az=%.2f\n", ax, ay, az);
  delay(1000);
}
