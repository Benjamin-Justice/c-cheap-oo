#include <stdio.h>
#include "car.h"

int main( int argc, const char* argv[] )
{
    Car car1 = new_car();
    car_setyear(car1, 1970);
    printf("My car was build in: %i", car_getyear(car1));
}
