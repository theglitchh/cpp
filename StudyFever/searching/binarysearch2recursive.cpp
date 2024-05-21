    #include<iostream>
    using namespace std;

    int binary2(int arr[],int x, int low, int high){

      if(low<=high){
   int mid = (low+high)/2;
   if(arr[mid] == x){
    return mid;
   }else if(x < arr[mid]){
    return binary2(arr,x,low,mid-1);
   }else {return binary2(arr,x,mid+1,high);}

    }
    return -1;  
    }

    int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int x  = 6;
    int low = 0;
    int high = n-1;
    int bs = binary2(arr,x, low, high);
    cout << bs << endl;

        return 0;
    }