#include "ClapTrap.hpp"

int main() {
    ClapTrap ct("Clark");

    ct.checkStats();
    ct.attack("someone");
    ct.checkStats();
    ct.takeDamage(5);
    ct.checkStats();
    return (0);
}
