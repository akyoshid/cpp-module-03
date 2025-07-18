/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:25:04 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 19:44:17 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap(), ScavTrap(), FragTrap(), name("anonymous") {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 30;
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
        FragTrap(name + "_clap_name"), name(name) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 30;
    std::cout << "DiamondTrap: String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src), name(src.name) {
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
    if (this != &src) {
        ClapTrap::operator=(src);
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

