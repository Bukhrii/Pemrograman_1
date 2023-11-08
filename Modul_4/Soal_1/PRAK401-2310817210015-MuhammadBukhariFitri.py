jmlMurid = 50

input = input().split()

if len(input) == 2:
    angka = int(input[0])
    simbol = input[1]

for i in range(1, jmlMurid + 1) :
    if(i == angka or i % angka == 0) :
        print(simbol, end=" ");
    else :
        print(i, end=" ");