#include <iostream>
#include <stack>

int main()
{
	std::stack<int> container;

	// ���� ��� �ݺ���, ���ͷ����� �۵� X
	// �ε��� ÷�� ��� �Ұ���

	// ������ LIFO
	// �� �� �ִ� ����� push, pop �ǿܿ� ����.

	container.push(1);
	container.push(2);
	container.push(3);

	// ������ ������ top���� ���� ����
	std::cout << container.top() << std::endl;

	// Print�� �Ϸ���...

	std::stack<int> temp(container);		// ���� ������
	while (!temp.empty())
	{
		std::cout << temp.top() << std::endl;
		temp.pop();
	}
}