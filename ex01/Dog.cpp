/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:22:34 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:22:35 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) {
    type = other.type;
    std::cout << "🐶 Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain; // deep copy
        type = other.type;
    }
    std::cout << "🐶 Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "🐶 Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "🐶 Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
