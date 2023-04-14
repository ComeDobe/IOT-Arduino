// include les librairies pour le caprteur

#include <OneWire.h> 

#include <DallasTemperature.h>

/********************************************************************/

// le cable pour les données sur le pin 2

#define ONE_WIRE_BUS 10

/********************************************************************/

// déclare notre capteur ( ici le nom est : oneWire )  grace à la librairie

OneWire oneWire(ONE_WIRE_BUS); 

/********************************************************************/

// fait le lien entre les deux librairies 

DallasTemperature sensors(&oneWire);

/********************************************************************/ 

void setup(void) 

{ 

 // start serial port 

 Serial.begin(9600); 

 Serial.println("Dallas Temperature IC Control Library demonstration"); 

 // Start up the library 

 sensors.begin(); 

} 

void loop(void) 

{ 


/********************************************************************/

 Serial.print(" lecture  temperatures..."); 

 sensors.requestTemperatures(); // encoie de la commande  

 Serial.println("fait "); 

/********************************************************************/

 Serial.print("Temperature de la salle 202 est : "); 

 Serial.println(sensors.getTempCByIndex(0)); // Why "byIndex"?  

   // You can have more than one DS18B20 on the same bus.  

   // 0 refers to the first IC on the wire 

    Serial.println("------------------------------------------------------------"); 

   delay(1000); 

}
