/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:44:01 by msall             #+#    #+#             */
/*   Updated: 2025/11/09 22:17:05 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // AAnimal a; // ❌ interdit car abstrait

    Dog d;
    Cat c;

    d.makeSound(); // Woof Woof!
    c.makeSound(); // Meow Meow!

    // Tester le Brain
    d.getBrain()->setIdea(0, "I want a bone");
    c.getBrain()->setIdea(0, "I want milk");

    std::cout << "Dog idea: " << d.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat idea: " << c.getBrain()->getIdea(0) << std::endl;

    // Tester la copie
    Dog d2 = d;
    std::cout << "Copied Dog idea: " << d2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
