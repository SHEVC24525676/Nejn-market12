#include "sqdqwd.h"

int main()
{
    Car car("BMW", 200, 10);

    car.zavesti();
    car.uvelichitSkorost();
    car.uvelichitSkorost();
    car.uvelichitSkorost();

    car.print();

    car.umenshitSkorost();
    car.zapravit(20);

    car.print();

    return 0;
}