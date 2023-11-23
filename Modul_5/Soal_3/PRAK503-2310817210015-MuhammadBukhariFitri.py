def maksimal(a, b):
    # Lengkapi Function ini
    if(a < b) :
        max = b
    else :
        max = a
    return max

def minimal(a, b):
    # Lengkapi Function ini
    if(a > b) :
        min = b
    else :
        min = a
    return min

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
while(batas < bilangan):
    nilai = map(int, input().split())
    for i in nilai :
        maks = maksimal(maks, i)
        minim = minimal(minim, i)
        batas += 1
print(f"{maks} {minim}") 