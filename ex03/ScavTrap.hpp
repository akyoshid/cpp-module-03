/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:04:22 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:48:16 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_SCAVTRAP_HPP_
# define EX03_SCAVTRAP_HPP_

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
 public:
    ScavTrap();
    explicit ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& src);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate() const;
    static const unsigned int def_hit_points = 100;
    static const unsigned int def_energy_points = 50;
    static const unsigned int def_attack_damage = 20;
};

#endif
