//
// Created by lucas on 15.06.16.
//

#include "Oligo.hpp"

Oligo::Oligo(const std::string &rep, int count)
	:sequence(rep),count(count), _temperature(0)
{
	for (char c : sequence)
	{
		if (c == 't' || c == 'a')
			_temperature += 2;
		else
			_temperature += 4;
	}
}

