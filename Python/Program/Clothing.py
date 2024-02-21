#    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
#    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

# Import file class
from Product import Product

# Deklarasi kelas Clothing inheritance dengan kelas Product
# kelas Product <- kelas Clothing
class Clothing(Product):
    # Konstruktor 

    # Konstruktor default 
    def __init__(self):
        self.size = ""      # Inisialisasi Ukuran pakaian dengan string kosong
        self.material = ""  # Inisialisasi Bahan pakaian dengan string kosong
        self.gender = ""    # Inisialisasi Jenis kelamin yang sesuai dengan pakaian dengan string kosong

    # Getter & Setter 

    # Mengatur nilai Ukuran pakaian
    def setSize(self, size):
        self.size = size
    # Mendapatkan nilai Ukuran pakaian
    def getSize(self):
        return self.size

    # Mengatur nilai Bahan pakaian
    def setMaterial(self, material):
        self.material = material
    # Mendapatkan nilai Bahan pakaian
    def getMaterial(self):
        return self.material

    # Mengatur nilai Jenis kelamin yang sesuai dengan pakaian
    def setGender(self, gender):
        self.gender = gender
    # Mendapatkan nilai Jenis kelamin yang sesuai dengan pakaian
    def getGender(self):
        return self.gender
    
    # Tidak ada Destruktor