#include "dod.h"
#include "var.h" 
using namespace nsVar;
void nsDod::dod() {
	a *= x * x * (n - 1) * (2 * n - 1) * (2 * n - 1) / (n * (2 * n + 1) * (2 * n - 3));
}