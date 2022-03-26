/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qavsxb <qavsxb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 04:38:11 by rel-bour          #+#    #+#             */
/*   Updated: 2022/03/26 19:15:43 by qavsxb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int nb;
};

// uintptr_t = "an unsigned integer type with the property that any valid pointer to void can be converted to this type,
// 								then converted back to pointer to void, and the result will compare equal to the original pointer"

uintptr_t serialize(Data* ptr)
{
	uintptr_t n;
	
	n = reinterpret_cast<uintptr_t>(ptr);
	return (n);
}

Data* deserialize(uintptr_t raw)
{
	Data* p_data;

	p_data = reinterpret_cast<Data *>(raw);
	return (p_data);
}


int main()
{
	Data *data = new Data; 
	data->nb = 1337;

	uintptr_t num = serialize(data);
	
	std::cout << "Conver Data* to uintptr_t:\t" <<  num << std::endl;
	std::cout << "------------------------" << std::endl;
	

	Data* NewData = deserialize(num);
	std::cout << "Conver uintptr_t to Data*:\t" <<  NewData->nb << std::endl;
	
	delete (data);
	return (0);
}