#include <iostream>

int steps = 0;

void hanoi(int n, char origin, char destination, char aux)
{
    // Base case
    if (n == 1) {
        steps++;
        std::cout << steps << ".- Move disc " << n << " from " << origin << " to " << destination << "\n";
        return;
    }

    // Recursive steps

    // Step #1
    hanoi(n - 1, origin, aux, destination);

    // Step #2
    steps++;
    std::cout << steps << ".- Move disc " << n << " from " << origin << " to " << destination << "\n";

    // Step #3
    hanoi(n - 1, aux, destination, origin);
}

int main()
{
    hanoi(10, 'A', 'C', 'B');
    return 0;
}
