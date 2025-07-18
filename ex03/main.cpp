/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 18:07:22 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap shin("Shin");
    FragTrap houken("Houken");
    ClapTrap *shin_p = &shin;
    ClapTrap *houken_p = &houken;
    houken.attack("Shin");
    shin.takeDamage(30);
    shin.beRepaired(30);
    shin_p->attack("Houken");
    houken_p->takeDamage(30);
    houken_p->beRepaired(30);
    shin.highFivesGuys();
    houken.highFivesGuys();
    return 0;
}
