# 3. Formatted Input/Output

1. The `printf` Function
2. the `scanf` Function

---

`printf`, `scanf`는 C에서 가장 많이 쓰이는 함수.

## 1. The `printf` Function

```c
printf(string, expr1, expr2, ...);
```

- formatting할 변수의 개수 제한 없음

### Conversion Specifications

````
%m.pX
%-m.pX
%[minimum field width].[precision][conversion character]

/* example */
printf("%10.3f", 123.456); // "   123.456"
printf("%-10.3f", 123.456); // "123.456   "
````

- `m` : minimum field width
- `p` : precision
- `X` : conversion character
    - `d` : decimal integer
    - `e` : floating-point number in scientific notation
    - `f` : floating-point number in fixed decimal notation
    - `g` : floating-point number in either scientific or fixed decimal notation
        - compile 시점에 float의 사이즈를 모를때 유용

### Program : Using `printf` to Format Numbers

```c
int karinaAge;
float karinaHeight;

karinaAge = 23;
karinaHeight = 168.4123f;

printf("karina age %d and karina height %f\n", karinaAge, karinaHeight);
printf("karina age |%5d| and karina height |%10.2f|\n", karinaAge, karinaHeight);
printf("karina age |%-5d| and karina height |%7.2e|\n", karinaAge, karinaHeight);
printf("karina age |%5.3d| and karina height |%10.7g|\n", karinaAge, karinaHeight);
```

<details>
<summary>Result</summary>

````
karina age 23 and karina height 168.412292
karina age |   23| and karina height |    168.41|
karina age |23   | and karina height |1.68e+02|
karina age |  023| and karina height |  168.4123|
````

</details>

### Escape Sequences

- `\n` : compiler에게 특별한 의미를 갖는 character를 출력 가능하게 함
- ex.
    - `\a` : Alert
    - `\b` : Backspace
    - `\n` : Newline
    - `\t` : Horizontal tab

```c
printf("NewJeans\tMinzi\tHaerin\tHani\nAespa\t\tkarina\tGiselle\tWinter\tNingning\n");
printf("I Love \"Aespa\"\nI Love \"Karina\"");

```

<details>
<summary>Result</summary>

````
NewJeans        Minzi   Haerin  Hani
Aespa           karina  Giselle Winter  Ningning
I Love "Aespa"
I Love "Karina"
````

</details>

## 2. The `scanf` Function

### How `scanf` Works

### Ordinary Characters in Format String

### Confusing `printf` and `scanf`

### Program : Adding Fractions
