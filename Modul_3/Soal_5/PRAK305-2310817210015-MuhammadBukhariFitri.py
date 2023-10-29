angka = int(input())

if angka < 86400:
    jam = angka // 60 // 60
    detik = angka % 60
    menit = ((angka - detik) // 60) - jam * 60
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")


else:
    hari = angka // 60 // 60 // 24
    detik = angka % 60
    jam = angka // 60 // 60 - hari * 24
    menit = ((angka - detik) // 60) - (jam + hari * 24) * 60
    print(f"{hari:d} hari {jam:02d}:{menit:02d}:{detik:02d}")
