#include <iostream>
using namespace std;

struct Stack {
	int top, dataS[10];
}stack;


void move(){
	    stack.top = -1;
}

void printStack() {
    cout << "\nStack : ";
		for (int i = stack.top; i >= 0; i--)
			cout << stack.dataS[i] << ((i == 0) ? "" : ",");
            cout << endl;
}

void push() {
        stack.top++;
        cout << "\nInput data = "; cin >> stack.dataS[stack.top];
        cout << "Data " << stack.dataS[stack.top] << " pushed to stack"<<endl;
        printStack();
}

void pop() {
        cout << "\nData "<<stack.dataS[stack.top]<<" popped"<<endl;
        stack.top--;
        printStack();
}


int main() {
	int choose;
	move();
	do {
		cout << "\n\t WARNING\nOnly accept 10 number\nMain Menu\n\t(1) push \n\t(2) pop\n\t(3) Exit \n\nPress number(1/2/3) : ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
        cout << "thank you for using the program" << endl;
			break;
		}
	} while (choose!=3);
    return 0;
}
