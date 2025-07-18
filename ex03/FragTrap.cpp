/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:40:31 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:45:17 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hit_points = def_hit_points;
    energy_points = def_energy_points;
    attack_damage = def_attack_damage;
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hit_points = def_hit_points;
    energy_points = def_energy_points;
    attack_damage = def_attack_damage;
    std::cout << "FragTrap: String constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hit_points == 0) {
        std::cout
            << "FragTrap: " << name
            << " is already destroyed and cannot attack!"
            << std::endl;
    } else if (energy_points > 0) {
        energy_points--;
        std::cout
            << "FragTrap: " << name << " attacks " << target
            << ", causing " << attack_damage << " points of damage!"
            << std::endl;
        // target.takeDamage(attack_damage);
    } else {
        std::cout
            << "FragTrap: " << name << " is out of energy and cannot attack!"
            << std::endl;
    }
}

void FragTrap::highFivesGuys() const {
    std::cout
        << "FragTrap: " << name << " requests a positive high five!"
        << std::endl;
}
