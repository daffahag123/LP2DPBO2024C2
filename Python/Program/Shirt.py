#    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
#    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

# Import file class
from Clothing import Clothing

# Deklarasi kelas Shirt inheritance dengan kelas Clothing
# kelas Product <- kelas Clothing <- kelas Shirt
class Shirt(Clothing):
    # Konstruktor 

    # Konstruktor default 
    def __init__(self):
        self.color = ""         # Inisialisasi Warna baju dengan string kosong
        self.sleeve_type = ""   # Inisialisasi Tipe lengan baju dengan string kosong

    # Getter & Setter
    
    # Mengatur nilai Warna baju
    def setColor(self, color):
        self.color = color
    # Mendapatkan nilai Warna baju
    def getColor(self):
        return self.color

    # Mengatur nilai Tipe lengan baju
    def setSleeveType(self, sleeve_type):
        self.sleeve_type = sleeve_type
    # Mendapatkan nilai Tipe lengan baju
    def getSleeveType(self):
        return self.sleeve_type
    
    # Tidak ada Destruktor