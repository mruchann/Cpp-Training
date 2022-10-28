// constructor member initializer lists.

// looks clean if you have to initialize a lot of class member variables!

// constructor member initializer lists > regular constructors

// performance, good-looking, popular.

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	Example(int x)
	{
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
}

#include <iostream>
#include <string>

class Entity
{
private:
	int m_Score;
	std::string m_Name;
	int x,y,z;
	Example m_Example; // first time Example constructor is called if we don't use member initializer lists.
public:
	// new way to define a constructor in C++



/*	#traditional way

	Entity()
	{
		m_Name = "Unknown";
	}
*/	
	// if you use Entity constructor member initializer lists, Example constructor is called once.

	// if you use traditional Entity contructors, Example constuctor is called twice. Waste of performance!

	// so, there is a minor functional difference as well

	// the order matters, list them in order!

	Entity() : m_Score(0), m_Name("Unknown"), x(0), y(0), z(0), m_Example(8) {/*m_Example = Example(8)*/} 

	Entity(const std::string& name): m_Name(name){}

}

int main(){

	return 0;
}