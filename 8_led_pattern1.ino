byte pins[]={2, 3, 4, 5, 6, 7, 8, 9};
byte show[][8]={
  {1, 0, 0, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 0, 1, 0, 0, 0},
  {0, 1, 1, 0, 1, 1, 0, 0},
  {0, 1, 1, 0, 1, 1, 1, 0},
  {0, 1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

void setup()
{
  for (byte i = 0; i < sizeof(pins); ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}

void loop()
{
  for(byte i = 0; i < sizeof(show)/sizeof(show[0]); i++){
    for(byte j = 0; j < sizeof(pins); j++){
      digitalWrite(pins[j], show[i][j]);
    }
    delay(200);
  }
}

