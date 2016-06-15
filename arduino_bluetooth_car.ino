int right_d = 10;
int right_f = 11;
int left_d = 5;
int left_f = 6;



void setup() {
  // put your setup code here, to run once:
  pinMode(right_d, OUTPUT);
  pinMode(right_f, OUTPUT);
  pinMode(left_d, OUTPUT);
  pinMode(left_f, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int c = Serial.read(); 
  delay(1); 
  if (c == 97) { 
    Serial.println("forward"); 
    forward();
  } 
  if (c == 98) { 
    Serial.println("stop"); 
    stop_1();
  } 
    if (c == 99) { 
    Serial.println("backward"); 
    backward();
  } 
    if (c == 100) { 
    Serial.println("right"); 
    right();
  } 
    if (c == 101) { 
    Serial.println("leftt"); 
    left();
}
}

void forward() {
  analogWrite(right_d, 255);
  analogWrite(right_f, 0);
  analogWrite(left_d, 255);
  analogWrite(left_f, 0);
}

void stop_1() {
  analogWrite(right_d, 0);
  analogWrite(right_f, 0);
  analogWrite(left_d, 0);
  analogWrite(left_f, 0);
}


void backward() {
  analogWrite(right_d, 0);
  analogWrite(right_f, 255);
  analogWrite(left_d, 0);
  analogWrite(left_f, 255);
}

void right() {
  analogWrite(right_d, 0);
  analogWrite(right_f, LOW);
  analogWrite(left_d, 255);
  analogWrite(left_f, LOW);
}

void left() {
  analogWrite(right_d, 255);
  analogWrite(right_f, LOW);
  analogWrite(left_d, 0);
  analogWrite(left_f, LOW);
}
