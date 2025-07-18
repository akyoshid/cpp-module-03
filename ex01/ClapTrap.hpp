/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:13:04 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 17:28:18 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CLAPTRAP_HPP_
# define EX01_CLAPTRAP_HPP_

# include <string>

class ClapTrap {
 public:
    ClapTrap();
    explicit ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& src);
    ClapTrap& operator=(const ClapTrap& src);
    virtual ~ClapTrap();
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
 protected:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;
};

#endif
