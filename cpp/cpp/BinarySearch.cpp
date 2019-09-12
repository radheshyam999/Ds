#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, search, SearchItreation, num;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> SearchItreation;
    int mid = SearchItreation / 2;

    while (true)
    {
        cin >> search;
        if (arr[mid] < search)
        {
            ++mid;
        }
        else if (arr[mid] > search)
        {
            --mid;
        }
        else
        {
            cout << mid;
            return 1;
        }
        if (mid > SearchItreation)
        {
            return -1;
        }
    }

    return -1;
}
