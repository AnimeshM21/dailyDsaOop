#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day;
    int month;
    int year;

}DATE;

typedef struct{
    int hour;
    int minutes;
    int seconds;

}TIME;

typedef struct{
    DATE date;
    TIME time;

}STAMP;





int main(){

STAMP stamp;
STAMP stamp1 = {{9,2,2004},{22,22,22}};
stamp.date.day = 21;
stamp.date.month = 7;
stamp.date.year = 2005;

stamp.time.hour = 7;
stamp.time.minutes = 21;
stamp.time.seconds = 3;



printf("The Date of Birth is : %d %d %d \n",stamp.date.day,stamp.date.month,stamp.date.year);
printf("The Time of Birth is : %d %d %d \n",stamp.time.hour,stamp.time.minutes,stamp.time.seconds);
printf("New STAMP \n");
printf("The Date of Birth is : %d %d %d\n",stamp1.date.day,stamp1.date.month,stamp1.date.year);
printf("The Time of Birth is : %d %d %d\n",stamp1.time.hour,stamp1.time.minutes,stamp1.time.seconds);



}

