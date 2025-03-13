#pragma once
#include "Komponen.h"

class Cpu : public Komponen
{
private:
    int jumlahCore;
    float kecepatanGHz;

public:
    Cpu() : Komponen(), jumlahCore(0), kecepatanGHz(0.0) {}
    Cpu(int core, float ghz, string merk, string nama) : Komponen(merk, nama), jumlahCore(core), kecepatanGHz(ghz) {}

    void tampilkanInfo() override
    {
        cout << "CPU: " << merk << " " << nama << " (" << jumlahCore << " Core, " << kecepatanGHz << " GHz)" << endl;
    }
};
