// Arduino Ultrasonic Sensor HC-SRO4
// Arduino MEGA 2560 R3
// Arduino IDE 2.0.0

#define echo_pin 2 //Echo pin of sensor is attached to PWM 2 on arduino
#define trig_pin 3 //Trig pin of sensor is attached tp PWM 3 on arduino

long time_taken; //time taken for ultrasonic sound to travel to destination and back to receiver
int distance_travelled; // distance travelled by ultrasonic sound

void setup() {
  
  pinMode(trig_pin, OUTPUT); // trig_pin is set as the output
  pinMode(echo_pin, INPUT); // echo_pin is set as the input
  Serial.begin(9600); //Baudrate set to 9600
  Serial.println("Ultrasonic Sensor HC-SRO4 Test");
  Serial.println("Arduino MEGA 2560 R3");
}

void loop() {

  // trig pin set to low
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(10);

  // trig pin set to high
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  //stores value gotten from echo pin 
  time_taken = pulseIn(echo_pin, HIGH);

  //uses stored value to calculate distance    
  distance_travelled = time_taken * 0.034/2;

  Serial.print("Distance: ");
  Serial.print(distance_travelled);
  Serial.println(" cm");
}
