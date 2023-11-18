/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:43:50 by iecharak          #+#    #+#             */
/*   Updated: 2023/11/18 21:44:24 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class   Array
{
    private :
    T           *array;
    unsigned int Size;

    public :
    Array():Size(0)
    {
        array = NULL;
    }

    Array(int n)
    {
        if (n < 0)
            throw std::invalid_argument("Invalid array size");
        Size = n;
        if(!n)
            array = NULL;
        else 
            array = new T[n];
    }

    Array(const Array &src)
    {
        Size = src.size();
        if (src.size())
            array = new T[src.size()];
        else 
            array = NULL;
        for (unsigned int i = 0; i < src.size(); i++)
            this->array[i] = src.array[i];
    }

    T &operator[](int i) const
    {
        if (i < 0 || i >= (int)Size)
            throw std::invalid_argument("Index is out of bounds");
        return array[i];
    }

    Array   &operator=(const Array &src)
    {
        if(this != &src)
        {
            if (Size)
                delete[] array;
            Size = src.size();
            if (src.size())
                array = new T[src.size()];
            else 
                array = NULL;
            for (unsigned int i = 0; i < src.size(); i++)
                this->array[i] = src.array[i];
        }
        return *this;
    }

    unsigned int size()const
    {
        return Size;
    }

    ~Array()
    {
        if (Size)
            delete[] array;
    }
};

#endif