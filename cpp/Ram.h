#pragma once
#include "Komponen.h"

class Ram : public Komponen
{
private:
    int kapasitasGB;
    string ddr;

public:
    Ram() : Komponen(), kapasitasGB(0), ddr("Unknown") {}
    Ram(int kapasitas, string ddr, string merk, string nama) : Komponen(merk, nama), kapasitasGB(kapasitas), ddr(ddr) {}

    void tampilkanInfo() override
    {
        cout << "RAM: " << merk << " " << nama << " (" << kapasitasGB << " GB, " << ddr << ")" << endl;
    }
};
