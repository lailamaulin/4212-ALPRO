#include <iostream>

using namespace std;


void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j +1]);
            }
        }
    }
}
int main()
{
   int arr[] = {73, 53, 43, 23, 11};
   int n = sizeof(arr)/sizeof(arr[0]);

   auto start = high_resolution_clock::now();
   bubbleSort(arr, n);
   auto end = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(end - start);

   int space = sizeof(arr);

   cout << " Array setelah diurutkan :";
   for(int i=0; i<n; i++){
    cout << arr[i]<<" ";
   }
   cout<<endl;

   cout <<"Waktu eksekusi: " <<duration.cout()<< "microseconds" << endl;
   cout <<"Ruang yang diguanakan : " << space << "bytes" << endl;

   return 0;
}
