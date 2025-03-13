from komponen import Komponen


class Ram(Komponen):
    def __init__(self, kapasitas=0, ddr="Unknown", merk="Unknown", nama="Unknown"):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas
        self.ddr = ddr

    def tampilkan_info(self):
        print(
            f"RAM: {self.merk} {self.nama} ({self.kapasitas_gb} GB, {self.ddr})")
