/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 17:29:04 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap shin("Shin");
    ScavTrap houken("Houken");
    ClapTrap *shin_p = &shin;
    houken.attack("Shin");
    houken.attack("Shin");
    houken.attack("Shin");
    houken.attack("Shin");
    shin.takeDamage(80);
    shin.beRepaired(80);
    houken.guardGate();
    shin_p->attack("Houken");
    return 0;
}
