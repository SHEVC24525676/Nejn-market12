#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string marka;
    int tekushayaSkorost;
    int maksimalnayaSkorost;
    int toplivo;
    bool dvigatel;

public:
    Car(string marka, int maksimalnayaSkorost, int toplivo);

    void zavesti();
    void uvelichitSkorost();
    void umenshitSkorost();
    void zapravit(int kolichestvo);
    void print();
};

