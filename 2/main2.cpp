#include <iostream>
#include <queue>

int main()
{
	std::queue<int> container;

	container.push(1);
	container.push(2);
	container.push(3);

	// ���ð� �����ϰ�, ���� ��� �ݺ���, ���ͷ����� �۵� X
	// �ε��� ÷�� ��� �Ұ���

	// ť�� FIFO;
	container.pop();
	std::cout << container.front() << std::endl;

}

// Priority Queue
// �켱������ ���� ������ �޶����� ť
// ���ӿ��� ���� ���̴� �ڷᱸ���� �ƴϴ�.


// ���� �����̳ʴ� ����� ���ѵǱ� ������, 
// ���ó ���� ���ѵȴ�.