#Buatlah Function Disini
def MaxBilangan(angka1, angka2, angka3, angka4) :
    max = angka1;

    if (angka2 > max) :
        max = angka2;
    
    if (angka3 > max) :
        max = angka3;
    
    if (angka4 > max) :
        max = angka4;
    
    return max;

input = input().split()
a, b, c, d = map(int, input)

hasil = MaxBilangan(a, b, c, d);
print(f"{hasil}")