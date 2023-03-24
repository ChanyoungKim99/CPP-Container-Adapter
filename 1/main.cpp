#include <iostream>
#include <stack>

int main()
{
	std::stack<int> container;

	// 범위 기반 반복문, 이터레이터 작동 X
	// 인덱스 첨자 사용 불가능

	// 스택은 LIFO
	// 쓸 수 있는 기능은 push, pop 의외에 없다.

	container.push(1);
	container.push(2);
	container.push(3);

	// 스택은 오로지 top에만 접근 가능
	std::cout << container.top() << std::endl;

	// Print를 하려면...

	std::stack<int> temp(container);		// 복사 생성자
	while (!temp.empty())
	{
		std::cout << temp.top() << std::endl;
		temp.pop();
	}
}