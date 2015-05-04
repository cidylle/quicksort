// QuickSort
// Author:: Christian Idylle (idylle.christian@gmail.com)
// License:: The MIT License (MIT) Copyright (c) 2015 Christian Idylle

#include <iostream>
using namespace std; 

void quicksort(int a[],int left, int right);

int main()
{
	int arr[5] = {5,4,1,3,2};
	quicksort(arr,0,4);
	for(int i=0;i<5;i++) cout<<arr[i];
	cout<<endl;
	return 0;
}

void quicksort(int arr[],int left, int right)
{
	int a=left,b=right,x;
	x = arr[(left+right)/2];
	
	while(a<=b)
	{
		while(arr[a] < x && a<right) a++;
		while(arr[b] > x && b>left) b--;

		
		
		if(a<=b)
		{				
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		a++;
		b--;
		}
	}
	
	if(b>left) quicksort(arr,left,b);
	if(a<right) quicksort(arr,a,right);
} 
			
		
	
