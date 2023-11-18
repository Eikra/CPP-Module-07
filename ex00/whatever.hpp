/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:12:09 by iecharak          #+#    #+#             */
/*   Updated: 2023/11/15 16:46:21 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void    swap(T &val1, T &val2)
{
    T   tmp = val1;
    
    val1 = val2;
    val2 = tmp;
}

template <class T>
T       min(T &val1, T &val2)
{
    if (val1 < val2)
        return val1;
    return val2;
}

template <class T>
T       max(T &val1, T &val2)
{
    if (val1 > val2)
        return val1;
    return val2;
}

#endif