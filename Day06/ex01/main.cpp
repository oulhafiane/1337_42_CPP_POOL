/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:30:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/02 09:03:21 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct {
	int		data1;
	int		data2;
} Data;

uintptr_t		serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*			deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int				main(void)
{
	Data		test;
	Data *		test2 = NULL;
	uintptr_t	ptr;

	test.data1 = 42;
	test.data2 = 1337;

	ptr = serialize(&test);	
	test2 = deserialize(ptr);

	std::cout << "First ptr : " << &test << std::endl;
	std::cout << "Second ptr : " << test2 << std::endl;
	std::cout << "Serialize first ptr : " << ptr << std::endl;
	std::cout << "Value First Ptr : " << test.data1 << " : " << test.data2 << std::endl;
	std::cout << "Value Second Ptr : " << test2->data1 << " : " << test2->data2 << std::endl;

	return (0);
}
