## Tipe Data : Bilangan Bulat

| Nama               | Jangkauan                            | Ukuran |
|:------             | ------:                              |:------:|
| short              | −2<sup>15</sup>.. 2<sup>15</sup> − 1 | 2 byte |
| unsigned short     | 0..2<sup>16</sup> − 1                | 2 byte |
| int                | −2<sup>31</sup>.. 2<sup>31</sup> − 1 | 4 byte |
| unsigned int       | 0.. 2<sup>32</sup> − 1               | 4 byte |
| long long          | −2<sup>63</sup>.. 2<sup>63</sup> − 1 | 8 byte |
| unsigned long long | 0.. 2<sup>64</sup> − 1               | 8 byte |

- C++ menawarkan beberapa tipe data bilangan bulat yang variasinya terletak pada jangkauan nilai yang bisa direpresentasikan dan ukurannya pada memori.
- Dalam memprogram, yang umum digunakan adalah `int` dan long `long`.

## Tipe Data : Bilangan Rill

| Nama   | Jangkauan _(maknitudo)_                                    | Akurasi     | Ukuran |
|:------ | ------:                                                    | ------:     |:------:|
| float  | 1.5 &#215; 10<sup>-45</sup>.. 3.4 &#215; 10<sup>38</sup>   | 7-8 digit   | 4 byte |
| double | 5.0 &#215; 10<sup>-324</sup>.. 1.7 &#215; 10<sup>308</sup> | 15-16 gigit | 8 byte |

- Biasa disebut dengan _floating point_.
- Tipe data _floating point_ bisa merepresentasikan negatif atau positif dari magnitudonya.
- Pada pemrograman, umumnya tipe data _floating point_ dihindari karena kurang akurat. Representasi 3 pada _floating point_ bisa jadi 2.99999999999999 atau 3.000000000000001 karena keterbatasan pada struktur penyimpanan bilangan pecahan pada komputer.
- Tipe yang umum digunakan adalah `double`.

## Tipe Data : Karakter

- Merupakan tipe data untuk merepresentasikan karakter menurut __ASCII__ (_American Standart Code for Information Interchange_).
- Dalam __ASCII__, terdapat 128 karakter yang direpresentasikan dengan angka dari 0 sampai 127.
- Misalnya, kode __ASCII__ untuk karakter spasi (’ ’) adalah 32, huruf ’A’ adalah 65, ’B’ adalah 66, huruf ’a’ adalah 97, dan huruf ’b’ adalah 98.
- Pada C++, tipe data ini dinyatakan sebagai `char`, dengan
ukuran 1 byte.

## Tipe Data : Boolean

- Merupakan tipe data yang menyimpan nilai kebenaran, yaitu hanya __TRUE__ atau __FALSE__.
- Tipe data ini akan lebih terasa kebermanfaatannya ketika kita sudah mempelajari struktur percabangan dan array.
- Pada C++, kalian dapat menggunakan tipe data `bool`.

## Simbol Variabel pada printf

| Variabel           | Simbol                |
|:------             | :------:              |
| short              | `%d`                  |
| unsigned short     | `%u`                  |
| int                | `%d`                  |
| unsigned int       | `%u`                  |
| long long          | `%lld` _atau_ `%I64d` |
| unsigned long long | `%llu` _atau_ `%I64u` |
| float              | `%f`                  |
| double             | `%lf`                 |
| char               | `%c`                  |