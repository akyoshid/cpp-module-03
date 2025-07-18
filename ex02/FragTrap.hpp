/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:39:41 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:41:15 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_HPP_
# define EX02_FRAGTRAP_HPP_

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
    FragTrap();
    explicit FragTrap(const std::string& name);
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys() const;
    static const unsigned int def_hit_points = 100;
    static const unsigned int def_energy_points = 100;
    static const unsigned int def_attack_damage = 30;
};

#endif
