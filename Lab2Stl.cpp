#include <iostream>
#include <vector>
using namespace std;

int sum_of_vector(int first, int second);
int input_func();

int main()
{
    cout << "Enter the length of vectors: ";
    int length;
    cin >> length;
    vector <int> first;
    vector <int> second;
    vector <int> result;
    cout << "Enter the elements of first vector: ";
    for (int i = 0; i < length; ++i) {
        first.push_back(input_func());
    }
    cout << "Enter the elements of second vector: ";
    for (int i = 0; i < length; ++i) {
        second.push_back(input_func()); 
    }
    cout << "Result: ";
    for (int i = 0; i < length; ++i) 
    {
        result.push_back(sum_of_vector(first.at(i), second.at(i)));
    }
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}

int sum_of_vector(int first, int second) 
{
    return first + second;
}

int input_func()
{
    int input;
    while (true) {
        cin >> input;
        if (!cin) {
            cout << "Incorrect input! Try again: ";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    return input;
}
