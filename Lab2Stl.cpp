#include <iostream>
#include <vector>
using namespace std;

vector <int> sum_of_vector(vector <int> first, vector <int> second);
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
    for (int i = 0; i < length; i++) {
        first.push_back(input_func());
    }
    cout << "Enter the elements of second vector: ";
    for (int i = 0; i < length; i++) {
        second.push_back(input_func()); 
    }
    cout << "Result: ";
    result = sum_of_vector(first, second);
    for (size_t i = 0; i < length; i++) {
        cout << result.at(i) << " ";
    }
    return 0;
}

vector <int> sum_of_vector(vector <int> first, vector <int> second) 
{
    vector <int> result;
    for(size_t i = 0; i < first.size(); ++i)
        result.push_back(first.at(i) + second.at(i));
    return result;
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