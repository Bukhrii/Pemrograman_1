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

print("Volume = %.2f" % (volume))
print("Luas = %.2f" % (luas))
print("Keliling = %.2f" % (keliling))
