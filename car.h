/* car.h */

#ifndef CAR_H
# define CAR_H

typedef struct Car_s *Car;

struct Car_s *new_car();
int car_getyear(struct Car_s *);
void car_setyear(struct Car_s *, int);

#endif