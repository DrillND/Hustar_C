int main(void)
{
    char *p = "unix", *q;
    q = p;
    
    while (*p)
    {
        p++;
    }

    while (p > q)
    {
        p--;
        putchar(*p);
    }
    return 0;
}