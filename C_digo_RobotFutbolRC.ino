/*
   Código ROBOTFUTBOLRC, recordar desconectar Tx y Rx del Módulo Bluetooth antes de cargar el Código.
*/

//PINES CONECTAR MOTOR 1
int in1 = 7;
int in2 = 6;
//PINES CONECTAR MOTOR 2
int in3 = 5;
int in4 = 4;

void setup()
{
  Serial.begin(9600);

  // Declaramos pines como salida
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0) {
    char letra = Serial.read();// Declaramos variable para almacenar los datos recibidos
    Serial.println(letra);

    if (letra == 'B') { //forward

      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    if (letra == 'F') {//backward
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }
    if (letra == 'R') { //rigth
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    if (letra == 'L') { //left

      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }
    if (letra == 'S') { //stop
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }
  }
}
