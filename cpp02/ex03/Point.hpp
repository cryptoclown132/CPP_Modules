#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point();
	Point(const float a, const float b);
	Point(Point const &point);
	~Point();
	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
	Point	&operator=(Point const &point);
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif