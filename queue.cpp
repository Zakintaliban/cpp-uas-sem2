#include <iostream>
using namespace std;

struct Queue {
	int front, back, dataQ[10]; 
}queue;

void printQueue() {
		cout << "\nqueue : ";
		for (int i = queue.front; i < queue.back; i++) 
			cout << queue.dataQ[i] << ((queue.back-1 == i) ? "" : ",");
			cout << endl;
}

void enqueue() {
		int data;
		cout << "Input Data : ";
        cin >> data;
		queue.dataQ[queue.back] = data;
		queue.back++;
		cout << "Data added" << endl;
		printQueue();
}

void dequeue() {
		cout << "Fetching data \"" << queue.dataQ[queue.front] << "\"..." << endl;
		for (int i = queue.front; i < queue.back; i++)
			queue.dataQ[i] = queue.dataQ[i + 1];
		queue.back--;
		printQueue();
}

int main() {
	int choose;
	do
	{
		cout<< "\n\t WARNING\nOnly accept 10 number\nMain Menu\n\t(1) Enqueue \n\t(2) Dequeue\n\t(3) Exit \n\nPress number(1/2/3) : ";
        cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "thank you for using the program";
			break;
		}
	} while (choose !=3);
	return 0;
}

