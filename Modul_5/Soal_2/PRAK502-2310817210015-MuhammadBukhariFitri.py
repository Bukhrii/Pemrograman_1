def hitung(nilai1, nilai2):
    #Lengkapi Function ini
    hasil = nilai1 - nilai2
    if(hasil < 0) :
        hasil *= -1;
    return hasil;
    

def mutlak(angka):
    #Lengkapi Function ini
    if(angka < 0) :
        angka *= -1
    return angka;


input = input().split()
a, c, b, d = map(int, input)

Hasil = hitung(a,b) + hitung(c,d);
print(f"{mutlak(Hasil)}");