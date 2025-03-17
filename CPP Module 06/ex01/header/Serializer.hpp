#pragma once

#include <stdint.h>
#include "Data.hpp"

class Serializer {
	private:
	Serializer();
	Serializer(const Serializer& copy);
	~Serializer();

	Serializer& operator=(const Serializer& rhs);

public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};
