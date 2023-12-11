baris, kolom = map(int, (input().split()))

matriks = []
a = 0
isi = list(map(int, input().split()))
for i in range (baris):
    matriks.append(isi[a : a + kolom])
    a += kolom
for baris in (matriks):
    for isi in (baris):
        print(f"{isi}", end=" ")
    print("")