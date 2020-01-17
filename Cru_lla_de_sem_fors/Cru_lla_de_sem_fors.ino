
// semafor a
int LED1A = 12;
int LED2A = 11;
int LED3A = 10;

// semafor B 
int LED1B = 9;
int LED2B = 8;
int LED3B = 7;

void setup(){
   
    //semafor A
    pinMode(LED1A, OUTPUT);
    pinMode(LED2A, OUTPUT);
    pinMode(LED3A, OUTPUT);

    // semafor B
    pinMode(LED1B, OUTPUT);
    pinMode(LED2B, OUTPUT);
    pinMode(LED3B, OUTPUT);
    
}

void loop() {
    
    // cruïlla 
    
    digitalWrite(LED1A,HIGH);             
    digitalWrite(LED2A, LOW);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,HIGH); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,LOW);
    delay(1000);

    digitalWrite(LED1A,HIGH);             
    digitalWrite(LED2A, LOW);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,LOW); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,HIGH);
    delay(4000);

    digitalWrite(LED1A,HIGH);             
    digitalWrite(LED2A, LOW);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,LOW); 
    digitalWrite(LED2B, HIGH);
    digitalWrite(LED3B,LOW);
    delay(1000);

    digitalWrite(LED1A,HIGH);             
    digitalWrite(LED2A, LOW);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,HIGH); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,LOW);
    delay(1000);

    digitalWrite(LED1A,LOW);             
    digitalWrite(LED2A, LOW);
    digitalWrite(LED3A,HIGH);
    digitalWrite(LED1B,HIGH); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,LOW);
    delay(4000);

    digitalWrite(LED1A,LOW);             
    digitalWrite(LED2A, HIGH);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,HIGH); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,LOW);
    delay(1000);

    digitalWrite(LED1A,HIGH);             
    digitalWrite(LED2A,LOW);
    digitalWrite(LED3A,LOW);
    digitalWrite(LED1B,HIGH); 
    digitalWrite(LED2B, LOW);
    digitalWrite(LED3B,LOW);
    delay(1000);
}
