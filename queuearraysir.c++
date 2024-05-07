
#include <iostream>
#define SIZE 10

int inp_arr[SIZE];
int Rear = -1;
int Front = -1;

void enqueue();
void dequeue();
void show();

int main() {
    int ch;
    while (true) {
        std::cout << "1. Enqueue Operation\n";
        std::cout << "2. Dequeue Operation\n";
        std::cout << "3. Display the Queue\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice of operations: ";
        std::cin >> ch;
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                std::cout << "Incorrect choice\n";
        }
    }
    return 0;
}

void enqueue() {
    int insert_item;
    if (Rear == SIZE - 1)
        std::cout << "Overflow\n";
    else {
        if (Front == -1)
            Front = 0;
        std::cout << "Element to be inserted in the Queue: ";
        std::cin >> insert_item;
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}

void dequeue() {
    if (Front == -1 || Front > Rear) {
        std::cout << "Underflow\n";
        return;
    } else {
        std::cout << "Element deleted from the Queue: " << inp_arr[Front] << std::endl;
        Front = Front + 1;
    }
}

void show() {
    if (Front == -1)
        std::cout << "Empty Queue\n";
    else {
        std::cout << "Queue:\n";
        for (int i = Front; i <= Rear; i++)
            std::cout << inp_arr[i] << " ";
        std::cout << std::endl;
    }
}

