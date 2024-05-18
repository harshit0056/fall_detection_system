 #include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setup(void) {
  Serial.begin(115200);
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  delay(100);
}

void loop() {
  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  float x=a.acceleration.x,y=a.acceleration.y,z=a.acceleration.z;
  bool flag=0;

if(z<=7.45){
    if(z<=6.55){
      if(z<=5.05){
        Serial.println("Fall");
        flag=1;
      }
      else{
        Serial.println("Fall");
        flag=1;
      }
    }
    else{
      if(x<=-0.95){
        Serial.println("Fall");
        flag=1;
      }
      else{
        Serial.println("Not Fall");
        flag=0;
      }
    }
  }
  else{
    if(x<=-1.95){
        Serial.println("Fall");
        flag=1;
    }
    else{
      if(x<=3.85){
        Serial.println("NOt Fall");
        flag=0;
      }
      else{
        Serial.println("Fall");
        flag=1;
      }
    }
  }
  
  delay(1000);
}
