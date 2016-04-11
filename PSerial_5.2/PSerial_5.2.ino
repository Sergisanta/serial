/**********************************************************************************
**                                                                               ** 
**                        Projecte 5 / Programa 2                                **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
float numParell, numSenar;             
float resParell, resSenar;

//***********  Setup  *************************************************************
void setup() {
   Serial.begin(9600);        // initialize serial
  Serial.print("Entrar un numero, ");
}


//***********  Loop  **************************************************************
void loop() {
 while (Serial.available() > 0) {           
    numParell = Serial.parseInt(); 

    numSenar = Serial.parseInt();

    if (Serial.read() == '\n') {
    resParell = numParell / 2;
    resSenar = numSenar / 3;
   
                  
    Serial.print("el ");
    Serial.print(resParell);
    Serial.print(" es parell.");
    
    
    Serial.print("el ");
    Serial.print(resSenar);
    Serial.print(" es senar.");
    

    Serial.print("Entrar un nou numero, ");
    }
  } 
}
