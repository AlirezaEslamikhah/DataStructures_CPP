#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int size ,append, mas[100];
int main()
{
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + size);
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    if(std::is_sorted(mas,mas+size))
    {
        cout<<"is_sorted";
    }
    else
    {
        cout<<"is_not_sorted";
    }
    std::max_element(mas,mas+size);
    cin >> append;
    for (size_t i = 0; i < size; i++)
    {
        if (append > mas[i])
        {
            for (size_t j = i; j< size; j++)
            {
                vector<int> arr;
            }
            
        }
        
    }
    
}