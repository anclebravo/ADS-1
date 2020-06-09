int cbinsearch(int* arr, int size, int value)
{
	if (size == 0)
		return 0;

	int k = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			k++;
			break;
		}
	}
	if (k == 0)
		return 0;	
	else
	{
		k = 0;
		int i = size / 2;
		int j = i + 1;

		if (size == 1)
		{
			if (arr[0] == value)
				return 1;
		}
			else
			{
				while (arr[i] != value)
				{
					if (j == 1)
						j++;
					j = j / 2;
					if (value > arr[i])
					{
						i += j;
					}
					else
					{
						i -= j;
					}
				}

				while (arr[i] == value)
				{
					i--;
				}
				do
				{
					i++;
					k++;
				} while (arr[i + 1] == value);

				return k;
			}
	}
}
