#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "car.h"
#define NUMBER_OF_CARS 6

// Struct
struct CarImplementation
{
  CarType type;
  Color color;
  float ill_level;
  float acceleration_rate;
  int speed;
  bool isRented;
};

static struct CarImplementation car1 = { AIXAM, RED, 16.0, 0.0, 0, false };
static struct CarImplementation car2 = { FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, false };
static struct CarImplementation car3 = { FIAT_MULTIPLA, RED, 65.0, 0.0, 0, false };
static struct CarImplementation car4 = { FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, false };
static struct CarImplementation car5 = { JEEP, SILVER, 65.0, 0.0, 0, false };
static struct CarImplementation car6 = { JEEP, BLACK, 65.0, 0.0, 0, false };

struct CarImplementation cars[6] = { car1, car2, car3, car4, car5, car6 };

// Funktions
Car get_car(CarType car_Type)
{
  for(int i = 0; i < NUMBER_OF_CARS; i++)
  {
    if(car_Type == cars[i].type && cars[i].isRented == false)
    {
      cars[i].isRented = true;
      return &cars[i];
    }
  }
  return 0;
}
CarType get_type(Car car)
{
  return car->type;
}
Color get_color(Car car)
{
  return car->color;
}
float get_fill_level(Car car)
{
  return car->ill_level;
}
float get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}
int get_speed(Car car)
{
  return car->speed;
}
void init()
{
  for(int i = 0; i < NUMBER_OF_CARS; i++)
  {
    cars[i].acceleration_rate = 0;
    cars[i].isRented = false;
    cars[i].speed = 0;
  }
}
void set_acceleration_rate(Car car, int number)
{
  car->acceleration_rate = number;
}
void accelerate(Car car)
{

}
