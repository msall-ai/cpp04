/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 04:39:13 by msall             #+#    #+#             */
/*   Updated: 2025/11/01 04:39:16 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "🧠 Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = "";
}

Brain::Brain(const Brain &other) {
    std::cout << "🧠 Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    std::cout << "🧠 Brain copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "🧠 Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}
