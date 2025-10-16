#include <stdio.h>
#include <stdint.h>
#include <string.h>


struct coord {
        uint8_t x, y;
    };

void info(struct coord pos) {
    printf("Targeting %d %d position.\n", pos.x, pos.y);
    }

int main() {


    // struct Car{
    //     int year;
    //     char brand[30];
    //     char model[30];
    // };

    // struct Car myCar;
    // strcpy(myCar.brand,"Rollce-Royce");
    // strcpy(myCar.model,"Ghost");
    // myCar.year = 2017;

    // printf("My Car is %s %s, made in %d", myCar.brand, myCar.model, myCar.year);

    // struct Car cars[2] = {
    //     {2011, "Honda", "SMTH"},
    //     {2021, "Hyundai", "Sonata"}
    // };

    // typedef struct{
    //     int year;
    //     char brand[30];
    //     char model[30];
    // } Cars;

    // Cars cars[3] = {
    //     {2019, "Chevrolet", "Captiva"},
    //     {2017, "Mclaren", "S1"},
    //     {2024, "BMW", "X1"}
    // };

    // printf("My Car is %s %s, made in %d", cars[0].brand, cars[0].model, cars[0].year);
    
   
    
    // struct coord cord1;
    // cord1.x = 123;
    // cord1.y = 23;
    // info(cord1);

    int x = 10;
    int *px = &x;

    printf("%d", *px); //derefenring
    
    
    return 0;
}

