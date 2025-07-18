/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:25:04 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 21:50:13 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("anonymous_clap_name"),
        ScavTrap(), FragTrap(), name("anonymous") {
    hit_points = FragTrap::def_hit_points;
    energy_points = ScavTrap::def_energy_points;
    attack_damage = FragTrap::def_attack_damage;
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
        ScavTrap(), FragTrap(), name(name) {
    hit_points = FragTrap::def_hit_points;
    energy_points = ScavTrap::def_energy_points;
    attack_damage = FragTrap::def_attack_damage;
    std::cout << "DiamondTrap: String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src), name(src.name) {
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
    if (this != &src) {
        ScavTrap::operator=(src);
        FragTrap::operator=(src);
        name = src.name;
    }
    std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
    std::cout
        << "DiamondTrap: I am " << name
        << ", also known as " << ClapTrap::name
        << std::endl;
}

