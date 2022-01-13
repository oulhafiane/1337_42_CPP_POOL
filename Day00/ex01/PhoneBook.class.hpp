/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:35:00 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/13 16:03:46 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
	public:
		int	const	max;
		PhoneBook(void);
		~PhoneBook(void);

		Contact		getContacts(int index) const;
		int			getTotal(void) const;
		int			add(Contact contact, int index);
		void		print(void) const;
	
	private:
		Contact 	_contacts[8];
		int			_total;
};

#endif
