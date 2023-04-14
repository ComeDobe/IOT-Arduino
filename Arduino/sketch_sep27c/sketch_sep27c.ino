void setup() {
  // Initialisation du moniteur serie
  Serial.begin(9600);
}
void loop() {
  // Lecture de la valeur sur la broche analogique A0
  int valeur = analogRead(A0);
  
  // Calcul de la température en degré Celcius
  //float temperature_celcius = valeur * 100.0 / 1023.0;
  
  float temperature_celcius=valeur;
  // Affichage de la température sur le moniteur serie
  Serial.print("Temperature : ");
  Serial.print(temperature_celcius);
  Serial.println(" Celcius");
  Serial.println("-----------------------------");
  
  // Delais de 250 millisecondes
  delay(5000);
}