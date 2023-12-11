n = int(input())

matriksA = []
matriksB = []
matriksAXB = []

print("Matriks A")
for i in range (n):
    isi = list(map(int, input().split()))
    matriksA.append(isi)

print("Matriks B")
for i in range (n):
    isi = list(map(int, input().split()))
    matriksB.append(isi)

print("Matriks AXB")
for i in range(n):
   matriksAXB.append([])
   for j in range(n):
       a = 0
       for k in range(n):
          a += matriksA[i][k] * matriksB[k][j]
       matriksAXB[i].append(a)  

for isi in matriksAXB:
    for i in isi:
        print(f"{i} ", end = "")
    print()