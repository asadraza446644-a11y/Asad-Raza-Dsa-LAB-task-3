#include <iostream>
using namespace std;

const int CAPACITY = 10;

// ---------- FUNCTIONS (above main) ----------
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "   (size = " << size << ")" << endl;
}

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {      // check box by box from index 0
        if (arr[i] == key)
            return i;                     // found: return the index
    }
    return -1;                            // not found
}

// ---------- MAIN ----------
int main() {
    int arr[CAPACITY] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Array: ";
    display(arr, size);

    int result = linearSearch(arr, size, 40);
    if (result == -1)
        cout << "40 not found\n";
    else
        cout << "40 found at index " << result << endl;

    result = linearSearch(arr, size, 77);
    if (result == -1)
        cout << "77 not found\n";
    else
        cout << "77 found at index " << result << endl;

    return 0;
}
