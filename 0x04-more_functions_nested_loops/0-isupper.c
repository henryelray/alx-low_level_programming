/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 0xC0 && c <= 0xDD));
}
