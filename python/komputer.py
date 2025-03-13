from cpu import Cpu
from ram import Ram
from harddrive import Harddrive


class Komputer:
    def __init__(self, nama="Unknown", cpu=None, ram_list=None, harddrive=None):
        self.nama = nama
        self.cpu = cpu if cpu else Cpu()
        self.ram_list = ram_list if ram_list else []
        self.harddrive = harddrive if harddrive else Harddrive()

    def tambah_ram(self, ram):
        self.ram_list.append(ram)

    def tampilkan_info(self):
        print(f"Komputer: {self.nama}")
        self.cpu.tampilkan_info()
        for ram in self.ram_list:
            ram.tampilkan_info()
        self.harddrive.tampilkan_info()
