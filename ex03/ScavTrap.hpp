/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:04:22 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 18:49:56 by akyoshid         ###   ########.fr       */
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
};

#endif
