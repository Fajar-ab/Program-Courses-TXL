## A. Kuis Percabangan C++

### 1. Perhatikan potongan program berikut:

```
a = 3;
if ((a % 2 != 1) && (a > 0))
    printf("genap");
    printf("positif");
```
Keluaran potongan program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; tidak ada keluaran
- [ ] &nbsp; __b__ &nbsp; `genap`
- [x] &nbsp; __c__ &nbsp; `positif`
- [ ] &nbsp; __d__ &nbsp; `genappositif`
- [ ] &nbsp; __e__ &nbsp; `positifgenap`

### 2. Perhatikan kondisi if berikut untuk a dan b bertipe int:

```
if (a > b / 2) {
    printf("bebek\n");
} else {
    printf("ayam\n");
}
```
Perhatikan pula variasi-variasi kondisi if berikut:

I
```
if (b / 2 > a) {
    printf("bebek\n");
} else {
    printf("ayam\n");
}
```
II
```
if (b / 2 > a) {
    printf("ayam\n");
} else {
    printf("bebek\n");
}
```
III
```
if (2*a > b) {
    printf("ayam\n");
} else {
    printf("bebek\n");
}
```
IV
```
if (b / 2 >= a) {
    printf("bebek\n");
} else {
    printf("ayam\n");
}
```
V
```
if (2*a > b) {
    printf("bebek\n");
} else {
    printf("ayam\n");
}
```
Variasi if yang setara dengan kondisi if awal adalah ....


- [ ] &nbsp; __a__ &nbsp; I
- [ ] &nbsp; __b__ &nbsp; II
- [ ] &nbsp; __c__ &nbsp; III
- [ ] &nbsp; __d__ &nbsp; IV
- [x] &nbsp; __e__ &nbsp; V

### 3. Perhatikan potongan program berikut:
```
u = (1 <= x) && (x <= 10);
v = (0 <= y) && (y < 50);

if (u && v) {
    printf("masuk\n");
} else {
    printf("keluar\n");
}
```
Misalkan x dan y adalah variabel bertipe longint, serta u dan v merupakan variabel bertipe boolean. Agar potongan program tersebut menghasilkan keluaran masuk, nilai x dan y yang perlu dimasukkan adalah ....

- [ ] &nbsp; __a__ &nbsp; x = 0, y = 0
- [ ] &nbsp; __b__ &nbsp; x = 0, y = 49
- [x] &nbsp; __c__ &nbsp; x = 1, y = 1
- [ ] &nbsp; __d__ &nbsp; x = 1, y = 50
- [ ] &nbsp; __e__ &nbsp; x = 10, y = 50

### 4. Perhatikan potongan program berikut:
```
nilai = 85;
if (nilai >= 80) {
    ch = 'A';
}
if (nilai >= 70) {
    ch = 'B';
}
if (nilai >= 60) {
    ch = 'C';
}
if (nilai >= 50) {
    ch = 'D';
}
if (nilai >= 40) {
    ch = 'E';
}
printf("%c\n", ch);
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; `A`
- [ ] &nbsp; __b__ &nbsp; `B`
- [ ] &nbsp; __c__ &nbsp; `C`
- [ ] &nbsp; __d__ &nbsp; `D`
- [x] &nbsp; __e__ &nbsp; `E`

### 5. Perhatikan potongan program berikut:

```c++
int a = 26;
if (!(a % 2 == 1)) {
    printf("genap ");
} else {
    printf("ganjil ");
}
if (a > 0) {
    printf("positif\n");
} else if (a < 0) {
    printf("negatif\n");
} else {
    printf("nol\n");
}
```
Keluaran potongan program tersebut adalah ....


- [x] &nbsp; __a__ &nbsp; `genap positif`
- [ ] &nbsp; __b__ &nbsp; `ganjil positif`
- [ ] &nbsp; __c__ &nbsp; `genap negatif`
- [ ] &nbsp; __d__ &nbsp; `ganji negatif`
- [ ] &nbsp; __e__ &nbsp; `ganjil nol`

### 6. Perhatikan potongan program berikut:

```c++
int a = 7;
if (a <= 3) {
    a = a + 3;
}
if (a <= 10) {
    a = a + 10;
}
if (a <= 20) {
    a = a + 20;
} else if (a <= 40) {
    a = a + 40;
}
printf("%d\n", a);
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; `25`
- [x] &nbsp; __b__ &nbsp; `37`
- [ ] &nbsp; __c__ &nbsp; `40`
- [ ] &nbsp; __d__ &nbsp; `35`
- [ ] &nbsp; __e__ &nbsp; `80`

### 7. Perhatikan potongan program berikut:

```c++
int a = -2;
int b = a+a;
int c = b*b;
if (a>b)
    if (c<b)
        printf("%d\n", c);
    else
        printf("%d\n", b);
else
    if (c<a)
        printf("%d\n", c);
    else
        printf("%d\n", a);
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; `-2`
- [ ] &nbsp; __b__ &nbsp; `4`
- [x] &nbsp; __c__ &nbsp; `-4`
- [ ] &nbsp; __d__ &nbsp; `16`
- [ ] &nbsp; __e__ &nbsp; `-16`

### 8. Perhatikan potongan program berikut:

```c++
int a = -5;
if (a > 0) {
    printf("one\n");
} else if (a != 5) {
    printf("two\n");
} else if (a < 0) {
    printf("three\n");
} else {
    printf("four\n");
}
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; `one`
- [x] &nbsp; __b__ &nbsp; `two`
- [ ] &nbsp; __c__ &nbsp; `three`
- [ ] &nbsp; __d__ &nbsp; `four`
- [ ] &nbsp; __e__ &nbsp; tidak ada keluaran

### 9. Perhatikan potongan program berikut:

```c++
int x = 2;
int y = 3;
x = x*y + 1;
y = x*y - 1;
x = y;

if (x < y) {
    x = y - x;
} else if (x > y) {
    x = x - y;
} else {
    x = x / x;
}

printf("%d\n", x);
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; `0`
- [x] &nbsp; __c__ &nbsp; `7`
- [ ] &nbsp; __d__ &nbsp; `13`
- [ ] &nbsp; __e__ &nbsp; `20`