#    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
#    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

# Deklarasi kelas Product
class Product:
    # Konstruktor 

    # Konstruktor default 
    def __init__(self):
        self.idProduct = ""   # Inisialisasi ID produk dengan string kosong
        self.name = ""        # Inisialisasi Nama produk dengan string kosong
        self.brand = ""       # Inisialisasi Merk produk dengan string kosong
        self.price = ""       # Inisialisasi Harga produk dengan string kosong
        
    # Getter & Setter 

    # Mengatur nilai ID produk
    def setIdProduct(self, idProduct):
        self.idProduct = idProduct
    # Mendapatkan nilai ID produk
    def getIdProduct(self):
        return self.idProduct

    # Mengatur nilai Nama produk
    def setName(self, name):
        self.name = name
    # Mendapatkan nilai Nama produk
    def getName(self):
        return self.name

    # Mengatur nilai Merk produk
    def setBrand(self, brand):
        self.brand = brand
    # Mendapatkan nilai Merk produk
    def getBrand(self):
        return self.brand

    # Mengatur nilai Harga produk
    def setPrice(self, price):
        self.price = price
    # Mendapatkan nilai Harga produk
    def getPrice(self):
        return self.price
    
    # Tidak ada Destruktor