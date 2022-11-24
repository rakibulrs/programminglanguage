#include <bits/stdc++.h>
using namespace std;

int** createArray(int n, int m){
    int** a = 0;
    a = new int*[n];
    for(int i=0; i<n; i++){
        a[i] = new int[m];
    }

    return a;
}

int** userArray(int n, int m){
    int** a = createArray(n,m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    return a;
}

int** randArray(int n, int m){
    int **a = createArray(n,m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = rand();
        }
    }

    return a;
}
void printArray(int** arr, int n, int m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}


int** replaceThreeMultiples(int** arr, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            if(arr[i][j]%3 == 0 )
                arr[i][j] = 0;
        }
    }

    return arr;

}

int** deleteRows(int** arr, int n,int m)
{

   if(m<=3)
    return arr;

   int newRow = n;


   for(int i=0; i<n; i++){

    if(arr[i][1] > arr[i][m-2]){
        newRow--;
    }
   }

   int** a = createArray(newRow,m);
   int k=0;
   for(int i=0; i<n; i++){

    if(arr[i][1] <= arr[i][m-2]){
        for(int j=0; j<m; j++){
            a[k][j] = arr[i][j];
        }
        k++;
    }
   }


   return a;

}

int main()
{

    int opt,n,m;

    cout<<"Array Creation"<<endl;
    cout<<"1. Create array using User Input"<<endl;
    cout<<"2. Create array using Random Input"<<endl;


    cin>>opt;

    cout<<"Enter number of Rows, n: ";
    cin>>n;
    cout<<"Enter number of Columns, m: ";
    cin>>m;

    int **arr;
    if(opt == 1){
        arr = userArray(n,m);
        printArray(arr,n,m);
    }

    if(opt == 2){
        arr = randArray(n,m);
        printArray(arr,n,m);
    }

    cout<<"Array Operation"<<endl;
    cout<<"1. Replace the element multiple of three of each column with zero."<<endl;
    cout<<"2. Delete all rows in which the second element is larger than the penultimate one."<<endl;

    cin>>opt;

    if(opt == 1){
        printArray(replaceThreeMultiples(arr,n,m),n,m);
    }

    if(opt == 2){
        printArray(deleteRows(arr,n,m),n,m);
    }





    return 0;
}
