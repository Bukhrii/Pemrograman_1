kode = input()
pesan = input()
tagar = 0
bintang = 0
if (len(kode) != len(pesan)):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range (len(kode)):
        if(kode[i] == ' ' and pesan[i] == ' '):
            print(" ", end = "")
        elif(kode[i] != pesan[i]):
            print("#", end = "");
            tagar+=1
        elif(kode[i] == pesan[i]):
            print("*", end = "")
            bintang+=1
    print(f"\n* = {bintang}");
    print(f"# = {tagar}");
    if(bintang >= tagar):
        print("Pesan Asli");

    else:
        print("Pesan Palsu");
