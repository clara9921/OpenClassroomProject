#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
   vector <size_t> clara { 1, 2, 3 }; 

   for (const string& word : msg)
   {
        cout << word << " ";
      for (size_t& number : clara )
      {
         std::cout<< number ;
         std::cout<<number ;
      
      }
    
   
}
   cout << endl;
}
