# HC-SR04-Ultrasonic
MRE 320 Individual Project testing the Ultrasonic Sensor

This Project is designed to test and verify the functionality of the Ultrasonic Sensor and compare its actual specifications to the manufacturer provided specifications

The working principle is based on measuring the time of travel of ultrasonic sound waves and using this time of travel to calculate the distance between the sensor and the object

The Sensor is equiped with an emitter and a receiver. 

The Emitter gives off ultrasonic sound which bounces off the object and a distance and travels back to the receiver

The sensor is able to register the time of travel from the emitter back to the receiver

Since velocity = distance/time

Therefore distance = velocity * time

But the time of travel is the total time going to and back from the object which is twice of what we need
To get the actual distance we just divide by 2

Therefore distance = (velocity * time)/2  
The value of velocity used is the speed of sound and the sensor measures the time of travel

