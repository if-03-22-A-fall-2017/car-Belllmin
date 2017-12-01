/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

// Enums
enum Color { RED, GREEN, BLUE, ORANGE, SILVER, BLACK };
enum CarType { AIXAM, FIAT_MULTIPLA, JEEP };

// Struct-typedef-Car
typedef struct CarImplementation *Car;

// Funktions
Car get_car(CarType);
CarType get_type(Car);
Color get_color(Car);
float get_fill_level(Car);
float get_acceleration_rate(Car);
int get_speed(Car);
void init();
void set_acceleration_rate(Car, int);
void accelerate(Car);

#endif
