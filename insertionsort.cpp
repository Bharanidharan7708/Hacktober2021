#include <iostream>
using namespace std;
void disp(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}
void sort(int arr[], int len)
{
    // int temp, j;
    // for (int i = 1; i < len; i++)
    // {
    //     temp = arr[i];
    //     j = i;
    //     while (j > 0 && arr[j - 1] > temp)
    //     {
    //         arr[j] = arr[j - 1];
    //         j = j - 1;
    //     }
    //     arr[j] = temp;
    // }
    for(int i=1; i<len; i++){
      int curr = arr[i];
      int j = i-1;
      while(arr[j]>curr && j>=0){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1]= curr;
    }
}
int main()
{
    // int arr[] = {3,7,1,5,2,9,0,4,8,6};
    // int len = 10;
    int len;
    cout << "enter the number of elements: ";
    cin >> len; // no of elements
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i]; // elements
    }

    disp(arr, len);
    cout << endl
         << "Array after sorting: ";
    sort(arr, len);
    cout << endl;
    disp(arr, len);
}