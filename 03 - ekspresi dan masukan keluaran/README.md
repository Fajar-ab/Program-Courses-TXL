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

## Prioritas Pengerjaan

- Seperti pada ilmu matematika, ada juga prioritas pengerjaan pada ekspresi numerik. Tabel berikut menunjukkan prioritasnya:

    | Prioritas | Operasi      |
    |:------:   |:------       |
    | 1         |`*`,`/`,`mod` |
    | 2         |`+`,`-`       |


- Jika ada beberapa operasi bersebelahan yang memiliki prioritas sama, operasi yang terletak di posisi lebih kiri akan dikerjakan lebih dahulu.

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