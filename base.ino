 bool flag = false;
void setup() {
  // put your setup code here, to run once:
 
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}

void loop() {
  int arr[] = {850, 20, 520};
  int arr2[3];
  for(int i =0;i<3;i++){
    String s = "A"+i; 
    arr2[i] = analogRead(i);
    Serial.print(arr2[i]);
    Serial.print("\n");
    }
flag = true;
  for(int i =0;i<3;i++){
    if(abs(arr[i] - arr2[i]) > 20 ){
      flag = false;
      }
  }  
  if(flag){
    digitalWrite(8, 1);
    }else{
      digitalWrite(8, 0);
      }
  delay(1000);

}
