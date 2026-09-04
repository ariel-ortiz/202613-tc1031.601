#include <iostream>

struct Node {
    int value;
    Node* next;
};

// Complexity: O(1)
void add_front(Node*& list, int x)
{
    list = new Node {x, list};
}

// Complexity: O(N)
void display(Node* list)
{
    std::cout << "List: ";
    while (list) { // (list != nullptr) {
        std::cout << list->value << " ";
        list = list->next;
    }
    std::cout << "\n";
}

// Complexity: O(N)
int size(Node* list)
{
    int result = 0;
    while (list) {
        result++;
        list = list->next;
    }
    return result;
}

// Complexity: O(N)
void add_back(Node*& list, int x)
{
    Node* new_node = new Node {x, nullptr};
    if (!list) {
        list = new_node;
        return;
    }
    Node* p = list;
    while (p->next) {
        p = p->next;
    }
    p->next = new_node;
}

int main()
{
    Node* start1 = nullptr;
    add_front(start1, 5);
    add_front(start1, 3);
    add_front(start1, 1);
    display(start1);
    std::cout << "size of start1 = " << size(start1) << "\n";
    Node* start2 = nullptr;
    display(start2);
    std::cout << "size of start2 = " << size(start2) << "\n";
    add_back(start2, 1);
    add_back(start2, 2);
    add_back(start2, 3);
    add_back(start2, 4);
    add_front(start2, 5);
    add_front(start2, 6);
    display(start2);
    std::cout << "size of start2 = " << size(start2) << "\n";
    return 0;
}
