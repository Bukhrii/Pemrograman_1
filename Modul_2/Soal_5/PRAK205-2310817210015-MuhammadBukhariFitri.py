import math as m

userInput = input().split()

# Test Case 1
if len(userInput) == 1:
    a = float(userInput[0])
    b = float(input())

# Test Case 2
elif len(userInput) == 2:
    a, b = map(float, userInput)

tinggi = a
sisiMiring = b
alas = m.sqrt((sisiMiring * sisiMiring) - (tinggi * tinggi))
keliling = alas + tinggi + sisiMiring
luas = (alas * tinggi) / 2

print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm^2" % luas)
