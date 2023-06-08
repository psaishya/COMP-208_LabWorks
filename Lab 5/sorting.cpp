#include <fstream>
#include <iostream>
#include <algorithm>    
#include <array>        
#include <random>       
#include <chrono>
#include <vector> 
#include <ctime>
using namespace std;

int partition(vector <int> &array,int low,int high){
    int pivot=array[low];
    int i=low;
    int j=high+1;
  
    while(i<j){
        do {
            i++;
        }while(array[i]<=pivot);
         do{
            j--;
        }while(array[j]>=pivot);
       if(i<j){
        int temp1=array[i];
        array[i]=array[j];
        array[j]=temp1;
       }
        
    }
    int temp2=array[low];
    array[low]=array[j];
    array[j]=temp2;
    return j; 


}   
void quicksort(vector <int> &array,int low,int high){
    if(low<high){
    int pivotindex=partition(array,low,high);
    quicksort(array,low,pivotindex-1);
    quicksort(array,pivotindex+1,high);
    }
} 

void insertionSort(vector <int> arr,int ArraySize)
{
    int i, key, j;
    for (i = 1; i < ArraySize; i++)
    {
        key = arr[i];
        j = i - 1;
 
                while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void printArray(vector <int> arr,int ArraySize)
{
    int i;
    for (i = 0; i < ArraySize; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void populate(vector <int> &arr,int ArraySize){
    srand(time(0));
    for(int i;i<=ArraySize;i++){
        arr.push_back(rand()%ArraySize);
    }
     

}
 

int main()
{
    vector <int> arr1;
    int ArraySize=1000;
    fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("timecomplexitydataWCS2.csv", ios::out | ios::app);
   
    fout<<"ArraySize"<<" ,"<<"TimeTaken_insertion"<<" ,"<<"TimeTaken_quick "<<endl;
    while(ArraySize!=51000){

        populate(arr1,ArraySize);
        
        
        auto startinsertion = chrono::system_clock::now();
        insertionSort(arr1,ArraySize);
        auto endinsertion = chrono::system_clock::now();

        chrono::duration<double> elapsed_seconds_insertion = endinsertion-startinsertion;
        time_t end_time_insertion = chrono::system_clock::to_time_t(endinsertion);
        time_t start_time_insertion = chrono::system_clock::to_time_t(startinsertion);

        cout<<"\n\n\nFor insertion sort:"<<endl;
        cout<< "Started insertion sort at " << ctime(&start_time_insertion) 
        << "finished insertion sort at " << ctime(&end_time_insertion)
        << "elapsed time: " << elapsed_seconds_insertion.count() << "s "<<"for a Array Size of :"<<ArraySize
        << endl;

        auto startquick = std::chrono::system_clock::now();
        // quicksort(arr1,0,ArraySize-1);
        auto endquick = std::chrono::system_clock::now();

        chrono::duration<double> elapsed_seconds_quick = endquick-startquick;
        time_t end_time_quick = chrono::system_clock::to_time_t(endquick);
        time_t start_time_quick = chrono::system_clock::to_time_t(startquick);
        
        cout<<"\n\nFor quick sort:"<<endl;
        cout<< "Started quick sort at " << ctime(&start_time_quick) 
        << "finished quick sort at " << ctime(&end_time_quick)
        << "elapsed time: " << elapsed_seconds_quick.count() << "s "<<"for a Array Size of :"<<ArraySize
        << endl;
        fout<<ArraySize<<" ,"<<elapsed_seconds_insertion.count()<<" ,"<<elapsed_seconds_quick.count()<<endl;
        
        ArraySize=ArraySize+1000;
     }
    
    
    return 0;
}