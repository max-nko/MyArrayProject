#include <iostream>
#include <iomanip>
using namespace std;

// f9 — знайти індекс найменшого додатного елемента
int f9(int arr[], int n) {
    int minPos = -1;

    for (int i = 0; i < n; i++) {              
        if (arr[i] > 0) {
            if (minPos == -1 || arr[i] < arr[minPos]) {
                minPos = i;
            }
        }
    }

    return minPos;
}

// f16 — видалити всі нулі зі списку
void f16(int arr[], int &n) {
    int write = 0;

    for (int i = 0; i < n; i++) {              
        if (arr[i] != 0) {
            arr[write] = arr[i];
            write++;
        }
    }

    n = write;   
}

int main() {
    int n;

    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int arr[100];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Демонстрація роботи f9
    int pos = f9(arr, n);
    if (pos == -1)
        cout << "Немає додатних елементів.\n";
    else
        cout << "Найменший додатний елемент: " << arr[pos]
             << " (індекс " << pos << ")\n";

    // Демонстрація роботи f16
    f16(arr, n);

    cout << "Масив без нулів: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
