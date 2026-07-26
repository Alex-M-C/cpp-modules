#include "Harl.hpp"

int main() {
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("LEVEL9999");
	harl.complain("debug");
	harl.complain("");
	return (0);
}
