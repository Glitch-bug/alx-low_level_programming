/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: this int will be raised to the power @y
 * @y: @x will be raised to the power @y
 * Return: @x raised to the power @y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
