#include <iostream>
using namespace std;

int key[10];

void insert(int a) {
    int index = a % 10;
    int i = 1;
    while (key[index] != 0) {
        index = (index + i * i) % 10;
        i++;
    }
    key[index] = a;
}

int search(int a) {
    int index = a % 10;
    int i = 1;
    while (key[index] != a && key[index] != 0) {
        index = (index + i * i) % 10;
        i++;
    }
    if (key[index] == a)
        return index;
    else
        return -1; // Element not found
}

void remove(int a) {
    int index = search(a);
    if (index != -1) {
        key[index] = 0;
        cout << "Successfully deleted." << endl;
    } else {
        cout << "Element not found." << endl;
    }
}

void showTable() {
    cout << "Hash Table:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (key[i] != 0)
            cout << "Index " << i << ": " << key[i] << endl;
        else
            cout << "Index " << i << ": Empty" << endl;
    }
}

int main() {
    int num;
    cout << "Choose action for the number: \n1. Insert\n2. Search\n3. Delete\n4. Show Table\n5. Exit\n";

    do {
        cout << "Enter your choice: ";
        cin >> num;

        switch (num) {
            case 1: {
                int b;
                cout << "Enter number you want to insert in hash table: ";
                cin >> b;
                insert(b);
                break;
            }
            case 2: {
                int b;
                cout << "Enter number you want to search in hash table: ";
                cin >> b;
                int index = search(b);
                if (index != -1)
                    cout << "Element found at index: " << index << endl;
                else
                    cout << "Element not found." << endl;
                break;
            }
            case 3: {
                int b;
                cout << "Enter number you want to delete from hash table: ";
                cin >> b;
                remove(b);
                break;
            }
            case 4:
                showTable();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }

    } while (num != 5);

    return 0;
}
