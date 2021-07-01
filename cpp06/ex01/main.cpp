#include <iostream>

struct Data {
	std::string str1;
	std::string str2;
	int			num;
};

std::string getRandom(int increaseRandom)
{
	std::string     str;
	unsigned int    random;

	char const *array = "qwertsdfghjklzxvbnmyuiopaQWEOPASDFGHJKLZRTYUIXVBNM";
	for (int i = 0; i < 20; i++)
	{
		random = (rand() + increaseRandom) % 40;
		str += array[random];
	}
	return (str);
}

void *serialize()
{
	Data *result = new Data;

	srand(time(NULL));

	result->num = rand();
	result->str1 = getRandom(1);
	result->str2 = getRandom(6);
	std::cout << "Serialized object" << std::endl;
	std::cout << "str1: " <<   result->str1 << std::endl;
	std::cout << "str2: " << result->str2 << std::endl;
	std::cout << "num: " << result->num << std::endl;
	return (static_cast<void *>(result));
}

Data * deserialize(void * raw)
{
	Data *data;

	data = reinterpret_cast<Data *>(raw);
	return (data);
}

int main()
{
	Data *data;
	void *raw;

	raw = serialize();
	data = deserialize(raw);

	std::cout << "Deserialized object" << std::endl;
	std::cout << "str1: " << data->str1 << std::endl;
	std::cout << "str2: " <<  data->str2 << std::endl;
	std::cout << "num: " << data->num << std::endl;
	delete static_cast<char *>(raw);
	return (0);
}
