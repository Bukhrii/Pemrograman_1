angka1 = input().split()

if len(angka1) == 2:
    angka1, angka2 = map(int, angka1)

else:
    angka1 = int(angka1[0])
    angka2 = int(input())

if (angka1 > angka2):
    print(f"{angka2} {angka1}")
else:
    print(f"{angka1} {angka2}")
