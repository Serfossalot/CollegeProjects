#include <iostream>
#include <list>

template <typename T>
void List_Insert(list<T>& lst, int pos, const T& value) {
    if (pos < 0 || pos > lst.size()) {
        cout << "Error: Invalid position!" << endl;
        return;
    }
    auto it = lst.begin();
    advance(it, pos);
    lst.insert(it, value);
}

int main() {
    list<int> intList = { 10, 20, 30, 40, 50 };
    List_Insert(intList, 2, 25);
    for (int num : intList) cout << num << " ";
    cout << endl;

    list<char> charList = { 'A', 'B', 'C', 'D' };
    List_Insert(charList, 1, 'X');
    for (char ch : charList) cout << ch << " ";
    cout << endl;

    list<int> emptyList;
    List_Insert(emptyList, 0, 99);
    for (int num : emptyList) cout << num << " ";
    cout << endl;

    List_Insert(intList, -1, 100);
    List_Insert(intList, 100, 100);

    return 0;
}
