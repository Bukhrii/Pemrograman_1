input = input().split()

angka1, angka2 = map(int, input)

hasilPerkalian = 0
hasilLooping = 0
for i in range (1, angka1 + 1) :
    perkalian = i * angka2
    hasilPerkalian += perkalian
    if(i > 1) :
        for i in range (i, 1, -1) :
            print(f"({i} * {angka2}) + ", end="")
        print(f"({1} * {angka2})", end="")
        print(f" = {hasilPerkalian}")

    elif(i == 1) :
        print(f"({i} * {angka2})", end="")
        print(f" = {hasilPerkalian}")

    hasilLooping += hasilPerkalian
print(f"{hasilLooping}")