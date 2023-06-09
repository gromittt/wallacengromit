#include <iostream>
#include <string> //문자열 크기 제한 X//
using namespace std; //앞으로 코드에서 std::생략//

int main()
{
	char name[11];
	int id; //학번은 정수이므로 정수형//

	cout << "이름: "; //이름: 출력//
	cin.getline(name, 11, '\n'); //사용자 이름 입력 받음 (공백 입력 받기 위해 cin.getline 사용) //
	cout << "학번: "; //학번: 출력//
	cin >> id; //학번 입력 받음//

	cout << "반갑습니다." << name << "님" << endl;
	cout << '\n' << "학점 입력을 시작합니다." << endl;
	cout << '\n' << "================= SWING 31 =================" << endl;

	float cp; //학점은 소수점이 있을 수도 있으므로 실수형//
	float ci;
	float se;
	float ce;

	cout << "C프로그래밍(3학점): "; //C프로그래밍(3학점): 출력//
	cin >> cp; //C프로그래밍(3학점)의 학점 입력 받음//
	cout << "컴퓨터및정보보호개론(3학점): ";
	cin >> ci;
	cout << "소프트웨어개발실무영어I(1학점): ";
	cin >> se;
	cout << "대학고급영어(2학점): ";
	cin >> ce;

	cout << "============================================" << endl;

	float total = (cp * 3 + ci * 3 + se * 1 + ce * 2) / 9; //학점 계산식//
	cout << '\n' << name << "(" << id << ")" << "님의 전체 학점은 " << total << "입니다.";

	return 0;
}