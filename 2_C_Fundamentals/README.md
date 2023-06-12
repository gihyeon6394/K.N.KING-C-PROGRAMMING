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
- printf()
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

## 4. Variables and Assignment

## 5. Reading Input

## 6. Defining Names for Constants

## 7. Identifiers

## 8. Layout of a C Program
