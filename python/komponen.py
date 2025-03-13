from abc import ABC, abstractmethod


class Komponen(ABC):
    def __init__(self, merk="Unknown", nama="Unknown"):
        self.merk = merk
        self.nama = nama

    @abstractmethod
    def tampilkan_info(self):
        pass
