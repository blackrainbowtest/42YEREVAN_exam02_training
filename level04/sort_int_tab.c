void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp;

    if (size < 2)
        return ;
    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0; // после обмена начинаем заново
        }
        else
            i++;
    }
}