#include "sqdqwd.h"

Car::Car(string marka, int maksimalnayaSkorost, int toplivo)
{
    this->marka = marka;
    this->maksimalnayaSkorost = maksimalnayaSkorost;
    this->toplivo = toplivo;
    tekushayaSkorost = 0;
    dvigatel = false;
}

void Car::zavesti()
{
    dvigatel = true;
    cout << "Dvigatel zaveden" << endl;
}

void Car::uvelichitSkorost()
{
    if (!dvigatel)
    {
        cout << "Dvigatel ne zaveden" << endl;
        return;
    }

    if (toplivo <= 0)
    {
        cout << "Net topliva" << endl;
        return;
    }

    if (tekushayaSkorost < maksimalnayaSkorost)
    {
        tekushayaSkorost += 10;
        toplivo -= 1;

        if (tekushayaSkorost > maksimalnayaSkorost)
            tekushayaSkorost = maksimalnayaSkorost;
    }
}

void Car::umenshitSkorost()
{
    if (tekushayaSkorost >= 10)
        tekushayaSkorost -= 10;
    else
        tekushayaSkorost = 0;
}

void Car::zapravit(int kolichestvo)
{
    toplivo += kolichestvo;
}

void Car::print()
{
    cout << "Marka: " << marka << endl;
    cout << "Skorost: " << tekushayaSkorost << endl;
    cout << "Maksimalnaya skorost: " << maksimalnayaSkorost << endl;
    cout << "Toplivo: " << toplivo << endl;
}