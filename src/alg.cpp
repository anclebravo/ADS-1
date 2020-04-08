int cbinsearch(int* arr, int size, int value)
{
  int amount = 0;
	int left = 0;
  int right = size;
	int middle = (left + right) / 2;
  int index=1;
  
	while (left <= right)
	  {
		if (arr[middle] == value)
		  {
        amount++;
			  break;
		  }
    
		if (arr[middle] < value)
		  {
			  left = middle + 1;
			  middle = (left + right) / 2;
		  }
		if (arr[mid] > value)
		  {
			  right = middle - 1;
			  middle = (left + right) / 2;
		  }
	  }
	
	while ((middle - index >= 0) && (arr[middle - index] == value))
	  {
		  amount++;
		  index++;
	  }
  
  index=1;

	while ((middle + index <= size) && (arr[middle + index] == value))
	  {
		  amount++;
		  index++;
	  }
    
    if (amount==0)
      return 0;
    else
      return amount;
	
}
