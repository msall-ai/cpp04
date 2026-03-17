/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:17:54 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 01:17:56 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\n=== 🐾 Correct Polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nType: " << dog->getType() << std::endl;
    std::cout << "Type: " << cat->getType() << std::endl;

    cat->makeSound(); // Meow
    dog->makeSound(); // Woof
    meta->makeSound(); // Generic

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n=== 🚫 Wrong Polymorphism ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nType: " << wrongCat->getType() << std::endl;

    wrongCat->makeSound(); // ❌ WrongAnimal sound instead of WrongCat
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
