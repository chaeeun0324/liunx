![image](https://github.com/user-attachments/assets/3688746e-ac53-4b1c-99f1-36e7914b99dd)

템플릿 클래스 Container를 작성하고자 한다

template <class T> class Container { 

 ________ //T 타입의 포인터 p를 선언하라
 ________ // 배열의 크기를 나타내는 변수 size를 선언하라.
 
 public : 
   Container (int n);
   ~Container();
   void set(int index, T value0 { p[index] = value; } 
   T get(int index);
   };

   (1) 빈칸을 적절하게 채워라 
   
    template <class T> class Container { 
     T* p; //T 타입의 포인터 p를 선언하라
     int size ; // 배열의 크기를 나타내는 변수 size를 선언하라.

   (2) 생성자를 작성하라
   
      Container(int n) {
         size = n;           // size를 전달받은 크기로 설정
         p = new T[size];    // T 타입의 동적 배열 생성
      }

   (3) 소멸자를 작성하라.
   
      ~Container() 
      delete[] p; // 동적 배열 메모리 해제
     }

   (4) get()을 작성하라 
   
         T get(int index) {
         if (index >= 0 && index < size) { // 유효한 인덱스인지 확인
             return p[index];              // 배열의 index 위치 값 반환
         }
         return T();                       // 기본값 반환 (잘못된 인덱스일 경우)
     }

   (5) char 타입의 문자만 저장 가능한 Container 객체 c를 생성하는 선언문을 작성하라 (c의 크기는 26)
   
     Container<char> c(26);


   (6) 문제 (5)에서 생성한 객체 c에 set() 함수를 이용하여 알파벳 'a' ~ 'z' 를 삽입하고, get() 함수를 이요하여 반대순으로 화면에 출력하는 main() 함수를 작성하라 

   

    // 'a'부터 'z'까지 저장
    for (int i = 0; i < 26; i++) {
        c.set(i, 'a' + i);
    }

    // 역순으로 출력
    for (int i = 25; i >= 0; i--) {
        cout << c.get(i);
    }
    cout << endl;

    return 0;
}

