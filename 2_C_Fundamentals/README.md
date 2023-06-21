# 2. C Fundamentals

1. Writing a Simple Program
2. The General Form of a Simple Program
3. Comments
4. Variables and Assignment
5. Reading Input
6. Defining Names for Constants
7. Identifiers
8. Layout of a C Program

---

- basic concepts
- directives, functions, variables, statements

## 1. Writing a Simple Program

## Program : Printing a Pun

```c
#include <stdio.h>

int main(void) {
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

- #include <stdio.h> : C 의 I/O 라이브러리 include
- main : 프로그램의 실행 코드
- printf : 출력 함수
- \n : 개행
- return 0 : 프로그램 종료시 0 반환

### Compiling and Linking

- 머신이 실행 가능한 형태로 프로그램을 변환하는 단계
- 자동으로 이루어짐

1. Preprocessing
    - preprocessor : #으로 시작하는 지시자 전처리 <sub>#include, #define, #ifdef 등</sub>
2. Compiling
    - compiler : 기계어로 변환 <sup>object code</sup>
3. Linking
    - 프로그램 실행에 필요한 추가적이 코드들과 컴파일된 기계어를 결합

```shell
## UNIX 에서 컴파일하기
% cc pun.c

## puc.c의 실행 프로그램을 pun으로 명명하면서 컴파일
% cc -o pun pun.c
```

#### GCC compiler

```shell
% gcc -o pun pun.c
```

- 가장 인기있는 C 컴파일러
- Linux 외에도 다양한 플랫폼 지원
- UNIX cc 컴파일러와 비슷

### Integrated Development Environments <sup>IDE</sup>

- 개발 전용 소프트웨어를 통해 편하게 커파일 하는 방법
- 컴파일 외에도 소스 수정, 실행, 디버깅 등 제공

## 2. The General Form of a Simple Program

```c
int main(void){
    statements...
}
```

- {} : 시작과 끝
- 3 요소
    - Directives <sup>전처리 지시자</sup>
    - Functions <sup>함수</sup>
    - Statements <sup>문</sup>

### Directives

```shell
#include <stdio.h>
```

- Directives는 #으로 시작
- 라인 끝에 ; 없음
- Preprocessor 가 처리하기 위한 명령을 말함
- 컴파일 전에 Preprocessor에 의해 처리
- 컴파일 전에 studio.h가 폼함되어야 함을 의미
- 다수의 라이브러리 파일을 포함할 수 있음

### Functions

- procedure, subroutine, method 등으로 불리기도 함
- Function의 2가지 분류
    - 프로그래머가 작성한 함수
    - C 언어에 이미 구현된 함수 <sup>library functions</sup>
- 수학의 함수와 비슷함 <sub>f(x) = x + 1</sub>
- C에서는 그룹화된 명령어의 집합
- main 함수는 의무
    - 프로그램 실행시 가장 먼저 실행
    - 프로그램의 시작과 끝

#### main() 의 return value

```c
int main(void) {
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

- main 함수는 return value를 가짐
- return value로 status code를 OS에게 반환
- 위 main의 int는 main함수가 int를 반환함을 의미
- return 0; 의미
    - main()의 종료
    - 0을 반환
- main에 반환이 없어도 프로그램은 종료 됨
    - 그러나 많은 컴파일러들이 warning을 발생시킴

### Statements

- 프로그램 실행 시 실행되어야 할 명령어
  - `printf()`
- ; : 명령어의 끝을 의미

### Printing Strings

```c
printf("To C, or not to C: that is the question.\n"); // print "To C, or not to C: that is the question."

printf("To C, or not to C");
printf(": that is the question.\n"); // print "To C, or not to C: that is the question."
```

- String literal 출력하는 라이브러리 함수
- \n : 개행 의미

## 3. Comments

- documentation
- 프로그램의 식별 정보 : 프로그램 이름, 작성일, 작성자 등
- /* ... */ 으로 표현
- // : 한 줄 주석 <sub>C99 부터 추가</sub>

```c
/*
  Name : pun.c
  Purpose: Prints a bad pun.
  Author: kgh
  */

/*****************************************************
 * Name : pun.c
 * Purpose: Prints a bad pun.
 * Author: kgh
 *****************************************************/

#include
<stdio.h>

int main(void) { /* Beginning of Program */
printf("To C, or not to C: that is the question.\n");
return 0; // End of Program
}
```

## 4. Variables and Assignment

- 출력 전에 여러 연산이 필요
- 따라서 프로그램 실행 중 임시로 데이터 저장할 공간이 필요
- 변수 : 임시로 데이터 저장할 공간

### Types

- 모든 변수는 type을 가짐
- 타입 : 변수에 저장할 데이터의 종류 <sub>숫자, 문자, 문자열 등</sub>
- 타입 지정이 결정하는 것
    - 변수에 저장할 방안
    - 변수가 수행할 명령
    - 최대 / 최소 <sub>숫자의 경우</sub>
    - 소수점 이하 자릿수 <sub>실수의 경우</sub>
- int가 float보다 더 큰 범위를 가짐
    - int<sup>Ingeger</sup> : ~2147483647, 정수
    - float : ~3.4E38, 실수 표현에 사용

### Declarations

```c
int debutYear; // 아이돌 데뷔 년도
float profit;

int height, width, length; // 가로, 세로, 높이
```

- 변수는 사용 전에 '선언' 되어야 함
- 선언 : 변수의 이름과 타입을 컴파일러에게 알려줌
- C99부터 Statement과 Declaration을 동시에 가능
    - C++, Java에서 자주 사용

### Assignment

```c
int debutYear; // Declaration
debutYear = 2015; // Assignment

float profit;
profit = 2150.48;

float profit2
profit2 = 2150.48f; // f : float 타입임을 명시
```

- 선언된 변수에 값을 할당

### Printing the Value of a Variable

```c
int height = 187;
int weight = 95;
printf("HEIGHT : %d Length : %d\n", height, length);
```

### Program : Computing the Dimensional Weight of a Box

```c
#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height); // Dimensions: 12x10x8
    printf("Volume (cubic inches): %d\n", volume); // Volume (cubic inches): 960
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166); // Dimensional weight (pounds): 6

    return 0;
}
```

### Initialization

- 기본값이 정해진 변수는 초기화하지 않아도 됨
- 기본값이 없는 변수 타입은 초기화 하지않으면 사용할 떄 에러 발생

```c
int height = 8; // 초기화
int length = 12, width = 10; // 여러 변수 초기화
int volume, weight = 190; // weight만 초기화
```

### Printing Expressions

```c
volume = height * length * width;
printf("Volume (cubic inches): %d\n", volume);

// replaced by
printf("Volume (cubic inches): %d\n", height * length * width);
```

## 5. Reading Input

- `scanf()`
    - "f"는 formatted를 의미
    - 데이터의 포맷화 과정이 필요함을 의미
- prompt에 사용자가 값을 입력하고 엔터를 입력할 때까지 대기
    - 엔터를 입력하면 다음 line으로 이동

```c
scanf("%d", &i); /* read an integer into i */
scanf("%f", &x); /* read a float into x */
```

### Computing the Dimensional Weight of a Box (Revisited)

```c
#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
```

## 6. Defining Names for Constants

#### macro definition

- 대문자와 밑줄로 명명

```c
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```

### Converting Fahrenheit to Celsius

```c
#define SCALE_FACTOR (5.0f / 9.0f) // float 타입, 실수 표현 
#define SCALE_FACTOR (5 / 9) // int 타입, 정수, 버림, 0
```

## 7. Identifiers

- 변수, 함수, 상수 등의 이름
- case sensitive
    - `job`, `Job`, `JOB` : 서로 다른 이름
- 숫자로 시작 불가능
    - `1st`, `2nd`¬
- keword 안됨
    - `int`, `float`, `if`, `while`, ...
- underscore, camelCase가 베스트
    - camelCase 소문자가 제일 베스트
    - `idolName`, `idolGroup`, `name`, ...

## 8. Layout of a C Program

- 적절한 띄어쓰기와 줄바꿈이 가독성을 높임
- token 사이의 띄어쓰기
- 들여쓰기
- 라인 사이의 빈 줄로 논리적인 유닛 구벼리

```c
printf("there is so many attractive idols. but my favorite idol group : %s\n"
       , GROUP_NAME_AESPA);
```