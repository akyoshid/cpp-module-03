/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:21:26 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap shin("Shin");
    ClapTrap houken("Houken");
    ClapTrap shin2(shin);
    ClapTrap houken2;
    houken2 = houken;
    for (unsigned int i = 0; i < houken.def_energy_points + 1; ++i)
        houken.attack("Shin");
    shin.takeDamage(10);
    shin.takeDamage(1);
    shin.beRepaired(10);
    shin.attack("Houken");
    shin2.takeDamage(9);
    for (unsigned int i = 0; i < shin2.def_energy_points + 1; ++i)
        shin2.beRepaired(1);
    return 0;
}
