#include <cassert>
#include <vector>
#include <iostream>

using namespace std;
int minimum(std::string);

int main()
{
 
  auto testcase1 = ")(";
  auto testcase2 = "()())()";
    
  cout << "Test Case )( :"<<minimum(testcase1) <<endl;
  cout << "Test Case ()())():"<<minimum(testcase2) <<endl;

  assert(minimum(testcase1) ==2);
  assert(minimum(testcase2) ==1);
  return 0;

}

int minimum(std::string input){
  auto right = 0;
  auto needRemoved = 0;
  for ( auto it = input.begin() ; it < input.end(); it++)
  {
    if (*it == ')'){
      if(right <1){
	++needRemoved;
      } else{
	right -= 1;
      }
    } else if(*it == '(') {
      right += 1;
    }
  }
  
  return needRemoved + right;
}
