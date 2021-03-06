![image](https://user-images.githubusercontent.com/20338405/106761954-b0029500-6678-11eb-93e0-067424eee8bb.jpg)
# 이것이 C++이다 프로젝트

<br/><br/>
## Chapter01 C와는 다른 C++
**자료형**

* C++11 표준 새로운 자료형

자료형 | 설명
------------ | -------------
longlong | 64비트 정수(컴파일러에 따라 상이)
char16_t | 16비트 문자
char32_t | 32비트 문자
auto | 컴파일러가 자동으로 형식을 규정하는 자료형
decltype(expr) | expr과 동일한 자료형

* auto [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Auto.cpp)

<br/><br/>
**메모리 동적 할당**

* new와 delete 연산자 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/NewDelete.cpp)
* 배열 형태의 객체 생성 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/NewDeleteArray.cpp)

<br/><br/>
**참조자 형식**
* 참조형 변수 선언과 정의 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/ReferenceType.cpp)
* 참조 전달 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/ReferenceSwap.cpp)

<br/><br/>
**r-value 참조**
* r-value 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Rvalue.cpp)

<br/><br/>
**범위 기반 for문**
* 반복 횟수 자동 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/RangeBasedfor.cpp)

<br/><br/>
**1부 연습문제**
* 1번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q1.cpp)
* 2번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q2.cpp)
* 3번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q3.cpp)
* 4번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q4.cpp)
* 5번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q5.cpp)
* 6번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter01/Chapter1_Q6.cpp)

<br/><br/>
## Chapter02 C++ 함수와 네임스페이스
**디폴트 매개변수**
* 디폴트 매개변수 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/DefaultParam.cpp)
* 매개변수가 두 개일 때의 디폴트 값 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/DefaultParam2.cpp)

<br/><br/>
**함수 다중 정의**
* 다중 정의 일반 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/FuncPloy.cpp)
* 다중 정의와 모호성 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/FuncAmbiguity.cpp)
* 함수 템플릿 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/FuncTemplate1.cpp)
* 함수 템플릿으로 만든 Add() 함수 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/FuncTemplate2.cpp)

<br/><br/>
**인라인 함수**
* 인라인 함수 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/InlineSample.cpp)

<br/><br/>
**네임스페이스**
* 네임스페이스 선언 및 정의 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/NamespaceSample.cpp)
* using 선언 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/NamespaceUsing.cpp)
* 네임스페이스의 중첩 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/NamespcaeNested.cpp)
* 네임스페이스와 다중 정의 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/NamespaceOver.cpp)

<br/><br/>
**식별자 검색 순서**
* 현재 블록 범위 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/IdSearchSeq1.cpp)
* 상위 블록 범위 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/IdSearchSeq2.cpp)
* 네임스페이스와 전역 변수의 검색 우선권 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/IdSearchSeq3.cpp)
* using 선언과 전역 번수 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/IdSearchSeq4.cpp)
* 네임스페이스에 using 선언 추가 후 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/IdSearchSeq5.cpp)

<br/><br/>
**2부 연습문제**
* 1번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q1.cpp)
* 2번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q2.cpp)
* 3번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q3.cpp)
* 4번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q4.cpp)
* 5번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q5.cpp)
* 6번 문제 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter02/Chapter2_Q6.cpp)

<br/><br/>
## Chapter03 객체지향 프로그래밍
**객체지향 프로그래밍 개요**
* 기존 절차지향 프로그래밍 코드 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Hello00P1.cpp)
* 제작자가 미리 구현한 코드 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Hello00P2.cpp)
* 구조체와 함수 관계를 정의 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Hello00P3.cpp)

<br/><br/>
**클래스 기본 문법**
* 클래스를 이용해 객체지향으로 변경 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Hello00P.cpp)
* 멤버 선언 및 정의 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/MemberInit1.cpp)
* 생성자 함수의 역할 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/MemberInit2.cpp)
* 멤버 함수 선언과 정의를 분리 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/MemberInit3.cpp)
* 생성자 초기화 목록 이용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/MemberInit4.cpp)

<br/><br/>
**접근 제어 지시자**
* 객체 내부 멤벼 번수의 임의 접근 차단 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/AccessCtrl1.cpp)

<br/><br/>
**생성자와 소멸자**
* 생성자와 소멸자 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Constructor1.cpp)
* 디폴트 생성자의 생략 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/Constructor2.cpp)

<br/><br/>
**동적 객체의 생성과 소멸**
* new와 delete 연산자 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/ClassNew.cpp)

<br/><br/>
**참조 형식 멤버 초기화**
* 참조자 선언을 위한 생성자 초기화 목록 이용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/RefSample.cpp)

<br/><br/>
**생성자 다중 정의**
* 생성자 다중 정의 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/ConstructorOver1.cpp)
* 다른 생성자를 추가로 부르는 생성자 초기화 함수 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/ConstructorOver2.cpp)

<br/><br/>
**명시적 디폴트 생성자**
* 디폴트 생성자의 정의를 클래스 외부로 분리 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/ExpDefaultConstructor.cpp)

<br/><br/>
**메서드**
* 메서드의 종류와 특징

종류 | 일반 | 상수화 | 정적 | 가상
-- | -- | -- | -- | --
관련 예약어 | - | const | Static | virtual
this 포인터 접근 | 가능 | 가능 | 불가능 | 가능
일반 멤버 읽기 | 가능 | 가능 | 가능(제한적) | 가능
일반 멤버 쓰기 | 가능 | 불가능 | 가능(제한적) | 가능
정적 멤버 읽기 | 가능 | 가능 | 가능 | 가능
정적 멤버 쓰기 | 가능 | 불가능 | 가능 | 가능
특징 | 가장 보편적인 메서드 | 멤버 쓰기 방지가 목적 | C의 전역 함수와 유사 | 상속 관계에서 의미가 큼

<br/><br/>
**this 포인터**
* this 포인터 사용 [source file](https://github.com/Hanbyori/Project/blob/main/Chapter03/ThisPointer.cpp)

<br/><br/>
**실습 과제 1**
* 프로젝트 생성 및 초기 코드 작성 [source code](https://github.com/Hanbyori/Project/blob/main/Chapter03/MyString.cpp), [header file](https://github.com/Hanbyori/Project/blob/main/Chapter03/MyString.h), [main source](https://github.com/Hanbyori/Project/blob/main/Chapter03/StringCtrlSample.cpp)
