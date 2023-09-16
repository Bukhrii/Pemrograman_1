tagar = "#                            #"
namaLengkap = "Muhammad Bukhari Fitri"
nim = "2310817210015"
barisAwal = 1
jmlBaris = 6

for i in range(1, jmlBaris+1):
    if i == jmlBaris/2:
        print("#  ", namaLengkap, "  #")
    elif i == jmlBaris/2+1:
        print("#      ", nim, "       #")
    elif i == barisAwal or i == jmlBaris:
        print("##############################")
    else:
        print(tagar)
