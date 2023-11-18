/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:58:46 by iecharak          #+#    #+#             */
/*   Updated: 2023/11/15 17:36:40 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template  <class T>
void    f(T elmnt)
{
    
    std::cout << elmnt << std::endl;
}

template  <class T>
void    iter(T *array, int length, void *f(T))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

#endif