#include <stdlib.h>
#include "car.h"

struct Car_s {
    int year;
};

struct Car_s *new_car(){
    return (struct Car_s *)malloc(sizeof(struct Car_s));
}

int car_getyear(struct Car_s *car){
    return car->year;
}

void car_setyear(struct Car_s *car, int value){
    car->year = value;
}