#pragma once
#include "Cpu.h"
#include "Ram.h"
#include "Harddrive.h"
#include <vector>

class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;

public:
    Komputer() : nama("Unknown"), cpu(), harddrive() {}
    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive)
        : nama(nama), cpu(cpu), ramList(ramList), harddrive(harddrive) {}

    void tambahRam(Ram ram)
    {
        ramList.push_back(ram);
    }

    void tampilkanInfo()
    {
        cout << "Komputer: " << nama << endl;
        cpu.tampilkanInfo();
        for (Ram &ram : ramList)
        {
            ram.tampilkanInfo();
        }
        harddrive.tampilkanInfo();
    }
};
