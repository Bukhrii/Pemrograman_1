angka = int(input())

if angka == 0:
    print("Nol")
elif angka < 10:
    print("Satuan")
elif angka < 20:
    print("Belasan")
elif angka < 100:
    print("Puluhan")
elif angka >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
