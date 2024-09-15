#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];

    cout << ": ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    int positive_count = 0, negative_count = 0, zero_count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            ++positive_count;
        else if (arr[i] < 0)
            ++negative_count;
        else
            ++zero_count;
    }

    int* positives = new int[positive_count];
    int* negatives = new int[negative_count];
    int* zeros = new int[zero_count];

    int p_idx = 0, n_idx = 0, z_idx = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            positives[p_idx++] = arr[i];
        else if (arr[i] < 0)
            negatives[n_idx++] = arr[i];
        else
            zeros[z_idx++] = arr[i];
    }

    cout << "Pozitive: ";
    for (int i = 0; i < positive_count; ++i)
        cout << positives[i] << " ";
    cout << endl;

    cout << "Negative: ";
    for (int i = 0; i < negative_count; ++i)
        cout << negatives[i] << " ";
    cout << endl;

    cout << "None: ";
    for (int i = 0; i < zero_count; ++i)
        cout << zeros[i] << " ";
    cout << endl;

    delete[] arr;
    delete[] positives;
    delete[] negatives;
    delete[] zeros;

    return 0;
}
