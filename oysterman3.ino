
#include <Servo.h>
#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.




/************************************************/
Servo myservo;//create servo object to control a servo
/************************************************/

void setup()
{ Serial.begin(9600); 
  myservo.attach(9);//attachs the servo on pin 9 to servo object
  myservo.write(0);//back to 0 degrees 
  delay(10000);//wait for a second
  randomSeed(analogRead(A0));
}
/*************************************************/
void loop()

{ delay(500);  // Wait 500ms between pings (about 2 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  Serial.print("Ping: ");
  Serial.print(uS / US_ROUNDTRIP_CM); // Convert ping time to distance and print result (0 = outside set distance range, no ping echo)
  Serial.println("cm");
  
  if (uS / US_ROUNDTRIP_CM<15 && uS / US_ROUNDTRIP_CM != 0){

myservo.write(133);delay(300);
myservo.write(130);delay(100);
myservo.write(135);delay(100);
myservo.write(130);delay(100);
myservo.write(135);delay(100);
myservo.write(130);delay(100);
myservo.write(135);delay(100);
myservo.write(130);delay(100);
myservo.write(135);delay(100);
myservo.write(130);delay(100);
myservo.write(135);delay(100);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(133);delay(300);
Spell("iloveyou");

  }

 
  if (uS / US_ROUNDTRIP_CM>=80 && uS / US_ROUNDTRIP_CM<260){ myservo.write(uS / US_ROUNDTRIP_CM-80);delay(500);}
 if(uS / US_ROUNDTRIP_CM==263){myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);
myservo.write(130);delay(50);
myservo.write(135);delay(50);}
if(uS / US_ROUNDTRIP_CM==260){Spell("samurainevermournminutely");}
if(uS / US_ROUNDTRIP_CM==261){Spell("levitymournsoverstays");}
if(uS / US_ROUNDTRIP_CM==262){Spell("itstaresalonelystareenonamee");Spell("itlivesaloneeyoumaysayiamittnoooyouare");}



  if(uS / US_ROUNDTRIP_CM>14 && uS / US_ROUNDTRIP_CM <80){
   

myservo.write(27);delay(500);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(24);delay(100);
myservo.write(30);delay(100);
myservo.write(27);delay(500);

myservo.write(119);delay(500);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(122);delay(100);
myservo.write(116);delay(100);
myservo.write(119);delay(500);


myservo.write(150);delay(500);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(153);delay(100);
myservo.write(147);delay(100);
myservo.write(150);delay(500);

int ADJECTIVEnumber = random(1,88);
int NOUNnumber = random(1,93);
if (ADJECTIVEnumber==1){Spell("yeasty");}
if (ADJECTIVEnumber==2){Spell("savory");}
if (ADJECTIVEnumber==3){Spell("lonely");}
if (ADJECTIVEnumber==4){Spell("lovely");}
if (ADJECTIVEnumber==5){Spell("vain");}
if (ADJECTIVEnumber==6){Spell("easy");}
if (ADJECTIVEnumber==7){Spell("yummy");}
if (ADJECTIVEnumber==8){Spell("enormous");}
if (ADJECTIVEnumber==9){Spell("envious");}
if (ADJECTIVEnumber==10){Spell("evil");}
if (ADJECTIVEnumber==11){Spell("silver");}
if (ADJECTIVEnumber==12){Spell("irate");}
if (ADJECTIVEnumber==13){Spell("vomitous");}
if (ADJECTIVEnumber==14){Spell("venomous");}
if (ADJECTIVEnumber==15){Spell("vile");}
if (ADJECTIVEnumber==16){Spell("stale");}
if (ADJECTIVEnumber==17){Spell("lame");}
if (ADJECTIVEnumber==18){Spell("sour");}
if (ADJECTIVEnumber==19){Spell("satin");}
if (ADJECTIVEnumber==20){Spell("leary");}
if (ADJECTIVEnumber==21){Spell("lemony");}
if (ADJECTIVEnumber==22){Spell("sly");}
if (ADJECTIVEnumber==22){Spell("smiley");;}
if (ADJECTIVEnumber==24){Spell("steamy");}
if (ADJECTIVEnumber==25){Spell("verminous");}
if (ADJECTIVEnumber==26){Spell("livery");}
if (ADJECTIVEnumber==27){Spell("solitary");}
if (ADJECTIVEnumber==28){Spell("solemn");}
if (ADJECTIVEnumber==29){Spell("lost");}
if (ADJECTIVEnumber==30){Spell("lousy");}
if (ADJECTIVEnumber==31){Spell("lovey");}
if (ADJECTIVEnumber==32){Spell("lunar");}
if (ADJECTIVEnumber==33){Spell("stolen");}
if (ADJECTIVEnumber==34){Spell("lusty");}
if (ADJECTIVEnumber==35){Spell("malty");}
if (ADJECTIVEnumber==36){Spell("manly");}
if (ADJECTIVEnumber==37){Spell("stormy");}
if (ADJECTIVEnumber==38){Spell("snarly");}
if (ADJECTIVEnumber==39){Spell("suave");}
if (ADJECTIVEnumber==40){Spell("veiny");}
if (ADJECTIVEnumber==41){Spell("mean");}
if (ADJECTIVEnumber==42){Spell("silent");}
if (ADJECTIVEnumber==43){Spell("measly");}
if (ADJECTIVEnumber==44){Spell("meaty");}
if (ADJECTIVEnumber==45){Spell("menstrual");}
if (ADJECTIVEnumber==46){Spell("saintly");}
if (ADJECTIVEnumber==47){Spell("melty");}
if (ADJECTIVEnumber==48){Spell("sultry");}
if (ADJECTIVEnumber==49){Spell("minty");}
if (ADJECTIVEnumber==50){Spell("miserly");}
if (ADJECTIVEnumber==51){Spell("misty");}
if (ADJECTIVEnumber==52){Spell("moist");}
if (ADJECTIVEnumber==53){Spell("molten");}
if (ADJECTIVEnumber==54){Spell("violent");}
if (ADJECTIVEnumber==55){Spell("immoral");}
if (ADJECTIVEnumber==56){Spell("tame");}
if (ADJECTIVEnumber==57){Spell("mortal");}
if (ADJECTIVEnumber==58){Spell("motley");}
if (ADJECTIVEnumber==59){Spell("mousey");}
if (ADJECTIVEnumber==60){Spell("musty");}
if (ADJECTIVEnumber==61){Spell("violet");}
if (ADJECTIVEnumber==62){Spell("snorty");}
if (ADJECTIVEnumber==63){Spell("naive");}
if (ADJECTIVEnumber==64){Spell("natural");}
if (ADJECTIVEnumber==65){Spell("neat");;}
if (ADJECTIVEnumber==66){Spell("nervous");}
if (ADJECTIVEnumber==67){Spell("nervy");}
if (ADJECTIVEnumber==68){Spell("salty");}
if (ADJECTIVEnumber==69){Spell("rusty");}
if (ADJECTIVEnumber==70){Spell("noisy");}
if (ADJECTIVEnumber==71){Spell("normal");}
if (ADJECTIVEnumber==72){Spell("nosey");}
if (ADJECTIVEnumber==73){Spell("tiny");}
if (ADJECTIVEnumber==74){Spell("oily");}
if (ADJECTIVEnumber==75){Spell("olivey");}
if (ADJECTIVEnumber==76){Spell("sumo");}
if (ADJECTIVEnumber==77){Spell("ornate");}
if (ADJECTIVEnumber==78){Spell("overlusty");}
if (ADJECTIVEnumber==79){Spell("rainy");}
if (ADJECTIVEnumber==80){Spell("slimy");}
if (ADJECTIVEnumber==81){Spell("ravenous");}
if (ADJECTIVEnumber==82){Spell("slanty");}
if (ADJECTIVEnumber==83){Spell("rational");}
if (ADJECTIVEnumber==84){Spell("vital");}
if (ADJECTIVEnumber==85){Spell("smart");}
if (ADJECTIVEnumber==86){Spell("uneasy");}
if (ADJECTIVEnumber==87){Spell("rosey");}
if (ADJECTIVEnumber==88){Spell("royal");}


if (NOUNnumber==1){Spell("voyeur");}
if (NOUNnumber==2){Spell("yeti");}
if (NOUNnumber==3){Spell("snot");}
if (NOUNnumber==4){Spell("alien");}
if (NOUNnumber==5){Spell("snarl");}
if (NOUNnumber==6){Spell("smartie");}
if (NOUNnumber==7){Spell("ant");}
if (NOUNnumber==8){Spell("snail");}
if (NOUNnumber==9){Spell("salmon");}
if (NOUNnumber==10){Spell("soul");}
if (NOUNnumber==11){Spell("eel");}
if (NOUNnumber==12){Spell("senorita");}
if (NOUNnumber==13){Spell("emulation");}
if (NOUNnumber==14){Spell("sternum");}
if (NOUNnumber==15){Spell("satyr");}
if (NOUNnumber==16){Spell("inmate");}
if (NOUNnumber==17){Spell("investor");}
if (NOUNnumber==18){Spell("liar");}
if (NOUNnumber==19){Spell("laser");}
if (NOUNnumber==20){Spell("savior");}
if (NOUNnumber==21){Spell("lemon");}
if (NOUNnumber==22){Spell("lemur");}
if (NOUNnumber==23){Spell("lesion");}
if (NOUNnumber==24){Spell("stain");}
if (NOUNnumber==25){Spell("lion");}
if (NOUNnumber==26){Spell("star");}
if (NOUNnumber==27){Spell("loner");}
if (NOUNnumber==28){Spell("tsunami");}
if (NOUNnumber==29){Spell("lotus");}
if (NOUNnumber==30){Spell("loser");}
if (NOUNnumber==31){Spell("lover");}
if (NOUNnumber==32){Spell("luminary");}
if (NOUNnumber==33){Spell("user");}
if (NOUNnumber==34){Spell("maestro");}
if (NOUNnumber==35){Spell("varmint");}
if (NOUNnumber==36){Spell("souvenir");}
if (NOUNnumber==37){Spell("soulmate");}
if (NOUNnumber==38){Spell("mason");}
if (NOUNnumber==39){Spell("marvel");}
if (NOUNnumber==40){Spell("urinal");}
if (NOUNnumber==41){Spell("venom");}
if (NOUNnumber==42){Spell("mayor");}
if (NOUNnumber==43){Spell("sun");}
if (NOUNnumber==44){Spell("sailor");}
if (NOUNnumber==45){Spell("riot");}
if (NOUNnumber==46){Spell("melon");}
if (NOUNnumber==47){Spell("mentor");}
if (NOUNnumber==48){Spell("venus");}
if (NOUNnumber==49){Spell("melon");}
if (NOUNnumber==50){Spell("rose");}
if (NOUNnumber==51){Spell("utensil");}
if (NOUNnumber==52){Spell("sultan");}
if (NOUNnumber==53){Spell("minotaur");}
if (NOUNnumber==54){Spell("toenail");}
if (NOUNnumber==55){Spell("simulator");}
if (NOUNnumber==56){Spell("mist");}
if (NOUNnumber==57){Spell("minuet");}
if (NOUNnumber==58){Spell("tease");}
if (NOUNnumber==59){Spell("moaner");}
if (NOUNnumber==60){Spell("mole");}
if (NOUNnumber==61){Spell("monster");}
if (NOUNnumber==62){Spell("toilet");}
if (NOUNnumber==63){Spell("morsel");}
if (NOUNnumber==64){Spell("mortal");}
if (NOUNnumber==65){Spell("motel");}
if (NOUNnumber==66){Spell("uniter");}
if (NOUNnumber==67){Spell("mouse");}
if (NOUNnumber==68){Spell("mover");}
if (NOUNnumber==69){Spell("mule");}
if (NOUNnumber==70){Spell("muse");}
if (NOUNnumber==71){Spell("tourist");}
if (NOUNnumber==72){Spell("navel");}
if (NOUNnumber==73){Spell("nest");}
if (NOUNnumber==74){Spell("servant");}
if (NOUNnumber==75){Spell("toy");}
if (NOUNnumber==76){Spell("novelty");}
if (NOUNnumber==77){Spell("nurse");}
if (NOUNnumber==78){Spell("novelist");}
if (NOUNnumber==79){Spell("nut");}
if (NOUNnumber==80){Spell("olive");}
if (NOUNnumber==81){Spell("yam");}
if (NOUNnumber==82){Spell("train");}
if (NOUNnumber==83){Spell("virus");}
if (NOUNnumber==84){Spell("ovary");}
if (NOUNnumber==85){Spell("tumor");}
if (NOUNnumber==86){Spell("nostril");}
if (NOUNnumber==87){Spell("runt");}
if (NOUNnumber==88){Spell("oysterman");}
if (NOUNnumber==89){Spell("ram");}
if (NOUNnumber==90){Spell("rat");}
if (NOUNnumber==91){Spell("raven");}
if (NOUNnumber==92){Spell("realist");}
if (NOUNnumber==93){Spell("slayer");}

}
    
 
  
}
void Spell(char WORD[]){
    
     for (int i = 0; i < strlen(WORD); i++){
      
      
    if(WORD[i]=='i'){myservo.write(7);delay(2000);}
    if(WORD[i]=='l'){myservo.write(17);delay(2000);}
    if(WORD[i]=='u'){myservo.write(27);delay(2000);}
    if(WORD[i]=='v'){myservo.write(38);delay(2000);}
    if(WORD[i]=='o'){myservo.write(50);delay(2000);}
    if(WORD[i]=='y'){myservo.write(62);delay(2000);}
    if(WORD[i]=='s'){myservo.write(74);delay(2000);}
    if(WORD[i]=='t'){myservo.write(89);delay(2000);}
    if(WORD[i]=='e'){myservo.write(100);delay(2000);}
    if(WORD[i]=='r'){myservo.write(119);delay(2000);}
    if(WORD[i]=='m'){myservo.write(133);delay(2000);}
    if(WORD[i]=='a'){myservo.write(150);delay(2000);}
    if(WORD[i]=='n'){myservo.write(170);delay(2000);}
     }
    
    
    
    

    
  
  
  } 
/**************************************************/

