/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:39:41 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/18 18:50:30 by akyoshid         ###   ########.fr       */
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
};

#endif
