#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 1;
	a = (x * x * x) / (2 * 3);
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) > e);
	s = x + s;
}