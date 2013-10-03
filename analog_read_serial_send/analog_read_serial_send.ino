//copyright jakob marsico for "Making Things Interactive" course Carnegie Mellon University

int aReads[] ={A0, A1, A2, A3, A4, A5};

void setup ()
{
  Serial.begin(9600);
}

void loop ()
{
  if(Serial.available() > 0) //wait for a signal from the computer before sending data
  {
    
    for (int i = 0; i < 5; i++)  //work through the array of analogRead pins and send the value and a space
    {
      Serial.print(analogRead(aReads[i]));
      Serial.print(" ");
    } 
    
    Serial.println(analogRead(aReads[5]));  //for the sixth value, print a line terminator
    
    delay(2);                      //delay to keep things in line
    
  }
}
  
  

