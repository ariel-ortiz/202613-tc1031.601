#include <iostream>
#include <deque>
#include <forward_list>

int main()
{
    std::deque<char> my_deque;
    my_deque.push_front('a');
    my_deque.push_front('b');
    my_deque.push_front('c');
    my_deque.push_back('d');
    my_deque.push_back('e');
    my_deque.push_back('f');

    my_deque.pop_front();
    my_deque.pop_front();
    my_deque.pop_back();

    std::cout << "my_deque.size() = " << my_deque.size() << "\n";
    for (char c : my_deque) {
        std::cout << c << ' ';
    }
    std::cout << "\n";
    std::cout << "my_deque.max_size() = " << my_deque.max_size() << "\n";

    std::forward_list<int> my_forward_list {4, 8, 15, 16};
    my_forward_list.push_front(23);
    my_forward_list.push_front(42);
    for (int i : my_forward_list) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    my_forward_list.pop_front();
    my_forward_list.pop_front();
    my_forward_list.pop_front();
    std::cout << "my_forward_list.front() = " << my_forward_list.front() << "\n";
    std::cout << "my_forward_list.max_size() = " << my_forward_list.max_size() << "\n";

    return 0;
}
