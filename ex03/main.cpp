/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 19:39:07 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap shin("Shin");
    DiamondTrap houken("Houken");
    shin.whoAmI();
    houken.whoAmI();
    houken.attack("Shin");
    shin.takeDamage(30);
    houken.attack("Shin");
    shin.takeDamage(30);
    for (int i = 0; i < 51; ++i)
        shin.beRepaired(1);
    shin.highFivesGuys();
    houken.highFivesGuys();
    return 0;
}
