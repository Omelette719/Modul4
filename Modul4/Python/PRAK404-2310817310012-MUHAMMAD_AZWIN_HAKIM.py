while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator MUHAMMADAZWINHAKIM\n\n")
        break
    elif 1 <= pilihan <= 4:
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))

        hasil = 0
        operasi = ""

        if pilihan == 1:
            hasil = a + b
            operasi = "Penjumlahan"
        elif pilihan == 2:
            hasil = a - b
            operasi = "Pengurangan"
        elif pilihan == 3:
            hasil = a * b
            operasi = "Perkalian"
        elif pilihan == 4:
            hasil = a / b
            operasi = "Pembagian"

        print(f"Hasil {operasi} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}\n")
    else:
        print("Input anda salah, silahkan coba lagi\n\n")
