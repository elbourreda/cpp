/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_ft.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:55 by rel-bour          #+#    #+#             */
/*   Updated: 2022/02/21 17:42:02 by rel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Demo {
	int val;
	public:
	Demo(int x = 0) {
		val = x;
	}
	int getValue() const {
		int i = 0;
		i = i + 102;
		return i;
	}
};
int main() {
	const Demo d(28);
	Demo d1(8);
	cout << "The value using object d : " << d.getValue();
	cout << "\nThe value using object d1 : " << d1.getValue();
	return 0;
}