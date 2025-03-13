#pragma once
#include <iostream>
#include <string>

using namespace std;

// Kelas Abstrak Komponen
class Komponen
{
protected:
    string merk;
    string nama;

public:
    Komponen() : merk("Unknown"), nama("Unknown") {}
    Komponen(string merk, string nama) : merk(merk), nama(nama) {}

    virtual void tampilkanInfo() = 0;

    virtual ~Komponen() {}
};
