int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int An0 = 9;
int An1 = 10;
int p = 11;
char A , B , C , D ; 
int C1 = 0, C2 = 0;
String res = "";
char nums [2][2];

void setup()
{
    
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(An0, OUTPUT);
    pinMode(p, OUTPUT);
    pinMode(An1, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
  //sintaxys de entrada = <Operacion>: D1D2,D3D4
  if (Serial.available()) {
    String s = Serial.readStringUntil('\n');
    s.trim();
    res ="";

    for (int i = 0; i < s.length(); i++) {
      if(s.charAt(i)==' '){
        
        String a = s.substring(i+1);
        getNumbers(a);
        res = s.substring(0,i);


      }
    }
    Serial.println(res);


  	if(nums[0][0] == '0' && nums[0][1] == '0'){
      C1 = 0;
      
    }
    if(nums[0][0] == '0' && nums[0][1] == '1'){
      C1 = 1;
      
    }
    if(nums[0][0] == '1' && nums[0][1] == '0'){
      C1 = 2;
      
    }
    if(nums[0][0] == '1' && nums[0][1] == '1'){
      C1 = 3;
      
    }

    if(nums[1][0] == '0' && nums[1][1] == '0'){
      C2 = 0;
      
    }
    if(nums[1][0] == '0' && nums[1][1] == '1'){
      C2 = 1;
      
    }
    if(nums[1][0] == '1' && nums[1][1] == '0'){
      C2 = 2;
      
    }
    if(nums[1][0] == '1' && nums[1][1] == '1'){
      C2 = 3;
      
    }

    Serial.println(C1);
    Serial.println(C2);
    Serial.println(res);

  
  
  }
  if(res=="suma"){
    Serial.println("Resultado:");
    Serial.println(C1+C2);
    Sal(C1+C2);
  }else
  if(res=="resta"){
    Serial.println("Resultado:");
    Sal(C1-C2);
  }else
  if(res=="multiplicacion"){
    Serial.println("Resultado:");
    Sal(C1*C2);
  }else
  if(res=="division"){
    Serial.println("Resultado:");
    if(C1 == 0 && C2 == 0){
      Sal(333);
    }else if(C2 == 0){
      Sal(111);
    }else if(C1 == 1 && C2 == 3){
      Sal(33);
    }else if(C1 == 1 && C2 == 2){
      Sal(50);
    }else if(C1 == 2 && C2 == 3){
      Sal(66);
    }else if(C1 == 3 && C2 == 2){
      Sal(105);
    }
    else{
      Sal( (int) C1/C2 );  
    }
  }else
  if(res=="and"){
    Serial.println("Resultado:");
    if(A == '1'&& C == '1' && B == '1' && D == '1'){
      Sal(3);
    }else if(A == '1' && C == '1'){
      Sal(2);
    }else if(B == '1' && D == '1'){
      Sal(1);
    }else{
      Sal(0);
    }
  }else
  if(res=="or"){
    Serial.println("Resultado:");
    if((A == '1' || C == '1') && (B == '1' || D == '1')){
      Sal(3);
    }else
    if(A == '1' || C == '1'){
      Sal(2);
    }else
    if(B == '1' || D == '1'){
      Sal(1);
    }else{
      Sal(0);
    }
  }else
  if(res=="xor"){
    Serial.println("Resultado:");
    if(A == '1' ^ C == '1' && B == '1' ^ D == '1'){
      Sal(3);
    }else
    if(A == '1' ^ C == '1'){
      Sal(2);
    }else
    if(B == '1' ^ D == '1'){
      Sal(1);
    }else{
      Sal(0);
    }
    	
  }


}




void Sal (int n){
  switch(n){
    case -3:
      Serial.println("-3");
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(p, 0);
      digitalWrite(An0, 0);
      delay(10);

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case -2:
      Serial.println("-2");
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(p, 0);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);
      
      
    break;
    case -1:
      Serial.println("-1");
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(p, 0);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An1, 0);
      delay(10);
      
      
    break;
    case 0:
      Serial.println("0");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      
      
      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      

    break;
    case 33:
      Serial.println("0.3");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      
      
      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 50:
      Serial.println("0.5");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);

      
      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);

    break;
    case 66:
      Serial.println("0.6");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      
      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);
    break;
    case 1:
      Serial.println("1");
      
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      

    break;
    case 105:
    Serial.println("1.5");
      
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
    
      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(An1, 0);
      delay(10);
    break;
    case 2:
      Serial.println("2");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 3:
      Serial.println("3");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);


      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);

    break;
    case 4:
      Serial.println("4");
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 5:
      Serial.println("5");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 6:
      Serial.println("6");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 7:
      Serial.println("7");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 8:
      Serial.println("8");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 9:
      Serial.println("9");
      digitalWrite(An1, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    
    break;
    case 111:
      Serial.println("Infinito");
      digitalWrite(p,0);
      digitalWrite(An0, 0);
      digitalWrite(An1, 0);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
    delay(10);
    break;
    case 333:
      Serial.println("Er");
      digitalWrite(p,0);
      
      digitalWrite(An1, 1); 
      

      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(An0, 0);
      delay(10);
      

      digitalWrite(An0, 1);
      
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(An1, 0);
      delay(10);
      
    break;
    case 355:
      digitalWrite(An0, 1);
      digitalWrite(An1, 1);
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      Serial.println("Nada");
    break;
    default:
      Serial.println("error");
      Serial.println(n);
      digitalWrite(An0, 0);
      digitalWrite(An1, 0);
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(p, 1);

      delay(1000);
      
      digitalWrite(An0, 1);
      digitalWrite(An1, 1);

      delay(500);
      
    break;
  }
}


void getNumbers(String cadena){
  Serial.println(cadena);
  int salto =0;
  int apuntador =0;
  for(int i = 0; i < cadena.length(); i++){
    if(cadena.charAt(i)!= ','){
      nums[salto][apuntador]=cadena.charAt(i);
      apuntador++;
    }else{
      salto++;
      apuntador=0;
    }
  }
}