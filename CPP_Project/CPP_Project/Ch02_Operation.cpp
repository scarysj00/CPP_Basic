#include "io.h"

void OperationArithmatic(int Arith1, int Arith2)
{
  // int Arith1 = 10;
  // int Arith2 = 20;
  // 변수를 선언할때는 위와 같이 써주고 
  // 파라미터로 쓰는 경우는 첫줄과 같이 써줌

  int Sum = Arith1 + Arith2;
  int Sub = Arith1 - Arith2;
  int Mul = Arith1 * Arith2;
  int Div = Arith1 / Arith2;
  int Rest = Arith1 % Arith2;

  cout << Sum << endl 
       << Sub << endl 
       << Mul << endl 
       << Div << endl 
       << Rest << endl;
}
  
void OperationIncrementDecrement()
{
     // 증감 연산
      int Increase = 0; // 초기화
      int Decrease = 10;
    
      Increase = Increase + 1; // 더해지는 값 : 증감값(Step)
      Decrease = Decrease - 2;
    
      cout << Increase << endl << Decrease << endl;
      
      Increase += 1;
      Decrease -= 2;
    
      cout << Increase << endl << Decrease << endl;
    
      // Count : 개수 - 1씩 증가 또는 감소
        
      Increase++;
      Decrease--;
    
      cout << Increase << endl << Decrease << endl;
  }

void OperationComparison()
{
     // 비교 연산의 결과 값 : 참/거짓 = true/false = 1/0, bool타입 데이터가 나온다
    int Greater = 30;
    int Less = 10;
  
    cout << ( Greater > Less ) << endl; // > : greater than
    cout << ( Greater < Less ) << endl; // < : less than
  
    cout << ( Greater >= Less ) << endl;
    cout << ( Greater <= Less ) << endl;
  
    cout << ( Greater == Less ) << endl;
    cout << ( Greater != Less ) << endl; // !는 부정의 의미, 같지 않다
  }

void OperationLogical()
{
    // 논리 연산
    // AND : bool 값이 모두 true이면 결과는 true, 
    //       하나라도 false이면 결과는 false
    cout << ( true && true ) << endl;
    cout << ( false && false ) << endl;
    
    //OR : bool 값이 모두 false 결과가 false, 
    //     하나라도 true가 있으면 결과는 true
    cout << ( true || true ) << endl;
    cout << ( true || false ) << endl;
    
    // 국어가 90 이상이고 영어가 90 이상이면 ~
    int kor = 80;
    int eng = 95;
    
    // cout << ( kor >= 90 && eng >= 90 ) << endl;
    // ↓
    // cout << ( false && true ) << endl;
    // ↓
    // cout << ( false ) << endl;
    
    cout << !( kor >= 90 && eng >= 90 ) << endl;
    cout << !( !(kor >= 90) && eng >= 90 ) << endl;
  }

void OperationBit()
{
    // 비트 연산
    int Bit1 = 15; // 00000000 00000000 00000000 00001111
    int Bit2 = 20; // 00010100
  
    int BitAnd = Bit1 & Bit2;
    // 00001111
    // 00010100
    // 00000100 => 2^0 * 0 + 2^1 * 0 + 2^2 * 1 = 4
  
    cout << BitAnd << endl;
  
    // 15 숫자 값을 비트 이동 연산
    cout << ( Bit1 << 1 ) << endl;
    // 00001111
    // 00011110 => 2^0 * 0 + 2^1 * 1 + 2^2 * 1 + 2^3 * 1 + 2^4 * 1 = 
    // 0 + 2 + 4 + 8 + 16 = 30
  }

void OperarionThree()
{
     // 삼항 연산
    cout << ( 3 > 5 ? "Hello" : "World" ) << endl; 
    cout << ( 3 < 5 ? "Hello" : "World" ) << endl; 

  }