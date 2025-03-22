//Copy 2D Vector to 2D List
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Function template
template <typename T>
void Copy_Vector_To_List_2d(const vector<vector<T>>& V, list<list<T>>& L_2d)
{
    for (const auto& row : V)
    {
        list<T> temp_list;
        for (const auto& elem : row)
        {
            temp_list.push_back(elem);
        }
        L_2d.push_back(temp_list);
    }
}

// Display function template (for both vector<vector> and list<list>)
template <typename T>
void Display_2D(const T& container)
{
    for (const auto& row : container)
    {
        for (const auto& elem : row)
        {
            cout << " " << elem;
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> V = { {1, 2}, {4, 5, 6}, {7, 8, 9} };
    list<list<int>> L_2d;

    cout << "Vector:" << endl;
    Display_2D(V);

    Copy_Vector_To_List_2d(V, L_2d);

    cout << "List:" << endl;
    Display_2D(L_2d);

    return 0;
}
