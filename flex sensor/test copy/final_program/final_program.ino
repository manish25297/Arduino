const int FLEX_PIN = A0; // Pin connected to voltage divider output
String message="";
String a="";String pb="";

// Measure the voltage at 5V and the actual resistance of your
// 47k resistor, and enter them below:
const float VCC = 5; // Measured voltage of Ardunio 5V line
const float R_DIV = 45000.0; // Measured resistance of 3.3k resistor

// Upload the code, then try to adjust these values to more
// accurately calculate bend degree.
const float STRAIGHT_RESISTANCE = 28000.0; // resistance when straight
const float BEND_RESISTANCE = 65000.0; // resistance at 90 deg

void setup() 
{
  Serial.begin(9600);
  //pinMode(FLEX_PIN, INPUT);
}

void loop() 
{
  
  
  // Read the ADC, and calculate voltage and resistance from it
  int flexADC = analogRead(FLEX_PIN);
  float flexV = flexADC * VCC / 1023.0;
  float flexR = R_DIV * (VCC / flexV - 1.0);
 // Serial.println("Resistance: " + String(flexR) + " ohms");

  // Use the calculated resistance to estimate the sensor's
  // bend angle:
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                   0, 90.0);
  Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();

  delay(500);

if(angle>10 && angle<30)
{ delay(200);
  a="A";
//  Serial.println(message);  
}
else if(angle>=30 && angle<50)
{ delay(200);
  a="p";
 // Serial.println(message);  
}
else if(angle>=50 && angle<70)
{ delay(200);
  a="l";
 // Serial.println(message);  
}
else if(angle>=70 && angle<90)
{ delay(200);
  a="e";
  //Serial.println(message);  
}
/*else if(angle>=40 && angle<50)
{ delay(100);
  a="E";
  Serial.println(message);  
}
else if(angle>=50 && angle<60)
{ delay(100);
  a="F";
  Serial.println(message);  
}
else if(angle>=70 && angle<80)
{ delay(100);
  a="G";
  Serial.println(message);  
}
else if(angle>=80 && angle<=90)
{ delay(100);
  a="H";
  Serial.println(message);  
}*/
if(pb!=a)
{
  message+=a;
  pb=a;
  delay(3000);
 
}
 Serial.println(message);
}

