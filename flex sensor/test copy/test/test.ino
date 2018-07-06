const int FLEX_PIN = A0;
const float VCC = 5; 
const float R_DIV = 45000.0;
const float STRAIGHT_RESISTANCE = 28000.0;
const float BEND_RESISTANCE = 65000.0; 
char a[20];
String key;
int p=0;
char n;
void setup() 
{
  Serial.begin(9600);
  pinMode(FLEX_PIN, INPUT);
}
void fun()
{
  int flexADC = analogRead(FLEX_PIN);
  float flexV = flexADC * VCC / 1023.0;
  float flexR = R_DIV * (VCC / flexV - 1.0);
  //Serial.println("Resistance: " + String(flexR) + " ohms");
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                   0, 90.0);
  //Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();
delay(500);
if(angle>=0 && angle<30)
{
  // p++;
  //n='l';
  Serial.println("l");
delay(100);
//return "l";
}
  else if(angle>=30 && angle<50)
 
 //p++;
  //n='i';
  Serial.println("i");
    delay(100);
//return "i";
} 
     else if(angle>= 50&& angle<90)
  {
 //p++;
  //n='k';
  Serial.println("k");
    delay(100);
//return "k";
} 
     else if(angle>=90 && angle<120)
  {
  // p++;
  //n='e';
  Serial.println("e");
    delay(100);
//return "e";
}
//return "o"; 
}

String red_n()
{
   key="o";
  while(key=="o")
  key=fun();
   return key;
  }

  /*void fun2()
  {
    fun();
  a[p-1]=n;
    }*/

void loop() 
{
  /*int flexADC = analogRead(FLEX_PIN);
  float flexV = flexADC * VCC / 1023.0;
  float flexR = R_DIV * (VCC / flexV - 1.0);
  //Serial.println("Resistance: " + String(flexR) + " ohms");
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                   0, 90.0);
  //Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();
delay(500);*/

String b=red_n();

  Serial.println(b);
   

Serial.println(a);
count=0;

/*if(p<10)
{
  fun2();
}
  for(int i=0;i<p;i++)
  {
    Serial.print(a[i]);
    }*/
    }









