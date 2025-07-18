/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:04 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 20:19:32 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CLAPTRAP_HPP_
# define EX00_CLAPTRAP_HPP_

# include <string>

class ClapTrap {
 public:
    ClapTrap();
    explicit ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& src);
    ClapTrap& operator=(const ClapTrap& src);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    static const unsigned int def_hit_points = 10;
    static const unsigned int def_energy_points = 10;
    static const unsigned int def_attack_damage = 0;
 private:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;
};

#endif
