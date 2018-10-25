#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
//              (RS, E, D4, D5, D6, D7) 
LiquidCrystal lcd(13,12,11,10,9,8);

int r1=7,r2=6,r3=5,r4=4 ;
int c1=3,c2=2,c3=1,c4=0  ;

void setup()
{
  pinMode(r1,OUTPUT); pinMode(r2,OUTPUT);pinMode(r3,OUTPUT);pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);  pinMode(c2,INPUT); pinMode(c3,INPUT); pinMode(c4,INPUT);  
  lcd.begin(16,2);
  lcd.print("LCD Keypad ");
  lcd.setCursor(0,1);//0th col, 1st row
  digitalWrite(c1,HIGH);  digitalWrite(c2,HIGH);  
  digitalWrite(c3,HIGH);  digitalWrite(c4,HIGH);   
}

void loop(){
  //Check for ROW1
  digitalWrite(r1,LOW);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,HIGH);  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ lcd.print("1"); delay(300);  }
  if(digitalRead(c2)==LOW){ lcd.print("2"); delay(300);  }
  if(digitalRead(c3)==LOW){ lcd.print("3"); delay(300);  }
  if(digitalRead(c4)==LOW){ lcd.print("A"); delay(300);  }

  //Check for ROW2
  digitalWrite(r1,HIGH);   digitalWrite(r2,LOW);  
  digitalWrite(r3,HIGH);   digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ lcd.print("4"); delay(300);  }
  if(digitalRead(c2)==LOW){ lcd.print("5"); delay(300);  }
  if(digitalRead(c3)==LOW){ lcd.print("6"); delay(300);  }
  if(digitalRead(c4)==LOW){ lcd.print("B"); delay(300);  }
  
  //Check for ROW3
  digitalWrite(r1,HIGH);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,LOW);    digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ lcd.print("7"); delay(300);  }
  if(digitalRead(c2)==LOW){ lcd.print("8"); delay(300);  }
  if(digitalRead(c3)==LOW){ lcd.print("9"); delay(300);  }
  if(digitalRead(c4)==LOW){ lcd.print("C"); delay(300);  }

  //Check for ROW4
  digitalWrite(r1,HIGH);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,HIGH);   digitalWrite(r4,LOW); 
  if(digitalRead(c1)==LOW){ lcd.print("*"); delay(300);  }
  if(digitalRead(c2)==LOW){ lcd.print("0"); delay(300);  }
  if(digitalRead(c3)==LOW){ lcd.print("#"); delay(300);  }
  if(digitalRead(c4)==LOW){ lcd.print("D"); delay(300);  }
}

