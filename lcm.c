unsigned int gcd(unsigned int a, unsigned int b)
{
    return b ? gcd(b, a % b) : a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0 || a < 0 || b < 0)
        return 0;
    return (a * b) / gcd(a, b);
}