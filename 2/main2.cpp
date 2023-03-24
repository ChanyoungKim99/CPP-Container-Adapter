#include <iostream>
#include <queue>

int main()
{
	std::queue<int> container;

	container.push(1);
	container.push(2);
	container.push(3);

	// 스택과 동일하게, 범위 기반 반복문, 이터레이터 작동 X
	// 인덱스 첨자 사용 불가능

	// 큐는 FIFO;
	container.pop();
	std::cout << container.front() << std::endl;

}

// Priority Queue
// 우선순위에 입장 순서가 달라지는 큐
// 게임에서 자주 쓰이는 자료구조는 아니다.


// 보조 컨테이너는 기능이 제한되기 때문에, 
// 사용처 역시 제한된다.