bool is_palindrome (int integers[], int length)
{
    if(length<=0)
    {
        return false;
    }
    for (int i=0;i<length/2;i++)
    {
        if(integers[i]!=integers[length-1-i])
        {
            return false;
        }
    }
    return true;
}
int sum_if_palindrome (int integers[], int length)
{
    
    int sum = 0;
    for (int i=0;i<length;i++)
    {
        sum+=integers[i];
    }
    return sum;
}

int sum_array_elements (int integers[], int length)
{
    if(is_palindrome(integers,length))
    {
     return sum_if_palindrome(integers,length);
    }
    else 
    {
        return -2;
    }
    
}