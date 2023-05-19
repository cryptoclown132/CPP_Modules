
#include "Point.hpp"

int	main(void)
{
	Point a(0.0, 0.0);
	Point b(3.0, 0.0);
	Point c(0.0, 3.0);
	Point p(3.0, 0.0);

	if (bsp(a, b, c, p))
		std::cout << "Point is part of the triangle." << std::endl;
	else
		std::cout << "Point is not part of the triangle." << std::endl;
}