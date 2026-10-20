#include <algorithm>
#include <chrono>
#include <iostream>
#include <utility>
#include <vector>

void fill_random(std::vector<int>& values, int max_value)
{
    std::srand(0);
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = std::rand() % max_value;
    }
}

void selection_sort(std::vector<int>& data)
{
    for (int i = 0; i < data.size() - 1; i++) {

        // Find the smallest value starting at i
        int min_index = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data.at(j) < data.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(data.at(min_index), data.at(i));
    }
}

void print_vector(std::vector<int> v)
{
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

int main()
{
    const int MAX = 1'000;
    std::vector<int> a(100'000);
    fill_random(a, MAX);
    // print_vector(a);
    std::cout << "Is sorted? " << std::is_sorted(a.begin(), a.end()) << "\n";

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(a);
    // std::sort(a.begin(), a.end());
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1'000'000.0;
    std::cout << "Total time: " << total_time << " seconds \n";

    std::cout << "Is sorted? " << std::is_sorted(a.begin(), a.end()) << "\n";
    // print_vector(a);
    return 0;
}
