// SWAP MIN AND MAX NO OF AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int smallest = +999999;
    int largest = -999999;

    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Before:" << endl;
    cout << "Smallest is:" << smallest;
    cout << endl;
    cout << "Largest is:" << largest;
    cout <<"\n\n";
    swap(smallest, largest);
    cout << "After:" << endl;
    cout << "Smallest is:" << smallest;
    cout << endl;
    cout << "Largest is:" << largest;

    return 0;
}