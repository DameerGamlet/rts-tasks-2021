#include <TaskManagerIO.h>

#define led3 3
#define led5 5
#define led6 6
#define led9 9
#define led10 10
#define led11 11

unsigned const long  int3 = 100000, int5 = 10000, int6 = 40000, int9 = 60000, int10 = 80000, int11 = 100000;
unsigned int ledS3 = LOW, ledS5 = LOW, ledS6 = LOW, ledS9 = LOW, ledS10 = LOW, ledS11 = LOW;

void setup() {
  pinMode(led3,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  
  taskid_t t3 = taskManager.scheduleFixedRate(int3, [] {
    if(ledS3==LOW){ledS3=HIGH;} else{ledS3=LOW;}    
    digitalWrite(led3,ledS3);
  }, TIME_MICROS);
  
  taskid_t t5 = taskManager.scheduleFixedRate(int5, [] {
    if(ledS5==LOW){ledS5=HIGH;} else{ledS5=LOW;}    
    digitalWrite(led5,ledS5);
  }, TIME_MICROS);
  
  taskid_t t6 = taskManager.scheduleFixedRate(int6, [] {
    if(ledS6==LOW){ledS6=HIGH;} else{ledS6=LOW;}    
    digitalWrite(led6,ledS6);
  }, TIME_MICROS);
  
  taskid_t t9 = taskManager.scheduleFixedRate(int9, [] {
    if(ledS9==LOW){ledS9=HIGH;}else{ledS9=LOW;}    
    digitalWrite(led9,ledS9);
  }, TIME_MICROS);
  
  taskid_t t10 = taskManager.scheduleFixedRate(int10, [] {
    if(ledS10==LOW){ledS10=HIGH;} else{ledS10=LOW;}    
    digitalWrite(led10,ledS10);
  }, TIME_MICROS);
  
  taskid_t t11 = taskManager.scheduleFixedRate(int11, [] {
    if(ledS11==LOW){ledS11=HIGH;} else{ledS11=LOW;}    
    digitalWrite(led11,ledS11);
  }, TIME_MICROS);
}

void loop() {
   taskManager.runLoop();
}
