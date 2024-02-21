#    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
#    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

# Import file class
from Shirt import Shirt
from Tabel import Tabel

# Inisialisasi list
listShirt = []

# Input banyaknya data baju
n = int(input("Tambah baju yang ingin ditampilkan: "))
print()  

# Perulangan mengisi objek
for i in range(n):
    # Instansiasi objek baju
    baju = Shirt()

    # Menampilkan tabel untuk memasukkan data
    print("============================")
    print(f"| Masukkan data baju ke: {i+1} |")
    print("============================")
    # Meminta user untuk memasukkan data baju
    idProduct = input("- ID Product  : ")   # Meminta user untuk memasukkan ID baju
    name = input("- Name        : ")        # Meminta user untuk memasukkan Nama baju
    brand = input("- Brand       : ")       # Meminta user untuk memasukkan Merk baju
    price = input("- Price       : ")       # Meminta user untuk memasukkan Harga baju
    size = input("- Size        : ")        # Meminta user untuk memasukkan Ukuran baju
    material = input("- Material    : ")    # Meminta user untuk memasukkan Bahan baju
    gender = input("- Gender      : ")      # Meminta user untuk memasukkan Jenis kelamin sesuai baju
    color = input("- Color       : ")       # Meminta user untuk memasukkan Warna baju
    sleeve_type = input("- Sleeve Type : ") # Meminta user untuk memasukkan Tipe lengan baju
    print("============================")
    
    # Mengatur nilai atribut inputan data baju ke dalam objek Shirt
    baju.setIdProduct(idProduct)
    baju.setName(name)
    baju.setBrand(brand)
    baju.setPrice(price)
    baju.setSize(size)
    baju.setMaterial(material)
    baju.setGender(gender)
    baju.setColor(color)
    baju.setSleeveType(sleeve_type)

    # Menambahkan nilai objek ke dalam list
    listShirt.append(baju)

# Output
# Jika masukan banyaknya baju yang ditampilkan angka > 0
if n > 0:
    print()
    print("============================")
    print("|         DATA BAJU        |")
    print("============================")
# Jika masukan banyaknya baju yang ditampilkan angka <= 0 
else:
    print("==========================")
    print("|       DATA KOSONG      |")
    print("==========================")
    
# Instansiasi objek tabel
tab = Tabel()
tab.setBaris(len(listShirt) + 1)    # Mengisi nilai baris tabel
tab.setKolom(9)                     # Mengisi nilai kolom tabel

# Deklarasi array dua dimensi untuk menyimpan list data Shirt
# Isi array pertama dengan judul pada setiap kolom
arrStr = [["ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type"]]

# Melakukan pengisian pada setiap elemen array dari list Shirt
for baju in listShirt:
    arrStr.append([baju.getIdProduct(), baju.getName(), baju.getBrand(), baju.getPrice(), baju.getSize(), baju.getMaterial(), baju.getGender(), baju.getColor(), baju.getSleeveType()])

# Menampilkan data anggota DPR
tab.buatTabel(arrStr, tab.getBaris(), tab.getKolom())
print()