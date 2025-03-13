from komponen import Komponen


class Harddrive(Komponen):
    def __init__(self, kapasitas=0, tipe="Unknown", merk="Unknown", nama="Unknown"):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas
        self.tipe_drive = tipe

    def tampilkan_info(self):
        print(
            f"Harddrive: {self.tipe_drive} {self.merk} {self.nama} ({self.kapasitas_gb} GB)")
