unsigned int fibonacci(unsigned int zahl) {
    if (zahl == 0) 
    {
        return 0;
    }

    if (zahl == 1) 
    { 
        return 1;
    } 
    return fibonacci(zahl - 1) + fibonacci(zahl - 2);
}

int main()
{
   int res = fibonacci(10);
   return 1;
}