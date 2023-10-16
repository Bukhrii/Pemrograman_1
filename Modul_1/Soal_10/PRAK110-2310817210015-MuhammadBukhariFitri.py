import math
alas = 5;
tinggi = 12;
sisiMiring = round(math.sqrt((alas * alas) + (tinggi * tinggi)))
keliling = round(alas + tinggi + sisiMiring) 
luas = (alas * tinggi) // 2;

print("Diketahui :");
print(f"Alas = {alas} cm");
print(f"Tinggi = {tinggi} cm\n");
print("Jawab :");
print(f"Sisi A = {tinggi} cm");
print(f"Sisi B = {sisiMiring} cm");
print(f"Sisi C = {alas} cm");
print(f"Keliling = {keliling} cm");
print(f"Luas = {luas} cm");