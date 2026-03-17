/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:16:59 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:17:01 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    *this = other;
    std::cout << "🐱 Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    Animal::operator=(other);
    std::cout << "🐱 Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "🐱 Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "🐱 Meow meow!" << std::endl;
}
