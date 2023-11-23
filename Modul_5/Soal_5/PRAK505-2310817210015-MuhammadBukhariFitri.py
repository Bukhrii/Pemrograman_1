def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020;
    #Lengkapi Function ini
    print(f"Perkenalkan nama saya : {nama}");
    print(f"Umur Saya : {tahun_sekarang - tahunLahir}");
    print(f"Saya Adalah Angkatan : {tahun_sekarang}");
    print(f"Asal Saya Dari : {asal}");

tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal);