    #include<iostream>
    using namespace std;

    int binary2(int arr[], int n, int x){
    int low = 0;
    int high =n-1;

    while(low <=high){
        int mid= (low + high)/2;
        if(arr[mid] == x){
            return mid;
        }else if(x < arr[mid]){
    high= mid-1;
        }else{low = mid+1;}
    }



    return -1;
    }

    int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int x  = 4;

    int bs = binary2(arr,n,x);
    cout << bs << endl;

        return 0;
    }