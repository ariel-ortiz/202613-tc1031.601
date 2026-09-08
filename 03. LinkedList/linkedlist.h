#pragma once

#include <iostream>

template<typename T>
class LinkedList {

public:

    // Complexity: O(1)
    LinkedList()
    {
        _sentinel = new Node;
        _sentinel->next = _sentinel;
        _sentinel->prev = _sentinel;
    }

    void insert_front(T value)
    {
        Node* new_node = new Node;
        new_node->value = value;
        new_node->next = _sentinel->next;
        new_node->prev = _sentinel;
        _sentinel->next->prev = new_node;
        _sentinel->next = new_node;
        _size++;
    }

private:

    struct Node {
        T value;
        Node* prev;
        Node* next;
    };

    Node* _sentinel = nullptr;
    int _size = 0;
};
