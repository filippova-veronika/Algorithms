#include "Header.h"
namespace MySpace {
	int func(int a) {
		static int b = 0;
		b = b + a;
		return b;
	}
}