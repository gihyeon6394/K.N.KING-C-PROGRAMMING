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

## 3. Comments

## 4. Variables and Assignment

## 5. Reading Input

## 6. Defining Names for Constants

## 7. Identifiers

## 8. Layout of a C Program
