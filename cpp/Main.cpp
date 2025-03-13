#include "Komputer.h"

int main()
{
    // Membuat objek CPU, RAM, dan Harddrive
    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive hdd(1024, "SSD", "Samsung", "Evo");

    // Membuat objek Komputer dengan beberapa RAM
    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, hdd);

    // Menambah RAM tambahan
    komputer.tambahRam(Ram(16, "DDR5", "Kingston", "FURY"));

    // Menampilkan informasi komputer
    komputer.tampilkanInfo();

    return 0;
}
