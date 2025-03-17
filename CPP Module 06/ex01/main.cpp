#include "header/Serializer.hpp"

int main(){
	Data* LaData = new Data(28, "Arthur");
	std::cout << LaData->age << " " << LaData->name << std::endl;

	uintptr_t Serialized = Serializer::serialize(LaData);
	std::cout << Serialized << std::endl;

	Data* Deserialized = Serializer::deserialize(Serialized);
	std::cout << Deserialized->age << " " << Deserialized->name << std::endl;

	delete LaData;
	return 0;
}
