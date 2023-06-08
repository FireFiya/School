#include <iostream> 
using namespace std;
template<typename T>
void InsertionSort(T list[], int listSize){
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}
template<typename T>
T BinarySearch(T list[], T key, int listSize){
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key > list[mid])
            low = mid + 1;
        else
            return mid;
    }

    return -1;
}

int main() {
    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    int x, y, z;
    double a, b, c;
    cin >> x >> y >> z;
    cout << "From: ";
    for (int i = 0; i < sizeof(list1) / sizeof(list1[0]); i++) {
        cout << list1[i];
        if (i < sizeof(list1) / sizeof(list1[0]) - 1) {
            cout << ",";
        }
        else {
            cout << endl;
        }
    }
    InsertionSort(list1, sizeof(list1) / sizeof(list1[0]));
    cout << "To: ";
    for (int i = 0; i < sizeof(list1) / sizeof(list1[0]); i++) {
        cout << list1[i];
        if (i < sizeof(list1) / sizeof(list1[0]) - 1) {
            cout << ",";
        }
        else {
            cout << endl;
        }
    }
    cout << x << " at " << BinarySearch(list1, x, sizeof(list1) / sizeof(list1[0])) << endl << y << " at " << BinarySearch(list1, y, sizeof(list1) / sizeof(list1[0])) << endl << z << " at " << BinarySearch(list1, z, sizeof(list1) / sizeof(list1[0])) << endl << endl << endl;
    cin >> a >> b >> c;
    cout << "From: ";
    for (int i = 0; i < sizeof(list2) / sizeof(list2[0]); i++) {
        cout << list2[i];
        if (i < sizeof(list2) / sizeof(list2[0]) - 1) {
            cout << ",";
        }
        else {
            cout << endl;
        }
    }
    InsertionSort(list2, sizeof(list2) / sizeof(list2[0]));
    cout << "To: ";
    for (int i = 0; i < sizeof(list2) / sizeof(list2[0]); i++) {
        cout << list2[i];
        if (i < sizeof(list2) / sizeof(list2[0]) - 1) {
            cout << ",";
        }
        else {
            cout << endl;
        }
    }
    cout << a << " at " << BinarySearch(list2, a, sizeof(list2) / sizeof(list2[0])) << endl << b << " at " << BinarySearch(list2, b, sizeof(list2) / sizeof(list2[0])) << endl << c << " at " << BinarySearch(list2, c, sizeof(list2) / sizeof(list2[0])) << endl << endl << endl;
    system("pause");
    return 0;
}