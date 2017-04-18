#include <string>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <unistd.h>
using namespace std;
int Parent(int i);
int Left(int i);
int Right(int i);
void MinHeapify(int *A, int i, int size);
void BuildHeap (int *A, int size);
void InsertKey(int *A, int &size);
void HeapExtractMin(int *A, int &size);
int TrashCollection(int *A);
int main()
{
	int* numz = NULL;
	numz = new int [10];
	int val;
	int arraySize = 10;
	int startArray[] = {4,1,3,2,16,9,10,14,8,7};
	for(int i = 0; i < arraySize; i++)
	{
		numz[i] = startArray[i];
	}
	
	BuildHeap(numz, 10);
	cout << "Build Heap" << endl;
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	InsertKey(numz, arraySize);
	cout << "Insert key" << endl;
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	BuildHeap(numz, arraySize);
	cout << "Re-build Heap after insertion" << endl;
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	cout << "extract min" << endl;
	HeapExtractMin(numz, arraySize);
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	BuildHeap(numz, arraySize);
	cout << "Re-build Heap after Extraction" << endl;
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	cout << "clear Heap" << endl;
	TrashCollection(numz);
	for(int ii = 0; ii < arraySize; ii++)
	{
		cout << numz[ii] << ",";
	}
	cout << endl;
	//MaxHeapify(numz, 0, arraySize);
	//cout << "startArray size " << sizeof(startArray)/sizeof(startArray[0]) << endl;
	//cout << "numz size " << arraySize << endl;
	return 0;
}
int Parent(int i)
{
	return i/2;
}
int Left(int i)
{
	return (2*i)+1;
}
int Right(int i)
{
	return (2*i)+2;
}
void MinHeapify(int *A, int i, int size)
{
	int left = Left(i);
	int smallest = 0;
	int right = Right(i);
	int heapSize = size;
	int temp = 0;
	//cout << i << " " << A[i] << endl;
	if( left < size && A[left] < A[i])
	{
		smallest = left;
	}
	else
	{
		smallest = i;
	}
	if(right < size && A[right] < A[smallest])
	{
		smallest = right;
	}
	if(smallest != i)
	{
		temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;
		MinHeapify(A, smallest, size);
	}
}
void BuildHeap(int *A, int size)
{
	for(int i = (size/2); i >= 0; i--)
	{
		MinHeapify(A, i, size);
	}
}
void InsertKey(int *A, int &size)
{
	int val = 116;
	size++;
	A[size-1] = val;
}
void HeapExtractMin(int *A,int &size)
{
	int min;
	if(size < 1)
	{
		cout << "The heap has no elements" << endl;
	}
	else
	{
		min = A[0];
		A[0] = A[size-1];
		size--;
		MinHeapify(A,1,size);
	}
}
int TrashCollection(int *A)
{
	A = new int;
	delete A;
	A = NULL;
	return *A;
}