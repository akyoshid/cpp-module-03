/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:04:32 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:34:45 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hit_points = def_hit_points;
    energy_points = def_energy_points;
    attack_damage = def_attack_damage;
    std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hit_points = def_hit_points;
    energy_points = def_energy_points;
    attack_damage = def_attack_damage;
    std::cout << "ScavTrap: String constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hit_points == 0) {
        std::cout
            << "ScavTrap: " << name
            << " is already destroyed and cannot attack!"
            << std::endl;
    } else if (energy_points > 0) {
        energy_points--;
        std::cout
            << "ScavTrap: " << name << " attacks " << target
            << ", causing " << attack_damage << " points of damage!"
            << std::endl;
        // target.takeDamage(attack_damage);
    } else {
        std::cout
            << "ScavTrap: " << name << " is out of energy and cannot attack!"
            << std::endl;
    }
}

void ScavTrap::guardGate() const {
    if (hit_points == 0) {
        std::cout
            << "ScavTrap: " << name
            << " is already destroyed and cannot enter Gate keeper mode!"
            << std::endl;
    } else {
        std::cout
            << "ScavTrap " << name
            << " is now in Gate keeper mode!"
            << std::endl;
    }
}
