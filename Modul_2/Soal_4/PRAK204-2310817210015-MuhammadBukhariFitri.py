userInput = input().split()

# Test Case 1
if len(userInput) == 1:
    jariJari = float(userInput[0])
    tinggi = float(input())

# Test Case 2
elif len(userInput) == 2:
    jariJari, tinggi = map(float, userInput)

phi = 22 / 7
volume = phi * jariJari * jariJari * tinggi
luas = 2 * phi * jariJari * (jariJari + tinggi)
keliling = 2 * phi * jariJari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
