/*************************************************************************************************
 **                                                                                             **
 **                             Projecte 4 / Programa 1                                         **
 **                                                                                             **
 ************************************************************************************************/


 //**************  Includes  *********************************************************************



 //**************  Variables  ********************************************************************
int tempAigua = 99;


 //**************  Setup  ************************************************************************
void setup() {  
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  } 
  else( tempAigua >= 100);
  {
    Serial.print("Aigua bullint");
  }
}


//*******  Loop  *********************************************************************************
void loop() {
 
}
