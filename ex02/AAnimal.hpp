/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:40:36 by msall             #+#    #+#             */
/*   Updated: 2025/11/02 22:15:06 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal &other);
    virtual ~AAnimal();

    AAnimal &operator=(const AAnimal &other);

    std::string getType() const;
    void setType(const std::string &t);

    virtual void makeSound() const = 0;
};

#endif