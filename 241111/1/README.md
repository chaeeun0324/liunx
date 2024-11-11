
![image](https://github.com/user-attachments/assets/f49509f6-bc44-4fdd-9fae-4f7722b9a240)

1. SmartTV 생성자 호출
   SmartTV htv("192.0.0.1", 32);를 통해 SmartTV 생성자가 호출됨 -> 생성자 매개변수에 전달 (ipAddr,size)
   
2. WideTV 생성자 호출 
   WideTV(size, true)를 사용하여 WideTV 생성자를 호출 -> size = 32 videoIn = true -> WideTV 생성자 전달

3. TV 생성자 호출
  WideTV 생성자는 TV(size)를 통해 TV 생성자를 호출

4. SmartTV 생성자의 멤버 초기화
   SmartTV 생성자는 인수로 전달받은 ipAddr 값을 this->ipAddr = ipAddr;를 통해 SmartTV의 멤버 변수 ipAddr에 저장

