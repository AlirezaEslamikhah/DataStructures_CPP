#include <iostream>
using namespace std;
void merge(int *,int, int , int );

void merge(int *arr, int down, int up, int mid)
{
    int i, j, k, c[50];
    i = down;
    k = down;
    j = mid + 1;
    while (i <= mid && j <= up) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= up) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = down; i < k; i++)  {
        arr[i] = c[i];
    }
}
void mergeSort(int *arr, int down, int up)
{
    int mid;
    if (down < up){
        mid=(down+up)/2;
        mergeSort(arr,down,mid);
        mergeSort(arr,mid+1,up);
        merge(arr,down,up,mid);
    }
}
int main()
{
    int array[30], num;
    cout<<"cheghadr adad mikhahid sort konid?";
    cin>>num;
    // cout<<"Enter "<<num<<" elements to be sorted:";
    cout << ""<<num<<" adad dade shode ra vared konid";
    for (int i = 0; i < num; i++) { cin>>array[i];
    }
    mergeSort(array, 0, num-1);
    cout<<"arraye sort shode\n";
    for (int i = 0; i < num; i++)
    {
        cout<<array[i]<<"\t";
    }
}
//در این کد ابتدا در تابع مین اعداد ارایه رو از کاربر میگیریم سپس در تابع مرج سورت 3 تا بع را صدا میزنیم ، اولی و دومی 
//همان تابع مرج سورت به صورت بازگشتی هستند که باعث میشوند به مرحله 4 سوال اول همانطور که در داک توضیح داده شده برسیم
//سپس اعداد ما تقریبا دو به دو به تابع مرج میروند برای اینکه تطبیق داده شوند ، در اینجا ما با استفاده از حلقه های فور و وایل اعداد را 
//با هم تطبیق میدهیم.