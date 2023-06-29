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

### Escape Sequences

## 2. The `scanf` Function

### How `scanf` Works

### Ordinary Characters in Format String

### Confusing `printf` and `scanf`

### Program : Adding Fractions
