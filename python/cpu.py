from komponen import Komponen


class Cpu(Komponen):
    def __init__(self, core=0, ghz=0.0, merk="Unknown", nama="Unknown"):
        super().__init__(merk, nama)
        self.jumlah_core = core
        self.kecepatan_ghz = ghz

    def tampilkan_info(self):
        print(
            f"CPU: {self.merk} {self.nama} ({self.jumlah_core} Core, {self.kecepatan_ghz} GHz)")
