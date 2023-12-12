n1, n2 = map(int, input().split())
matriks1 = []
matriks2 = []
if (n1 == n2):
    angka1 = list(map(int, input().split()))
    angka2 = list(map(int, input().split()))

    for i in range (n1):
        matriks1.append(angka1[i])
    for i in range (n2):
        matriks2.append(angka2[i])
    for i in range (n1):
        print(f"{matriks1[i] * matriks2[i]}", end = " ")
        

else:
    print("Jumlah tidak sama")