int r1=7,r2=6,r3=5,r4=4 ;
int c1=3,c2=2,c3=A0,c4=A1  ;
void setup()
{ // rows as OUTPUT , Columns as INPUT
  pinMode(r1,OUTPUT); pinMode(r2,OUTPUT);pinMode(r3,OUTPUT);pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);  pinMode(c2,INPUT); pinMode(c3,INPUT); pinMode(c4,INPUT);  
  Serial.begin(9600); // open serial port at 9600 baud rate
  // make all column pins as HIGH
  digitalWrite(c1,HIGH);  digitalWrite(c2,HIGH);  
  digitalWrite(c3,HIGH);  digitalWrite(c4,HIGH);   
}
void loop(){
  //Check for ROW1
  digitalWrite(r1,LOW);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,HIGH);  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ Serial.println("1"); delay(300);  }
  if(digitalRead(c2)==LOW){ Serial.println("2"); delay(300);  }
  if(digitalRead(c3)==LOW){ Serial.println("3"); delay(300);  }
  if(digitalRead(c4)==LOW){ Serial.println("A"); delay(300);  }

  //Check for ROW2
  digitalWrite(r1,HIGH);   digitalWrite(r2,LOW);  
  digitalWrite(r3,HIGH);   digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ Serial.println("4"); delay(300);  }
  if(digitalRead(c2)==LOW){ Serial.println("5"); delay(300);  }
  if(digitalRead(c3)==LOW){ Serial.println("6"); delay(300);  }
  if(digitalRead(c4)==LOW){ Serial.println("B"); delay(300);  }
  
  //Check for ROW3
  digitalWrite(r1,HIGH);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,LOW);    digitalWrite(r4,HIGH);
  if(digitalRead(c1)==LOW){ Serial.println("7"); delay(300);  }
  if(digitalRead(c2)==LOW){ Serial.println("8"); delay(300);  }
  if(digitalRead(c3)==LOW){ Serial.println("9"); delay(300);  }
  if(digitalRead(c4)==LOW){ Serial.println("C"); delay(300);  }

  //Check for ROW4
  digitalWrite(r1,HIGH);   digitalWrite(r2,HIGH);  
  digitalWrite(r3,HIGH);   digitalWrite(r4,LOW); 
  if(digitalRead(c1)==LOW){ Serial.println("*"); delay(300);  }
  if(digitalRead(c2)==LOW){ Serial.println("0"); delay(300);  }
  if(digitalRead(c3)==LOW){ Serial.println("#"); delay(300);  }
  if(digitalRead(c4)==LOW){ Serial.println("D"); delay(300);  }
}

