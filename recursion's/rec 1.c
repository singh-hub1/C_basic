unsigned int fun(unsigned int a, unsigned int b){
    if (a == b){
        return 1;
    }
    else{
        if (a > b)
         a = a - b;
        else
         b = b - a;
        return 1 + fun(a, b);
    }
}

int main()
{
    printf("%u\n", fun(24, 5));
    return 0;
}
