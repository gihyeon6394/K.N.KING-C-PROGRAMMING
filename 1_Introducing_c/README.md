# 1. INTRODUCING C

- 1.1 History of C
- 1.2 Strengths and Weaknesses of C

---

## 1.1 History of C

### Origins

- C는 UNIX OS의 부산물
- Assembly 언어로 UNIX를 만들기 힘듦 <sub>디버깅, 기능 추가 등</sub>
- UNIX를 더 고도화 하기위해 만든 high-level 언어
- B -> NB <sup>new B</sup> -> C 순으로 발전
- 이동성 : C 컴파일러에 의해 작성된 것은 다른 UNIX 시스템에서도 컴파일 가능

### Standardization

1. 1970년대에는 UNIX 사용자인 소수의 C 개발자가 있었음
2. 19080년대에 C 컴파일러가 다양한 OS에서 구동이 가능해짐
    - IBM PC에서 가능해짐!
3. standard 필요성 대두
    - C 프로그래머들이 K&R을 레퍼런스로 의존하는 문제점
    - C와 UNIX의 구분 모호
    - standard 필요성 대두
4. 1983년 C의 표준이 시작 <sub>ANSI에 의해</sub>
5. 1989년 C 표준이 완성 : ANSI standard X3.159-1989
6. 1990년 ISO 표준으로 승격 : ISO/IEC 9899:1990
    - C89, C90의 레퍼런스
7. 1999년 C99 표준이 완성 : ISO/IEC 9899:1999
    - C89 a.k.a ANSI C, ANSI/ISO C, ISO C

### C-Based Languages

- C++ : C 기반, 클래스, 객체지향 등의 특징을 추가
- Java : C++ 기반
- C# : C++-, java 기반
- Perl : C 기반, 간단한 스크립트 언어

#### C를 공부하는 것이 중요한 이유

- C 기반 언어들에 훌륭한 인사이트 제공
- C 기반의 오래된 프로그램들이 아직 많음
- 현재도 특수 상황에 놓인 개발에서 많이 사용
    - 메모리와 전파워가 제한된 상황
    - C의 간결함이 요구되는 상황

## 1.2 Strengths and Weaknesses of C

- C is a low-level language
    - machine-level concepts : 메모리, 주소 등
    - 컴퓨터 내부 실행에 가까운 명령을 제공
- C is a small language
    - 다른 언어들에 비해 feature들이 적음
    - 그러기 기본함수 라이브러리에 의존
- C is a permitive language

### Strengths

- Efficiencyv <sup>효율성</sup>
    - 어셈블리가 사용되던 어플리케이션에 사용되도록 의도됨
    - 따라서 C는 빠르고 메모리 사용량이 적어야 했음
- Portability <sup>이동성</sup>
    - 서로 모순된 dialect로 쪼개지지 않았음
    - C 컴파일러는 작고, 쉽게 작성 가능
    - 그 자체로 이동성을 지원함
- Power <sup>강력함</sup>
    - 다양한 데이터 타입과 연산자
- Flexibility <sup>유연함</sup>
    - 시스템 프로그래밍 전문 언어지만 꼭 그렇지는 않음
    - 현재는 임베디드와 같은 다양한 어플리케이션에도 쓰임
    - 연산과도 같은 기능에도 제한사항이 적음 <sub>문자와 숫자의 연산 등</sub>
- Standard library <sup>표준 라이브러리</sup>
    - 많은 기능 제공 <sub>파일 입출력, 문자열 처리 등</sub>
- Integration with UNIX <sup>유닉스와의 통합</sup>
    - UNIX와의 조합에 특화
    - 몇 UNIX 도구는 사용자가 C를 안다고 가정

### Weaknesses

- C programs can be error-prone
    - C의 유연함이 반대로 에러를 제공
    - 개발자의 실수를 컴파일러가 탐지 못함
    - 프로그램이 구동되기 전까지 대부분의 에러가 탐지되지 않음
- C programs can be difficult to understand
    - C의 간결함
- C programs ca be difficult to modify
    - 유지 보수성이 없이 짜인 프로그램은 수정이 힘듦
    - 다른 프로그램 언어들은 클래스, 패키지와 같은 기능을 통해 대형 프로그램을 관리 가능

### Effective Use of C

- Learn how to avoid C pitfalls
    - C의 위험성을 피하는 방법을 배울 것
- Use software tools to make C programs more reliable
    - C 컴파일러보다 더 자세하게 에러를 분석해주는 툴들 <sub>lint, splint 등</sub>
    - 디버거를 사용하는 것은 실질적인 의무
- Take advantage of existing code libraries
    - 공통 기능에 대한 라이브러리가 이미 존재
    - 공통 기능 : 유저 인터페이스 개발, 그래픽, 데이터 관리, 네트워킹 등
- Adopt a sensible set of coding conventions
    - coding convention : 언어가 강제하지 않지만 개발자들이 채택하는 규칙
    - 코드의 가독성을 높이고, 유지보수성을 높임
- Avoid "tricks" and overly complex code
    - 적절히 간결하게하여 가독성을 지킬 것
- Stick to the standard
    - C89, C90 표준을 따르는 것이 이동성을 높이는 길