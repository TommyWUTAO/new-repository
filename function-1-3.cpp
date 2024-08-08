double* duplicateArray(double* array, int size)
{
    double* newarr = new double[size];
    for(int i =0;i<size;i++)
    {
        newarr[i]=array[i];
    }
    return newarr;
}