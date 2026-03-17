/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:16:34 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:16:36 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    *this = other;
    std::cout << "🐶 Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    Animal::operator=(other);
    std::cout << "🐶 Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "🐶 Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "🐶 Woof woof!" << std::endl;
}
