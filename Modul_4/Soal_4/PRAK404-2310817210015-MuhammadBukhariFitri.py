while(1) :
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan : ", end="");
    pilihan = float(input());
    if (pilihan == 1 or pilihan == 2 or pilihan == 3 or pilihan == 4) :
        print("Masukkan Nilai Pertama : ", end="");
        nilaiPertama = float(input());
        print("Masukkan Nilai Kedua : ", end="");
        nilaiKedua = float(input());

        if(pilihan == 1) :
            hasil = nilaiPertama + nilaiKedua;
            print(f"Hasil penjumlahan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}\n");
        
        elif(pilihan == 2) :
            hasil = nilaiPertama - nilaiKedua;
            print(f"Hasil pengurangan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}\n");
        
        elif(pilihan == 3) :
            hasil = nilaiPertama * nilaiKedua;
            print(f"Hasil perkalian antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}\n");
        
        elif(pilihan == 4) :
            hasil = nilaiPertama / nilaiKedua;
            print(f"Hasil pembagian antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}\n");
        

    elif(pilihan == 5) :
        print("Terimakasih, telah menggunakan kalkulator Muhammad Bukhari Fitri");
        break;

    else :
        print("Input anda salah, silahkan coba lagi\n");