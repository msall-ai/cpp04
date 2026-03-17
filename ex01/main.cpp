/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:22:09 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:22:12 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== Testing makeSound ===" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        animals[i]->makeSound();

    std::cout << "\n=== Deleting animals ===" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        delete animals[i];

    std::cout << "\n=== Testing deep copy ===" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Eat bones");
    Dog dog2 = dog1; // deep copy
    dog2.getBrain()->setIdea(0, "Chase cats");

    std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
