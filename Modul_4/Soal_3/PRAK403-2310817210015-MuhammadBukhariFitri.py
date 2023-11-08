input = input().split()

angka1, angka2 = map(int, input)

print(f"{angka1} {angka2}", end="")
if(angka1 < angka2) :
    for i in range(1, angka2 - angka1 + 1) :
        print(f" - {angka1 + i} {angka2 - i}", end="");

else :
    for i in range(1, angka1 - angka2 + 1) :
        print(f" - {angka1 - i} {angka2 + i}", end="")