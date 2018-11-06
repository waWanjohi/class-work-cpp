#include <iostream>
// #include <conio.h>

#include <stdlib.h>
#define MAX_SIZE 10

using namespace std;

    void merge_sort(int, int);
    void merge_array(int, int, int, int);
    int arr_sort[MAX_SIZE];


int main()
{
	cout << "-----------------------------------------------------------------"<<endl;
	cout << "------------------Welcome to the C++ Merge System----------------"<<endl;
	cout << "-----------------------------------------------------------------"<<endl;
    int i;
    cout << "simple C++ Merge Sort Example - Functions and Arrays\n";
    cout << "\nEnter" << MAX_SIZE<< " Elements for Sorting: "<<endl;

    for (i=0; i< MAX_SIZE;i++)
    cin >> arr_sort[i];
    std::cout << "\nYour data:" << '\n';
      for (i=0; i<MAX_SIZE; i++) {
        std::cout << "\t" << arr_sort[i] << " ";
      }

    merge_sort(0, MAX_SIZE-1);
    std::cout << "\n\nSorted Data: ";

    for (i=0; i<MAX_SIZE; i++ ) {
      std::cout << "\t" << arr_sort[i];
    }
    // getch();
}

void  merge_sort(int i, int j) {
  int m;
  if (i<j) {
    m = (i+j)/2;
    merge_sort(i, m);
    merge_sort(m+1, j);
    //merging two Arrays
    merge_array(i, m, m+1, j);
  }
}

void merge_array(int a, int b, int c, int d)
{
  int t[50];
  int i=a, j=c, k=0;

  while (i<=b && j <=d) {
    if (arr_sort[i] < arr_sort[j])
    t[k++] = arr_sort[i++];
    else
    t[k++] = arr_sort[j++];
  }

  //collecting remaining Elements
  while (i<=b)
    t[k++] = arr_sort[i++];

    while (j <=d)
      t[k++] = arr_sort[j++];

    for (i=a, j=0; i<=d; i++, j++ ) {
    arr_sort[i] = t[j];
    }
    
}
