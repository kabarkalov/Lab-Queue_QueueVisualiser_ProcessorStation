#include <iostream>
#include "TQueue.h"
using namespace std;


void Test_Queue()
{
	const int size = 3;
	int item1 = 4, item2 = 5;
	int arr[size] = { 1,2,3 };
	TQueue<int> a(size);
	cout << "Создана очередь на " << size << " элементов" << endl;
	cout << "Очередь пуста? Ответ: " << a.IsEmpty() << endl;
	cout << "Добавим элементы: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
		a.Push(arr[i]);
	}
	cout << "\nОчередь А: " << a << endl;
	cout << "Очередь пуста? Ответ: " << a.IsEmpty() << endl;
	cout << "Очередь заполнена? Ответ: " << a.IsFull() << endl;
	cout << "Количество элементов: " << a.Count() << endl;
	TQueue<int> b(a);
	cout << "\nСкопирована очередь А в очередь В" << endl;
	cout << "Извлечем элемент из В: " << b.Pop() << endl;
	cout << "Очередь B: " << b << endl;
	b.Push(item1);
	cout << "Добавим элемент " << item1 << " в новую очередь В.";
	cout << "\nОчередь В: " << b << endl;
	TQueue<int> c(size);
	c.Push(arr[1]), c.Push(arr[2]), c.Push(item1);
	cout << "Создадим очередь С добавим туда элементы: " << arr[1] << ' ' << arr[2] << ' ' << item1 << endl;
	cout << "Очередь C: " << c << endl;
	cout << "Очередь C равна очереди B? Ответ: " << (c == b) << endl;
	b.Clear();
	cout << "Очередь В очищена." << endl;
	cout << "Очередь В: " << b << endl;
	c = a;
	cout << "Очереди С и присвоим очередь А." << endl;
	cout << "Очередь C: " << c << endl;
	cout << "Будем добавлять и удалять элементы из C:" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Извлекли элемент: " << c.Pop() << endl;
		c.Push(i);
		cout << "Добавили элемент: " << i << endl;
		cout << "Состояние: " << c << endl;
		cout << endl;
	}
	
	

}

int main()
{
	setlocale(LC_ALL, "ru");

	Test_Queue();

	cout << endl;
	system("pause");
}