/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:34 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:46:24 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("anonymous_clap_name"), hit_points(def_hit_points),
        energy_points(def_energy_points), attack_damage(def_attack_damage) {
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hit_points(def_hit_points),
        energy_points(def_energy_points), attack_damage(def_attack_damage) {
    std::cout << "ClapTrap: String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
    : name(src.name), hit_points(src.hit_points),
        energy_points(src.energy_points), attack_damage(src.attack_damage) {
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
    if (this != &src) {
        name = src.name;
        hit_points = src.hit_points;
        energy_points = src.energy_points;
        attack_damage = src.attack_damage;
    }
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hit_points == 0) {
        std::cout
            << "ClapTrap: " << name
            << " is already destroyed and cannot attack!"
            << std::endl;
    } else if (energy_points > 0) {
        energy_points--;
        std::cout
            << "ClapTrap: " << name << " attacks " << target
            << ", causing " << attack_damage << " points of damage!"
            << std::endl;
        // target.takeDamage(attack_damage);
    } else {
        std::cout
            << "ClapTrap: " << name << " is out of energy and cannot attack!"
            << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hit_points == 0) {
        std::cout
            << "ClapTrap: " << name
            << " is already destroyed and cannot take more damage!"
            << std::endl;
    } else if (hit_points > amount) {
        hit_points -= amount;
        std::cout
            << "ClapTrap: " << name << " takes " << amount
            << " points of damage! Remaining hit points: " << hit_points
            << std::endl;
    } else {
        hit_points = 0;
        std::cout
            << "ClapTrap: " << name << " takes " << amount
            << " points of damage and is destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit_points == 0) {
        std::cout
            << "ClapTrap: " << name
            << " is already destroyed and cannot repair itself!"
            << std::endl;
    } else if (energy_points > 0) {
        hit_points += amount;
        energy_points--;
        std::cout
            << "ClapTrap: " << name << " repairs itself, recovering " << amount
            << " hit points! Remaining hit points: " << hit_points
            << std::endl;
    } else {
        std::cout
            << "ClapTrap: " << name
            << " is out of energy and cannot repair itself!"
            << std::endl;
    }
}
