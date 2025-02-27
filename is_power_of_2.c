int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return ((n & (n - 1)) == 0);
}

//0000 0001
//0000 0010
//0000 0011
//0000 0100
