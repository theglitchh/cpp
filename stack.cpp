#include <iostream>

class stack {
    private:
  int top;
  int arr[5];


  public:

  stack ()
  {
      top = -1;
      for (int i = 0; i < 5; i++){

          arr[i] = 0;
      }
  }


bool isEmpty (){

if (top ==-1)

return true ;

else return false;

}

bool isfull (){

    if (top ==4){
    return true;}
    
    else 
    return false;
    
}

void push (int val){
if(isfull () )
{

    std::cout<< "stack overflow"<< std::endl;


}
else {
    top++;
    arr [top] = val;
}
}


int pop(){

    if ( isEmpty ())
    {

        std::cout << "stack underflow" << std::endl;
        return 0;
    } else
    {
    int popvalue = arr[top];

    arr [top]=0;

    top--;

    return popvalue;
    }
    
}

int count ()
{
    return (top+1);
}
int peek (int pos)
{
    
}
};

int main ()

{

}