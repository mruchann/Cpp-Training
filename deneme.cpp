#include <iostream>

template <class T>
class Deneme 
{
public:
	Deneme(T x) : data(x){}  
	T data;
};


int main()
{
	Deneme<int> *NewItem = new Deneme<int>();

	std::cout << NewItem->data << std::endl;

	return 0;
}
