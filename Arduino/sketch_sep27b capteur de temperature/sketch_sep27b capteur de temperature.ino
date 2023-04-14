int thermo=A0;                      
int valTemp=0;   
                       
/*varible dans laquelle sera stocké le résultat de la fonction f(signal)=temperature */                                    
int temp=0;                            

void setup() {
  pinMode(thermo, INPUT);            
  Serial.begin(9600);           
}

void loop() { 
  valTemp=analogRead(thermo);  
                          
  /*Fonction f(signal)=température et stockage   du résultat dans la variable temp*/
  temp = 0.1463 * valTemp - 51.713;   
  
  /*Affiche à cette position la valeur de 'temp'*/                
  Serial.println(temp); 
    
  /*Attend 5 secondes avant de relever une   nouvelle température */            
  delay(5000);                         
}
