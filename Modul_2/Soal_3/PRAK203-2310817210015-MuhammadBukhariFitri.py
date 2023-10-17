userInput = input().split()

# Test Case 1
if len(userInput) == 6:
    a, b, i, j, x, y = map(float, userInput)

# Test Case 2
elif len(userInput) == 2:
    a, b = map(float, userInput)
    i, j = map(float, input().split())
    x, y = map(float, input().split())

hasil = (a-b) * i / j - (x + y)
print(f"{hasil:.3f}")
