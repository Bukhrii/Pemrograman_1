ruangan = int(input())

hasil = []
isi = list(map(int, input().split()))
for i in range (ruangan):
    hasil.append(isi[i] * (i+1))
for i in (hasil):
    print(i, end = " ")