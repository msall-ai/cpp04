/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:17:44 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:17:46 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "🚫 WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    *this = other;
    std::cout << "🚫 WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    WrongAnimal::operator=(other);
    std::cout << "🚫 WrongCat copy assignment called" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "🚫 WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "🚫 Meow??? (but not really...)" << std::endl;
}
