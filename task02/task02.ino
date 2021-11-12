#include <TaskManagerIO.h>

#define led3 3
#define led5 5
#define led6 6
#define led9 9
#define led10 10
#define led11 11

// инициализация переменных
// интервалы
unsigned const long  int3 = 100000, int5 = 10000, int6 = 40000, int9 = 60000, int10 = 80000, int11 = 100000;
// состояния
unsigned int ledS3 = LOW, ledS5 = LOW, ledS6 = LOW, ledS9 = LOW, ledS10 = LOW, ledS11 = LOW;

// инициализация программы
void setup() {
pinMode(led3, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);

// Создаём задачи с заданным интервалом
taskManager.scheduleFixedRate(int3, [] { led(ledS3, led3);});
taskManager.scheduleFixedRate(int5, [] { led(ledS5, led5);});
taskManager.scheduleFixedRate(int6, [] { led(ledS6, led6);});
taskManager.scheduleFixedRate(int9, [] { led(ledS9, led9);});
taskManager.scheduleFixedRate(int10, [] { led(ledS10, led10);});
taskManager.scheduleFixedRate(int11, [] { led(ledS11, led11);});
}
// метод цикла
void loop() { 
    taskManager.runLoop();
}

// метод состояний
void led(int ledState, int port){
    if (ledState == LOW) {
        ledState = HIGH;
    } else {
        ledState = LOW;
    }
    digitalWrite(port, ledState);
}
