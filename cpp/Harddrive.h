#pragma once
#include "Komponen.h"

class Harddrive : public Komponen
{
private:
    int kapasitasGB;
    string tipeDrive;

public:
    Harddrive() : Komponen(), kapasitasGB(0), tipeDrive("Unknown") {}
    Harddrive(int kapasitas, string tipe, string merk, string nama) : Komponen(merk, nama), kapasitasGB(kapasitas), tipeDrive(tipe) {}

    void tampilkanInfo() override
    {
        cout << "Harddrive: " << tipeDrive << " " << merk << " " << nama << " (" << kapasitasGB << " GB)" << endl;
    }
};
