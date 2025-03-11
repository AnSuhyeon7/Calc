#include <iostream>

// 연산식
double add(double num1, double num2) { return num1 + num2; }
double sub(double num1, double num2) { return num1 - num2; }
double multi(double num1, double num2) { return num1 * num2; }
double div(double num1, double num2) { if (num2 == 0) { std::cout << "0으로 나눌 수 없습니다." << std::endl; return 0; } return num1 / num2; }

// 프로그램 실행 시작점
int main() 
{
	while (true) {

		double num1, num2;

		// 메뉴바 출력
		std::cout << "<계산기>" << std::endl; // 줄바꿈
		std::cout << "1. 덧셈" << std::endl;
		std::cout << "2. 뺄셈" << std::endl;
		std::cout << "3. 곱셈" << std::endl;
		std::cout << "4. 나눗셈" << std::endl;
		std::cout << "5. 종료" << std::endl;
		std::cout << "메뉴를 선택하세요. (1/2/3/4/5) -> ";

		// 메뉴바 입력값
		int choice;
		std::cin >> choice;

		// 5 누를시 프로그램 종료
		if (choice == 5) {
			std::cout << "종료됩니다." << std::endl;
			break;
		}

		// 연산할 숫자 입력
		std::cout << "숫자 입력 : ";
		std::cin >> num1;
		std::cout << "숫자 입력 : ";
		std::cin >> num2;

		// 연산 선택
		if (choice == 1) {
			std::cout << "출력 : " << add(num1, num2) << std::endl;
		}
		else if (choice == 2) {
			std::cout << "출력 : " << sub(num1, num2) << std::endl;
		}
		else if (choice == 3) {
			std::cout << "출력 : " << multi(num1, num2) << std::endl;
		}
		else if (choice == 4) {
			std::cout << "출력 : " << div(num1, num2) << std::endl;
		}
		else {
			std::cout << "잘못 입력하였습니다. 다시 시도해주세요." << std::endl;
		}
	}
	// 프로그램 종료
	return 0;
}

