/* Swap
 *
 * Description
 *
 * Program swaps the input integers in a way that when first integer is called
 * it has the value of the second integer and the second integer has the value
 * of the first integer.
 *
 * Writer of the program
 *
 * Name: EILeh
 */

#include <cstdlib>
#include <iostream>

// Stores the information to variables first_number and second_number and then
// new values to a and b.
void swap(int& b, int& a)
{
    int first_number = a;
    int second_number = b;

    a = second_number;
    b = first_number;

}


#ifndef UNIT_TESTING
int main()
{
    std::cout << "Enter an integer: ";
    int i = 0;
    std::cin >> i;

    std::cout << "Enter another integer: ";
    int j = 0;
    std::cin >> j;

    swap(i, j);
    std::cout << "The integers are " << i << " and " << j << std::endl;

    return EXIT_SUCCESS;
}
#endif
