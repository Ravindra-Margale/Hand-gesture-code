#include <LiquidCrystal.h>

int thumb;
int index_finger;
int middle_finger;
int ring_finger;
int little_finger;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2); 
  lcd.print("hello");
  delay(2000);
  lcd.clear();
}

void loop() {
  
int thumb = analogRead(A0);
int index_finger = analogRead(A1);
int middle_finger = analogRead(A2);
int ring_finger = analogRead(A3);
int little_finger = analogRead(A4);
  
Serial.print("thumb = ");
Serial.println(thumb);
Serial.print("\n");
Serial.print("index_finger = ");
Serial.println(index_finger);
Serial.print("\n");
Serial.print("middle_finger = ");
Serial.println(middle_finger);
Serial.print("\n");  
Serial.print("ring_finger = ");
Serial.println(ring_finger);
Serial.print("\n");
Serial.print("little_finger = ");
Serial.println(little_finger);
Serial.print("\n");

if(thumb == 1017 )
{
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("HII");
  delay(1000);   
}



else if(index_finger == 1017 )
{
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("HOW ARE YOU");
  delay(1000); 
 }
  
else if(middle_finger >=1017 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("I AM FINE");
delay(1000);
}

 else if(ring_finger==1017)
{
   lcd.clear();
   lcd.setCursor(1,0);
   lcd.print("MY NAME IS"); 
   //delay(1000);
   lcd.setCursor(4,1);
   lcd.print("HIMANSHU"); 
   delay(1);
}

else if(little_finger ==1017)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("I AM FROM INDIA");
  delay(1000);
}
  
  
  while(thumb == 1017 && index_finger==990 &&middle_finger== 990&& ring_finger == 1017&& little_finger== 1017 )
  { 
    lcd.clear();

     lcd.setCursor(1,0);
     lcd.print("VICTORY");
     delay(1000);  
     thumb = analogRead(A0);
      index_finger = analogRead(A1);
      middle_finger = analogRead(A2);
      ring_finger = analogRead(A3);
      little_finger = analogRead(A4);
    
    }
  
   while(thumb == 990 && index_finger ==1017 && middle_finger ==1017  && ring_finger == 1017&& little_finger== 1017 )
  { 
    lcd.clear();

     lcd.setCursor(1,0);
     lcd.print("ALL THE BEST");
     delay(1000);  
     
      thumb = analogRead(A0);
      index_finger = analogRead(A1);
      middle_finger = analogRead(A2);
      ring_finger = analogRead(A3);
      little_finger = analogRead(A4);
    
    }
  
  
   while(thumb == 990 && index_finger ==990 &&  middle_finger ==1017  && ring_finger == 1017&& little_finger== 990 )
  { 
    lcd.clear();

     lcd.setCursor(1,0);
     lcd.print("ROCK!!!");
     delay(1000);  
     
      thumb = analogRead(A0);
      index_finger = analogRead(A1);
      middle_finger = analogRead(A2);
      ring_finger = analogRead(A3);
      little_finger = analogRead(A4);
    
    }
  
  
   while(thumb == 990 && index_finger ==990 &&  middle_finger ==990  && ring_finger == 990&& little_finger== 990 )
  { 
    lcd.clear();

     //lcd.setCursor(1,0);
     //lcd.print("ROCK");
     //delay(1000);  
     
      thumb = analogRead(A0);
      index_finger = analogRead(A1);
      middle_finger = analogRead(A2);
      ring_finger = analogRead(A3);
      little_finger = analogRead(A4);
    
    }






}