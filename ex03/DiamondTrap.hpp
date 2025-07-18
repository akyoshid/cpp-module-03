/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:25:10 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 19:25:36 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_DIAMONDTRAP_HPP_
# define EX03_DIAMONDTRAP_HPP_

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
    DiamondTrap();
    explicit DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& src);
    DiamondTrap& operator=(const DiamondTrap& src);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI() const;
 private:
    std::string name;
};

#endif
