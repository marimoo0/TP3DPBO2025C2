from komputer import Komputer
from cpu import Cpu
from ram import Ram
from harddrive import Harddrive

if __name__ == "__main__":
    # Membuat objek CPU, RAM, dan Harddrive
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    hdd = Harddrive(1024, "SSD", "Samsung", "Evo")

    # Membuat objek Komputer dengan beberapa RAM
    komputer = Komputer("PC Abdul", cpu, [ram1, Ram(
        8, "DDR4", "Corsair", "Vengeance")], hdd)

    # Menambah RAM tambahan
    komputer.tambah_ram(Ram(16, "DDR5", "Kingston", "FURY"))

    # Menampilkan informasi komputer
    komputer.tampilkan_info()
