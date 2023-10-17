import math as m

userInput = input().split()

# Test Case 1
if len(userInput) == 2:
    a, b = map(int, userInput)

# Test Case 2
elif len(userInput) == 1:
    a = int(userInput[0])
    b = int(input())

tinggi = a
sisiMiring = b
alas = m.sqrt((sisiMiring * sisiMiring) - (tinggi * tinggi))
keliling = alas + tinggi + sisiMiring
luas = (alas * tinggi) / 2

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
