# 이것이 C++이다
## 강의 현장을 그대로 옮긴 C++ 입문서

<br/><br/>

**자료형**

+ C++11 표준 새로운 자료형

자료형 | 설명
------------ | -------------
longlong | 64비트 정수(컴파일러에 따라 상이)
char16_t | 16비트 문자
char32_t | 32비트 문자
auto | 컴파일러가 자동으로 형식을 규정하는 자료형
decltype(expr) | expr과 동일한 자료형

+ auto [source file](https://github.com/Hanbyori/Project/blob/main/Sample/Auto.cpp)

<br/><br/>

**메모리 동적 할당**

+ new와 delete 연산자
new와 delete는 C++에서 객체를 동적 할당하고 해제하는 '연산자'입니다.
단일 인스턴스라면 다음과 같은 형태로 사용합니다.
