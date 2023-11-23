def reverse(angka):
    # Lengkapi Function ini
    reverse = 0;
    while(angka != 0) :
        sisa = angka % 10;
        reverse = reverse * 10 + sisa;
        angka //= 10;
    return reverse;

input = input().split()
A, B = map(int, input)
A = reverse(A);
B = reverse(B);
C = A+B;
print(f"{reverse(C)}");