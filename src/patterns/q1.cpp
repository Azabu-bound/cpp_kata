/*
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *

*/
#include <iostream>


void nForest(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
}


int main()
{
    nForest(1);
    nForest(3);
    nForest(6);
    return 0;
}