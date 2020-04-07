#include "mbed.h" 
Ticker time_up; //define a Ticker
DigitalOut blueLED(LED3);
void blink(){ 
    // the function that Ticker will call 
    blueLED=!blueLED;}

int main(){
    time_up.attach(&blink,0.5);//initialize the ticker 
    while(1); //sit in a loop doing nothing, waiting for Ticker interrupt 
}