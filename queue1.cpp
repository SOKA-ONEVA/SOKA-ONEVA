#include <iostream>

using namespace std;
#define MAX 5

int rear = -1;
int front = -1;
int queue[MAX];

//Fucntion prototypes

void insertFront(int item);
bool isEmpty();
bool isFull();
void enqueue(int item);
void display();
int dequeue();

int main()
{

	char op;
	int value;
	do {
		cout << "what operation do you want to perfrom: ?" << endl;
		cout << "enter operation" << endl;
		cout << "1.enque" << endl;
		cout << "2.dequeue" << endl;
		cout << "3.print queue: " << endl;
		cout << "4.clear screen" << endl;
		cout << "5.exit" << endl;
		cin >> op;
		system("cls");

		switch (op)
		{
		case '1':
			cout << "enter element to add to the queue: " << endl;
			cin >> value;
			enqueue(value);
			break;
		case '2':
			cout << dequeue() << " was popped " << endl;
			break;
		case '3':
			display();
			break;
		case '4':
			system("cls");
			break;

		}
	} while (op != 5);

}


void insertFront(int item)
{
	if (isEmpty)
	{
		front = rear = 0;
		queue[front] = item;
	}
	else
	{
		front = front - 1;
		queue[front] = item;
	}
}

bool isEmpty()
{
	if (front == -1 && rear == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	if (front == 0 && rear == MAX - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enqueue(int item)
{
	if (isFull())
	{
		cout << "the queue is full: " << endl;
	}
	else if (isEmpty())
	{
		front = rear = 0;
		queue[rear] = item;
	}
	else {
		rear++;
		queue[rear] = item;
	}
}


void display()
{

	cout << "the queue vaues are" << endl;
	for (int i = 0; i <= MAX - 1; i++)
	{
		cout << queue[i] << endl;
	}
}
int dequeue()
{
	if (front == rear)
	{
		int x = queue[front];
		queue[front] = 0;
		front = -1;
		rear = -1;
		return x;
	}
	else {
		int a = queue[front];
		queue[front] = 0;
		front++;
		return a;
	}
}
