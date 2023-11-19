/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:13:06 by iecharak          #+#    #+#             */
/*   Updated: 2023/11/15 17:31:22 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Animal
{
    public:
    const std::string name;
    Animal(std::string str): name(str){}
};

std::ostream &operator<<(std::ostream &out, const Animal &animal)
{
    out << animal.name;
    return out;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    iter(array, 5 , f);

    std::string str[5] = {"hello", "world", "first", "program"};
    iter(str, 4 , f);

    Animal animals[3] = {Animal("cat"), Animal("dog"), Animal("elephant")};
    iter(animals, 3, f);
}