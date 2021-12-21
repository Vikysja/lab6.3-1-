#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* list, const int size, int Min, int Max)
{
    for (int i = 0; i < size; i++)
        list[i] = (Max - Min) * rand() / RAND_MAX + Min; // де Min - ліва межа, а Max - права
}

// Сортування масиву
void Sort(int* list, const int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
            }
        }
    }
}

// Вивід масиву
void Print(int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << list[i];
    cout << endl;
}



template <class T1, class T2, class T3>
void Create(T1* list, const int size, T2 Min, T3 Max)
{
    for (int i = 0; i < size; i++)
        list[i] = (Max - Min) * rand() / RAND_MAX + Min; // де Min - ліва межа, а Max - права
}

template <class T>
void Sort(T* list, const int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
            }
        }
    }
}

template <class T>
void Print(T* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << fixed << setprecision(2) << setw(5) << list[i];
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    srand((unsigned)time(NULL));

    //srand(1); // для перевірки правильності способів

    const int n = 10;

    int a[n];

    int Min = 1;
    int Max = 10;

    cout << "Iтерацiйний спосiб" << endl;
    cout << endl;

    Create(a, n, Min, Max);
    cout << "Before: "; Print(a, n);
    Sort(a, n);
    cout << "Sorted: "; Print(a, n);


    cout << "\n\nIтерацiйний спосiб (template)" << endl;
    double b[n];

    Create(b, n, 0.1, 1.9);
    cout << "Before: "; Print(b, n);
    Sort(b, n);
    cout << "Sorted: "; Print(b, n);
}