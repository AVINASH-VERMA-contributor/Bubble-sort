#include<iostream>
using namespace std;

void BubbleSort(int a[],int l){
    int i,j;
    
int temp;
    for(i=0;i<l;i++){
        for(j=1;j<l-i;j++){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                
            }
        }
    }

}





int main(){
        int n;
        cout<<"Enter number of elements in the array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter "<<n<<" elements in the array"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

BubbleSort(a,n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }

    return 0;
}

