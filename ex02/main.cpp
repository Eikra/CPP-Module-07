/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:25:11 by iecharak          #+#    #+#             */
/*   Updated: 2023/11/18 22:17:27 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main()
// {
//     try {
//         // Test default constructor
//         Array<int> arr1;
//         std::cout << "Default constructor: Size = " << arr1.size() << std::endl;

//         // Test parameterized constructor
//         Array<int> arr2(5);
//         std::cout << "Parameterized constructor: Size = " << arr2.size() << std::endl;

//         // Test copy constructor
//         Array<int> arr3 = arr2;
//         std::cout << "Copy constructor: Size = " << arr3.size() << std::endl;

//         // Test operator[]
//         for (unsigned int i = 0; i < arr2.size(); i++) {
//             arr2[i] = i * 2;
//             std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
//         }

//         // Test assignment operator
//         Array<int> arr4;
//         arr4 = arr2;
//         std::cout << "Assignment operator: Size = " << arr4.size() << std::endl;

//         // Test const-correctness of operator[]
//         const Array<int> constArr = arr2;
//         for (unsigned int i = 0; i < constArr.size(); i++) {
//             std::cout << "constArr[" << i << "] = " << constArr[i] << std::endl;
//         }

//         // Test out-of-bounds exception
//         // Uncomment the line below to test the exception
//         // std::cout << arr2[10] << std::endl;

//     } catch (const std::exception& e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

// %.o: %.c
// 	$(CC) $(CPPFLAGS) -c $< -o $@
// 	ar rcs $(NAME) $@