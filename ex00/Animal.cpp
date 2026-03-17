/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:16:09 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:16:11 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "🐾 Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
    std::cout << "🐾 Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
        type = other.type;
    std::cout << "🐾 Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "🐾 Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "🐾 Some generic animal sound..." << std::endl;
}
