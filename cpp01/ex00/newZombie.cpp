#include "Zombie.hpp"

/*
 * Stack vs Heap: 
 * Stack memory only lives within a function and gets destroyed the moment that function finishes
 * so a class creation that only lives within a function would be in this case: "Zombie zom = Zombie(name);".
 * 
 * Heap memory on the other side lives within the system until destroyed by the programer (using the keyword
 * destroy [for malloc allocations] or delete [for new allocations]) so a class creation that lives permanently
 * would be in this case: "Zombie* zom = new Zombie(name)".
 * The important thing here is the keyword "new" that allocates the memory in the heap and returns the memory
 * address for the created element.
 * 
 * That is why destructors are important, they are member functions that are called automatically when an object
 * goes out of scope or is explicitly deleted.
*/

Zombie* newZombie(std::string name) {
	Zombie* zom = new Zombie(name);
	return (zom);
}
