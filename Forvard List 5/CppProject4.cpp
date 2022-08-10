// CppProject4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
Реализация односвязного списка
SimpleCode # 133
https://www.youtube.com/watch?v=SajrPhE6FoQ&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=153
*/
#include"pch.h"

template<typename U> 
class MyList
{
private:
	


	template<typename T>
	class Node
	{
	public:
		T data;
		Node<T>* pNext;
		Node(T data = T(), Node* pNext = nullptr) : data(data), pNext(pNext) {}

		~Node()
		{
			cout << "Node destructor is invoked\n";
		}
	};
	Node<U>* Head;
	int Size;

public:
	MyList();
	~MyList();
	void PushBack(U data);

	U getFirstData() { return Head->data; }
	U getSize() { return Size; }
	U& operator[](const int index);
	void PopFront();
	void print();
	void clear();

	void PushFront(U data);
	void PopBack();
	void Insert(U data, int index);
	void RemoveAt(int index);
	
};

template<typename T> 
MyList<T>::MyList()
{
	Size = 0;
	Head = nullptr;

}


template<typename T>
MyList<T>:: ~MyList()
{
	clear();
	cout << "MyList destructor has been inoked\n";
}

template<typename T>
void MyList<T> ::
PushBack(T data)
{
	if (Head == nullptr)
	{
		Head = new Node<T>(data);
		
	}
	else
	{
		Node<T>* current = Head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;

		}
		current->pNext = new Node<T>(data);
		

	}
	Size++;
}

template<typename T> 
T& MyList<T>:: operator[](const int index)
{
	int counter{ 0 };
	Node<T>* current = Head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}

}

template<typename T>
void MyList<T> :: PopFront()
{
	Node<T>* tmp = Head;
	Head = Head->pNext;
	delete tmp;
	Size--;

}

template<typename T>
void MyList<T>::print()
{
	if (Head == nullptr)
	{
		cout << "List is empty\n";
		return;
	}
	else
	{
		Node<T>* tmp = Head;
		while (tmp != nullptr)
		{
			cout << tmp->data << endl;
			tmp = tmp->pNext;

		}
	}
	//for (size_t i = 0; i < Size; i++)
	//{
	//	cout << Head->data << endl;

	//}
}

 
template<typename T>

void MyList<T>::clear()
{
	while (Size)
	{
		PopFront();
	}

}




template<typename T> 
void MyList<T> ::PushFront(T data)
{
	Head = new Node<T>(data, Head);
	Size++;
}

	template<typename T>
	void MyList<T>::Insert(T data, int index)
	{
		if (index == 0)
		{
			PushFront(data);
		}
		else
		{
			Node<T>* previous = Head;
			for (size_t i = 0; i < index -1; i++)
			{
				previous = previous->pNext;
			}
			Node<T>* newNode = new Node<T>(data, previous->pNext);
			previous->pNext = newNode;

		}

			Size++;
	}



	template<typename T>
	void MyList<T>::RemoveAt(int index)
	{
		if (index == 0)
		{
			PopFront();
		}
		else
		{
			Node<T>* previous = Head;
			for (size_t i = 0; i < index - 1; i++)
			{
				previous =  previous->pNext ;
			}
			Node<T>* forRemove = previous->pNext;
			previous->pNext = forRemove->pNext;
			delete forRemove;
			Size--;
		}
	}



	template<typename T>
	void MyList<T>::PopBack()
	{
		RemoveAt(Size - 1);
	}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyList<int> mList;
	mList.PushBack(12);
	mList.PushBack(15);
	mList.PushBack(17);
	mList.PushBack(22);
	mList.print();
	//mList.clear();l
	cout << "+++++++++++++++++++++++++++++\n";
	//mList.PopFront();
	//mList.PopFront();
	
	mList.print();
	/*mList.clear();
	mList.print();*/

	cout << "After PushFront +++++++++++++++++++++++++++++\n";
	mList.PushFront(9);
	mList.print();



	cout << "After Insert +++++++++++++++++++++++++++++\n";
	mList.Insert(34, 3);
	//mList.PopFront();
	mList.print();


	cout << "After removeAt +++++++++++++++++++++++++++\n";
	mList.RemoveAt(1);
	mList.print();

	cout << "After PopBack +++++++++++++++++++++++++++\n";

	mList.PopBack();
	mList.print();



	system("pause");

	return 0;
}


