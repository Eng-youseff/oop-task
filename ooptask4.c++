
/*Q1 : Write a program that dynamically allocates an 
array ofintegers of size N, 
where N is entered by the user. The programshould then 
ask the user to enter N integers and store them inthe array. Finally,
 the program should print out the sum of allthe integers in the array.*/



#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int *arr = new int[N];

    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all integers in the array: " << sum << endl;

    delete[] arr;
    return 0;
}