# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11

# 타겟 파일 이름
TARGET = book_program   # 실행 파일 이름을 book_program으로 설정

# 소스 및 헤더 파일
SRCS = main.cpp Book.cpp
HEADERS = Book.h

# 객체 파일 (SRCS에서 .cpp 확장자를 .o로 바꿈)
OBJS = $(SRCS:.cpp=.o)

# 기본 타겟: 프로그램 컴파일
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 개별 소스 파일 컴파일 규칙
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 청소 규칙
clean:
	rm -f $(OBJS) $(TARGET)

