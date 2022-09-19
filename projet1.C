#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Race{
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[100];
    char firstPlaceRaceCarColor[100];
 };

   void printIntro(){
  printf("Bienvenue à notre événement principal, les fans de course numérique !");
   }
   void printCountDown(){
       int iCounter=5;
    printf("\nCoureurs prêts ! Dans...");
   while (iCounter!=0){
      
       printf("\n\t%d", iCounter);
       iCounter--;
    //   sleep (1);
   }
   printf("\nCourse !");
   }
struct RaceCar{
    char  driverName[100];
    char raceCarColor[100];
    int totalLapTime;
};
void printFirstPlaceAfterLap(struct Race race){
 printf(" Après le tour numéro %d\n La première place est occupée par : %s \n dans la voiture de course %s !", race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor); 
 }
 void printCongratulation(struct Race race){
      printf(" Félicitons tous %s, dans la voiture de course %s pour son incroyable performance.\nC'était vraiment une belle course et bonne nuit à tous!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
 }
 int calculateTimeToCompleteLap(){
int vitesse;
int acceleration;
int nerves;
// int sum;
return
 vitesse+(1+rand()%3)+acceleration+(1+rand()%3)+nerves+(1+rand()%3);
 }
 void updateRaceCar(struct RaceCar* raceCar){
 RaceCar->raceCar = RaceCar->raceCar +calculateTimeToCompleteLap(); 
 }
 void updateFirstPlace(struct RaceCar*race,struct RaceCar*raceCar1, struct RaceCar*raceCar2){

if(raceCar1->totalLapTime <=raceCar2->totalLapTime){
strcpy(raceCar1->driverName, raceCar1->totalLapTime);
strcpy(raceCar1->raceCarColor, raceCar1->totalLapTime);
}
else {
    strcpy(raceCar2->driverName, raceCar2->totalLapTime);
    strcpy(raceCar2->raceCarColor, raceCar2->totalLapTime);
}

 }
int main() {
    startRace(raceCar1, raceCar2){
numberOfLaps;currentLap;
    char firstPlaceDriverName[100];
    char firstPlaceRaceCarColor[100];
    }
    srand(time(0));
     printIntro();
     printCountDown();
    //  printFirstPlaceAfterLap();
    return 0;
}