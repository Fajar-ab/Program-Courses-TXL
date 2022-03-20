## A. Materi Analisis Kompleksitas C++

### 1. Perhatikan potongan program berikut

```c++
int x = 0;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        for (int k = j; k < N; k++) {
            x = x + 2;
        }
    }
}
```
Untuk sembarang nilai `N`, nilai `x` setelah potongan program tersebut dijalankan sama dengan ....

- [ ] &nbsp; __a__ &nbsp; N<sup>3</sup> - N
- [x] &nbsp; __b__ &nbsp; N<sup>2</sup> (N + 1)
- [ ] &nbsp; __c__ &nbsp; N<sup>2</sup> (N + 1) / 2
- [ ] &nbsp; __d__ &nbsp; N<sup>2</sup> (N + 1) (N + 1) / 6
- [ ] &nbsp; __e__ &nbsp; N<sup>3</sup>

### 2. Perhatikan potongan program berikut

```c++
int count = 0;
int n = 5;
for (int i = 1; i <= n; i++) {
    count = count + (2 * i - 1);
}
printf("%d", count);
```
Untuk sembarang nilai `n`, nilai `count` setelah potongan program tersebut dijalankan sama dengan ....

- [ ] &nbsp; __a__ &nbsp; 1 + 2 + 3 + ... + n
- [ ] &nbsp; __b__ &nbsp; 1 + 3 + 5 + ... + (n - 1)
- [ ] &nbsp; __c__ &nbsp; 2 + 4 + 6 + ... + n
- [x] &nbsp; __d__ &nbsp; n<sup>2</sup>
- [ ] &nbsp; __e__ &nbsp; 2n

### 3. Perhatikan potongan program berikut

```c++
int total = 0;
for (int i = 1; i <= N; i++) {
    for (int j = N-3; j >= i; j--) {
        total = total + 1;
    }
}
```

Kompleksitas potongan program tersebut paling mendekati ....

- [ ] &nbsp; __a__ &nbsp; O(log N)
- [x] &nbsp; __b__ &nbsp; O(N<sup>2</sup>)
- [ ] &nbsp; __c__ &nbsp; O(N<sup>3</sup>)
- [ ] &nbsp; __d__ &nbsp; O(N - 3)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 4. Perhatikan potongan program berikut

```c++
for (int i = 0; i < N; i++) {
    if (i*i > N)
        break;
}
```
Kompleksitas potongan program tersebut paling mendekati ....

- [ ] &nbsp; __a__ &nbsp; O(log N)
- [x] &nbsp; __b__ &nbsp; O(sqrt(N))
- [ ] &nbsp; __c__ &nbsp; O(N / 2)
- [ ] &nbsp; __d__ &nbsp; O(N)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 5. Perhatikan potongan program berikut

```c++
counter = N;
while (counter > 0) {
    counter = counter / 3;
}
```
Kompleksitas potongan program tersebut paling mendekati ....

- [x] &nbsp; __a__ &nbsp; O(log N)
- [ ] &nbsp; __b__ &nbsp; O(sqrt(N))
- [ ] &nbsp; __c__ &nbsp; O(N / 2)
- [ ] &nbsp; __d__ &nbsp; O(N)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 6. Perhatikan potongan program berikut

```c++
for (int i = 0; i < N; i++) {
    counter = i;
    while (counter > 0) {
        counter = counter / 2;
    }
}
```
Kompleksitas potongan program tersebut paling mendekati ....

- [x] &nbsp; __a__ &nbsp; O(N log N)
- [ ] &nbsp; __b__ &nbsp; O(sqrt(N))
- [ ] &nbsp; __c__ &nbsp; O(N<sup>2</sup> / 2)
- [ ] &nbsp; __d__ &nbsp; O(N<sup>2</sup>)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 7. Perhatikan potongan program berikut

```c++
for (int i = 0; i < N; i++) {
    counter = i;
    while (counter > 0) {
        counter = counter / 2;
    }

    counter = 0;
    while (counter*counter < N) {
        counter = counter + 1;
    }
}
```
Kompleksitas potongan program tersebut paling mendekati ....

- [ ] &nbsp; __a__ &nbsp; O(N log N)
- [x] &nbsp; __b__ &nbsp; O(N sqrt(N))
- [ ] &nbsp; __c__ &nbsp; O(N log N sqrt(N))
- [ ] &nbsp; __d__ &nbsp; O(N<sup>2</sup>)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 8. Perhatikan potongan program berikut

```c++
total = 0;
for (int i = 0; i < N; i++) {
    for (int j = 1; j < M; j++) {
        total = total + 1;
    }

    for (int j = 0; j < N; j++) {
        total = total + 1;
    }
}
```
Kompleksitas potongan program tersebut paling mendekati ....

- [ ] &nbsp; __a__ &nbsp; O(N<sup>2</sup>)
- [ ] &nbsp; __b__ &nbsp; O(NM)
- [x] &nbsp; __c__ &nbsp; O(N<sup>2</sup> + NM)
- [ ] &nbsp; __d__ &nbsp; O(N + M)
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah

### 9. Perhatikan potongan program berikut

```c++
total = 0;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) { 
        total = total + 1;
    }
}
```
Jika untuk `N = 10` potongan program tersebut membutuhkan waktu _1 detik_ untuk dijalankan, maka untuk `N = 100` potongan program tersebut kira-kira membutuhkan waktu ....

- [ ] &nbsp; __a__ &nbsp; 1 detik
- [ ] &nbsp; __b__ &nbsp; 10 detik
- [x] &nbsp; __c__ &nbsp; 100 detik
- [ ] &nbsp; __d__ &nbsp; 10.000 detik
- [ ] &nbsp; __e__ &nbsp; pilihan a sampai d salah
