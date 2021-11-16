# Ekspresi

## Operasi Numerik

- Operasi pada bilangan yang dapat dilakukan adalah 

    | Oprator | Keterangan             |
    |:------: |:------                 |
    | __`+`__ | Penjumlahan            |
    | __`-`__ | Pengurangan            |
    | __`/`__ | Pembagian              |
    | __`%`__ | Modulo atau sisa bagi  |


- Jika kedua operand merupakan bilangan bulat, hasil pengoperasian selalu bilangan bulat juga.
- Ketika setidaknya salah satu dari operand ada yang bertipe data _floating point_, pengoperasian akan selalu menghasilkan _floating point_.
- Contoh program:
    - [kuadrat.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/kuadrat.cpp)

## Prioritas Pengerjaan

- Seperti pada ilmu matematika, ada juga prioritas pengerjaan pada ekspresi numerik. Tabel berikut menunjukkan prioritasnya:

    | Prioritas | Operasi      |
    |:------:   |:------       |
    | 1         |`*`,`/`,`mod` |
    | 2         |`+`,`-`       |


- Jika ada beberapa operasi bersebelahan yang memiliki prioritas sama, operasi yang terletak di posisi lebih kiri akan dikerjakan lebih dahulu.
- Contoh program:
    - [numerik.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/numerik.cpp)

## Operasi Unary

- Pada C++, terdapat pula operasi unary numerik.
- Operasi unary berarti hanya melibatkan satu operand.
- Misalnya terdapat variabel x, operasi unary tersedia berupa:
- `x++`, artinya tambah x dengan 1.
- `x--`, artinya kurangi x dengan 1.
- Contoh program
    - [unary.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/unary.cpp)

## Fungsi Dasar Numerik

Untuk membantu perhitungan, C++ menyediakan fungsi-fungsi
pada STL ”`cmath`”.
- `round`: membulatkan suatu bilangan pecahan bilangan bulat
terdekat (hasilnya tetap bertipe _floating point_). Contoh:
`round(1.2)` akan menghasilkan `1.0`, sementara `round(1.87)`
akan menghasilkan `2.0`.
- `sqrt`: mendapatkan akar kuadrat dari suatu bilangan.
Contoh: `sqrt(9)` akan menghasilkan `3.00`, dan `sqrt(3)` akan
menghasilkan `1.73205....`
- Contoh program
    - [cmath.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/cmath.cpp)

## Operasi Relasional

- Operasi relasional, yaitu:

    | Oprator  | Keterangan                   |
    |:------:  |:------                       |
    | __`>`__  | lebih dari                   |
    | __`==`__ | sama dengan                  |
    | __`<=`__ | kurang dari atau sama dengan |
    | __`>=`__ | lebih dari atau sama dengan  |
    | __`!=`__ | tidak sama dengan            |


- Operasi relasional harus melibatkan dua operand (*ingat bahwa operand bisa jadi berupa ekspresi lagi*), dan menghasilkan sebuah nilai kebenaran.
- Nilai kebenaran dinyatakan dengan tipe data `boolean`.
- Contoh program
    - [relasional.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/relasional.cpp)
    - [relasional2.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/relasional2.cpp)


## Operasi Boolean

- Operasi boolean merupakan operasi yang hanya melibatkan nilai-nilai kebenaran. Terdiri atas:

    | Operator           | Nama	 | Penjelasan                                        |
    |:------:            |:------: |:------                                          |
    | `and` *atau* `&&`  | **AND** | Menghasilkan true jika kedua operand true       |
    | `or` *atau* `\|\|` | **OR**  | Menghasilkan true jika salah satu operand true  |
    | `!`	             | **NOT** | Menghasilkan true jika operand false            |
    | `^`	             | **XOR** | Menghasilkan true jika operand nilainya berbeda |


- Operasi-operasi ini sesuai dengan sebuah cabang ilmu matematika yang bernama **aljabar boolean**.
- Operasi boolean yang lainnya merupakan operasi binary, yang artinya melibatkan dua operand.


- Tabel berikut menunjukkan efek dari penggunaan operator-operator tersebut:

    | a       | b       | `a && b`| `a \|\| b` | `a^b`   |
    |:-----:  |:-----:  |:-----:  |:-----:     |:-----:  |
    | `TRUE`  | `TRUE`  | `TRUE`  | `TRUE`     | `FALSE` |
    | `TRUE`  | `FALSE` | `FALSE` | `TRUE`     | `TRUE`  |
    | `FALSE` | `TRUE`  | `FALSE` | `TRUE`     | `TRUE`  |
    | `FALSE` | `FALSE` | `FALSE` | `FALSE`    | `FALSE` |

- Operasi not merupakan operasi unary. Gunanya untuk membalik nilai kebenaran.
- Tabel berikut menunjukkan efek dari penggunaan not, yang cara penulisannya dengan tanda seru __`!`__ sebelum variabelnya.

    | a      | `!a`    |
    |:-----: |:------: |
    | `TRUE` | `FALSE` |
    | `FALSE`| `TRUE`  |

- Contoh program
    - [relasional3.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/relasional3.cpp)


# Input dan Output

## Fungsi scanf

- Fungsi **scanf** berguna untuk membaca masukan, dan nilainya dapat di-assign ke dalam variabel.
- Fungsi ini disediakan oleh STL `cstdio`.
- Cara kerja scanf: pada berkas masukan, cari token yang dapat dibaca berikutnya, lalu baca ambil nilainya.
- Yang dimaksud token adalah serangkaian karakter non-spasi, misalnya huruf atau angka.
- Contoh program [kuadrat2.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/kuadrat2.cpp), token yang dimaksud adalah bilangan yang akan menjadi nilai variabel x.
- Sama dengan **printf**, diperlukan simbol sesuai tipe data yang bersangkutan.
- Perbedaan paling mendasar adalah diperlukannya karakter '__`&`__' pada variabel yang hendak diisi.
- Hal ini juga berlaku apabila Anda hendak membaca beberapa variabel pada satu baris masukan.

## Membaca Beberapa Variabel

- Jalankan program [kuadrat3.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/kuadrat3.cpp) lalu masukkan "`1 3 -2 2`", lalu tekan enter.
- Meskipun kita memberikan pola ”`%d %d %d %d`”, tidak masalah apabila masukan yang hendak Anda baca ada di baris yang berbeda.
- Misalnya Anda dapat ketikkan "`1 3`", enter, "`-2 2`", lalu enter.
- Masukan tetap akan dibaca sesuai urutan yang diberikan.
- Alasannya adalah scanf membaca bilangan dengan cara
mencari token yang ada selanjutnya, tanpa peduli baris baru
atau spasi.

## Membaca Karakter

- Terkecuali pada tipe data karakter, scanf __tidak__ membaca token selanjutnya.
- Scanf akan membaca 1 karakter selanjutnya, baik itu spasi, angka, ataupun baris baru.
- Jalankan contoh program [karakter.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/karakter.cpp).
- Berikan masukan berupa ”`p q`”, enter, `5`, enter, lalu ”`r`”.
    ```shell
    p q
    5
    r
    ```
- Berikut adalah keluaran yang dihasilkan
    ```shell
    c1:'p' c2:'q' bil:5 c3='
    '
    ```
- Perhatikan bahwa `c3` memiliki nilai berupa karakter enter, padahal yang kita harapkan adalah karakter `'r'`.
- Hal ini disebabkan karena karakter yang selanjutnya dimasukkan sesudah membaca `bil` adalah enter, yang kemudian dibaca untuk `c3`.
- Cara yang tepat adalah dengan menambahkan ”`\n`” secara tertib di akhir pembacaan baris contohnya lihat program [karakter2.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/karakter2.cpp)

## Membaca String

- Cara yang disarankan adalah membacanya dalam bentuk string, sekalipun yang akan dibaca dipastikan hanya memiliki 1 karakter.
- Seperti `printf`, `scanf` tidak dapat berinteraksi secara langsung dengan **STL** string.
- Scanf perlu membaca string dalam bentuk `cstring`, kemudian mengubahnya menjadi `string`.
- Contohnya program [karakter3.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/karakter3.cpp)
- Variabel `buff` merupakan *array of char* dengan maksimal 1001 karakter (angka ini dapat Anda ubah sesuai kebutuhan).
- *Array of char* inilah yang merupakan `cstring`.
- Kita dapat membaca `cstring` dengan `scanf`, lalu mengubahnya ke bentuk `string` dengan melakukan assignment ke variabel `string` atau `string s = buff`.
- Khusus untuk pembacaan `cstring`, tanda ’`&`’ tidak digunakan.
- Program tersebut akan membaca 1 token yang diberikan.
- Coba jalankan program tersebut, lalu masukkan ”`abcd`”, lalu
enter.

## Membaca Sebaris String

- Bagaimana jika kita hendak membaca sebuah baris string, yang mungkin mengandung spasi?
- Caranya adalah menggunakan simbol khusus ”`%[ b \n]`”.
- Contoh program
    - [karakter4.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/karakter4.cpp)

# Mencetak Keluaran

- Seperti masukan, keluaran juga bisa disajikan dalam bentuk langsung ke standard output atau ke file.
- Pada C++, fungsi untuk mencetak keluaran yang umum adalah `printf`.
- Coba ketikkan dan jalankan program [jumlah.cpp](https://github.com/fajar-ab/Program-Courses-TXL/blob/lessons/03%20-%20ekspresi%20dan%20masukan%20keluaran/jumlah.cpp)
- Pada program tersebut, dicetak terlebih dahulu apa yang perlu dimasukkan. Tentu saja, program seperti ini sangat ramah terhadap pengguna (__*user-friendly*__).