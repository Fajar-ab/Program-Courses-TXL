## A. Kuis Perulangan C++

## 1. Perhatikan potongan program berikut:

```c++
int i = 100;
while (i > 0)
    printf("+");
    i = i / 2;
```
Keluaran potongan program tersebut adalah ...

- [ ] &nbsp; __a__ &nbsp; `++++++++`
- [ ] &nbsp; __b__ &nbsp; `+++++++`
- [ ] &nbsp; __c__ &nbsp; `++++++`
- [ ] &nbsp; __d__ &nbsp; terjadi runtime error
- [x] &nbsp; __e__ &nbsp; `+` terus tercetak tanpa henti

### 2. Perhatikan potongan program berikut:

```c++
int a = -50;
do
    printf("masuk ");
while (a > 0);
printf(" keluar");
```
Keluaran potongan program tersebut adalah ....


- [x] &nbsp; __a__ &nbsp; `masuk keluar`
- [ ] &nbsp; __b__ &nbsp; `keluar`
- [ ] &nbsp; __c__ &nbsp; `masuk`
- [ ] &nbsp; __d__ &nbsp; tidak bisa ditentukan
- [ ] &nbsp; __e__ &nbsp; terjadi runtime error

### 3. Perhatikan potongan program berikut:

```c++
int n = 5;
int i = 1;
while (i < n) {
    printf("%d", n);
    i++;
}
```
Keluaran potongan program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; `12345`
- [ ] &nbsp; __b__ &nbsp; _terjadi infinite loop_
- [ ] &nbsp; __c__ &nbsp; `1234`
- [x] &nbsp; __d__ &nbsp; `5555`
- [ ] &nbsp; __e__ &nbsp; `55555`

### 4. Perhatikan dua buah potongan program berikut:

I
```c++
int i = 1;
int n = 10;
for (int i = 1; i <= n; i++) {
    printf("%d", 2 * i);
}
```
II
```c++
int i = 2;
int n = 10;
...  // isi di sini
{
    printf("%d", i);
    i += 2;
}
```
Potongan kode yang paling tepat untuk mengisi bagian kosong agar potongan program I dan potongan program II menghasilkan keluaran yang sama adalah ....

- [ ] &nbsp; __a__ &nbsp; `while (i <= n)`
- [ ] &nbsp; __b__ &nbsp; `while (i < n)`
- [ ] &nbsp; __c__ &nbsp; `while (i <= 2 * n - 1)`
- [ ] &nbsp; __d__ &nbsp; `while (i < 2 * n)`
- [x] &nbsp; __e__ &nbsp; `while (i <= 2 * n)`

### 5. Perhatikan potongan program berikut:

```c++
int t = 0;
for (int i = 1; i <= n; i++) {
    t = t + (n-i);
}
printf("%d", t);
```
Jika n = 10, keluaran potongan program tersebut adalah ....

- [ ] &nbsp; __a__ &nbsp; `100`
- [x] &nbsp; __b__ &nbsp; `45`
- [ ] &nbsp; __c__ &nbsp; `55`
- [ ] &nbsp; __d__ &nbsp; `10`
- [ ] &nbsp; __e__ &nbsp; `75`

### 6. Perhatikan potongan program berikut:

```c++
int n = 100;
int i = 0;
while (n > 1) {
    i = i + 1;
    n = n - (n / 2);
}
printf("%d", i);
```
Keluaran potongan program tersebut adalah ....


- [ ] &nbsp; __a__ &nbsp; 6
- [x] &nbsp; __b__ &nbsp; 7
- [ ] &nbsp; __c__ &nbsp; 8
- [ ] &nbsp; __d__ &nbsp; 9
- [ ] &nbsp; __e__ &nbsp; 10

### 7. Perhatikan potongan program berikut:

```c++
int a = 45;
int b = 56;
do {
    a = a - 3;
    b = b - 5;
} while ((a >= 0) || (b >= 0));
printf("%d %d", a, b);
```
Keluaran potongan program tersebut adalah ....

- [x] &nbsp; __a__ &nbsp; `-3 -24`
- [ ] &nbsp; __b__ &nbsp; `9 -4`
- [ ] &nbsp; __c__ &nbsp; `12 1`
- [ ] &nbsp; __d__ &nbsp; `42 51`
- [ ] &nbsp; __e__ &nbsp; _terjadi infinite loop_