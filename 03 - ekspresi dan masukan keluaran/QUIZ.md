## A. Kuis Ekspresi dan Masukan/Keluaran C++

### 1. Misalkan diberikan masukan dalam format berikut

```shell
2 3
4 5 6
```
Terdapat beberapa percobaan untuk membaca masukan tersebut, seperti:

I
```
scanf("%d %d", &a1, &a2);
scanf("%d %d %d", &b1, &b2, &b3);
```
II
```
scanf("%d", &a1);
scanf("%d", &a2);
scanf("%d", &b1);
scanf("%d", &b2);
scanf("%d", &b3);
```
III
```
scanf("%d%d", &a1, &a2);
scanf("%d%d%d", &b1, &b2, &b3);
```
IV
```
scanf("%d %d %d %d %d", &a1, &a2, &b1, &b2, &b3);
```
Di antara cara-cara di atas, yang tepat untuk membaca masukan tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; Hanya I
- [ ] &nbsp; __b__ &nbsp; Hanya I dan III
- [ ] &nbsp; __c__ &nbsp; Hanya III
- [ ] &nbsp; __d__ &nbsp; Hanya I, II, dan IV
- [x] &nbsp; __e__ &nbsp; I, II, III, dan IV


## 2. Misalkan diberikan keluaran dalam format berikut

```
*1*
2*3*4
```
Terdapat beberapa percobaan untuk menghasilkan keluaran tersebut, seperti:

I
```
printf("*1*\n");
printf("2*3*4\n");
```
II
```
printf("*1*\n2*3*4\n");
```
III
```
printf("*1*");
printf("2*3*4");
```
IV
```
printf("*1*\n2");
printf("*3*4\n");
```
Di antara cara-cara di atas, yang tepat untuk menghasilkan keluaran tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; Hanya I
- [ ] &nbsp; __b__ &nbsp; Hanya I dan II
- [ ] &nbsp; __c__ &nbsp; Hanya I dan III
- [x] &nbsp; __d__ &nbsp; Hanya I, II, dan IV
- [ ] &nbsp; __e__ &nbsp; Hanya III

### 3. Perhatikan program berikut

```c++
#include <cstdio>

int main() {
  int b1, b2, jml;

  b1 = 2000000000;
  b2 = 2000000000;

  jml = (b1 + b2) % 123;
  printf("%d\n", jml);
}
```

Ketika dijalankan, program menghasilkan keluaran `-12`. <br>
Hal ini dapat terjadi karena ...

- [ ] &nbsp; __a__ &nbsp; operator modulo menjadi tidak akurat ketika salah satu operand mencapai nilai miliaran
- [x] &nbsp; __b__ &nbsp; terjadi overflow saat penjumlahan `b1` dengan `b2`
- [ ] &nbsp; __c__ &nbsp; terjadi underflow saat penjumlahan `b1` dengan `b2`
- [ ] &nbsp; __d__ &nbsp; angka 123 sebagai salah satu operand tidak memiliki tipe data yang jelas
- [ ] &nbsp; __e__ &nbsp; terjadi error selain overflow dan underflow


### 4. Perhatikan program berikut

```c++
#include <cstdio>

int main() {
  int b1, b2;
  b1 = 1;
  b2 = 3;

  b1 = b2;
  b2 = b1;
  printf("%d %d\n", b1, b2);
}
```
Keluaran program tersebut adalah ....

- [x] &nbsp; __a__ &nbsp; `3 3`
- [ ] &nbsp; __b__ &nbsp; `3 1`
- [ ] &nbsp; __c__ &nbsp; `1 1`
- [ ] &nbsp; __d__ &nbsp; `4`
- [ ] &nbsp; __e__ &nbsp; `-2`

### 5. Perhatikan program berikut

```c++
#include <cstdio>

int main() {
  int b1, b2, temp;
  b1 = 1;
  b2 = 3;

  temp = b1;
  b1 = b2;
  b2 = temp;
  printf("%d %d\n", b1, b2);
}
```
Keluaran program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; `3 3`
- [x] &nbsp; __b__ &nbsp; `3 1`
- [ ] &nbsp; __c__ &nbsp; `1 1`
- [ ] &nbsp; __d__ &nbsp; `4`
- [ ] &nbsp; __e__ &nbsp; `-2`

### 6. Perhatikan program berikut

```c++
#include <cstdio>

int main() {
  int a, b;
  a = 10;
  b = a + 10;
  printf("%d %d\n", a, b);
}
```
Keluaran program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; `20 20`
- [ ] &nbsp; __b__ &nbsp; `20 10`
- [x] &nbsp; __c__ &nbsp; `10 20`
- [ ] &nbsp; __d__ &nbsp; `10 10`
- [ ] &nbsp; __e__ &nbsp; `30`

### 7. Perhatikan program berikut:

```c++
#include <cstdio>

int main() {
  unsigned char a = 250;
  printf("%d ", a);
  a = a + 10;
  printf("%d\n", a);
}
```
Keluaran program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; `4 4`
- [x] &nbsp; __b__ &nbsp; `250 4`
- [ ] &nbsp; __c__ &nbsp; `250 250`
- [ ] &nbsp; __d__ &nbsp; `4 250`
- [ ] &nbsp; __e__ &nbsp; tidak ada karena terjadi error

### 8. Perhatikan ekspresi berikut:

```c++
h1 = a / b;
h2 = a - b;
h3 = a % b;
```
Tipe variable yang mungkin untuk a dan b sehingga program berhasil dikompilasi adalah ....

- [ ] &nbsp; __a__ &nbsp; a *(float)*, b *(float)*
- [ ] &nbsp; __b__ &nbsp; a *(float)*, b *(int)*
- [x] &nbsp; __c__ &nbsp; a *(int)*, b *(int)*
- [ ] &nbsp; __d__ &nbsp; a *(int)*, b *(float)*
- [ ] &nbsp; __e__ &nbsp; a *(double)*, b *(double)*

### 9. Perhatikan ekspresi berikut:

```c++
((a + b) % c) * d / e * (f / g)
```
Jika `a`, `b`, `c`, `e`, `f`, `g` bertipe `int`, sementara `d` bertipe `double`, maka nilai yang dihasilkan dari ekspresi tersebut sebetulnya bertipe data ....

- [ ] &nbsp; __a__ &nbsp; `int`
- [x] &nbsp; __b__ &nbsp; `double`
- [ ] &nbsp; __c__ &nbsp; `long double`
- [ ] &nbsp; __d__ &nbsp; `boolean`
- [ ] &nbsp; __e__ &nbsp; tidak dapat ditentukan dengan pasti

### 10. Ekspresi yang bernilai false jika A = true, B = false, C = true adalah ....

- [ ] &nbsp; __a__ &nbsp; `(A || B) && C`
- [ ] &nbsp; __b__ &nbsp; `A || (B && C)`
- [ ] &nbsp; __c__ &nbsp; `(A ^ B) && C`
- [x] &nbsp; __d__ &nbsp; `(A ^ C) && B`
- [ ] &nbsp; __e__ &nbsp; `(A && C) || B`

### 11. Diberikan sejumlah ekspresi boolean berikut:

I
```c++
a && !b || c && d
```
II
```c++
(a || !b) && c || !d
```
III
```c++
a || b && !c && d
```
IV
```c++
a && !d || !c || a && b
```
Jika **a = true**, **b = false**, **c = true**, **d = true**, maka ekspresi yang bernilai **true** adalah ....

- [ ] &nbsp; __a__ &nbsp; I, II, III, dan IV
- [x] &nbsp; __b__ &nbsp; hanya I, II, dan III
- [ ] &nbsp; __c__ &nbsp; hanya I, II, dan IV
- [ ] &nbsp; __d__ &nbsp; hanya I dan II
- [ ] &nbsp; __e__ &nbsp; hanya I dan III

### 12. Diberikan dua buah pecahan a/b dan c/d.

Anggap variabel pembilang1 dan penyebut1 mendefinisikan a dan b, serta pembilang2 dan penyebut2 mendefinisikan c dan d.

Dengan asumsi seluruh variabel yang digunakan memiliki tipe data longint, dan nilainya selalu berupa bilangan positif kurang dari 1000, maka ekspresi yang tepat untuk membandingkan apakah a/b sama dengan c/d adalah ....

- [ ] &nbsp; __a__ &nbsp; `(pembilang1/penyebut1) == (pembilang2/penyebut2)`
- [ ] &nbsp; __b__ &nbsp; `(pembilang1 % penyebut1) == (pembilang2 % penyebut2)`
- [x] &nbsp; __c__ &nbsp; `pembilang1*penyebut2 == pembilang2*penyebut1`
- [ ] &nbsp; __d__ &nbsp; `pembilang1*pembilang2 == penyebut1*penyebut2`
- [ ] &nbsp; __e__ &nbsp; terdapat lebih dari satu jawaban yang tepat
