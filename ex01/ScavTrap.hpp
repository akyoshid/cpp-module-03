/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:04:22 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 17:44:25 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP_
# define EX01_SCAVTRAP_HPP_

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
    ScavTrap();
    explicit ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& src);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate() const;
};

#endif
