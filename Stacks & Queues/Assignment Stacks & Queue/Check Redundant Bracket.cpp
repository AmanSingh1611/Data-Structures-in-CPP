#include <stack>
#include <cstring>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    int i = 0;
  
    // Iterate through the given expression 
    while(expression[i] != '\0'){
        if(expression[i] == ')'){
            int count = 0;
            while(s.top()!='(' ){
                count++;
                s.pop(); 
            }
            s.pop();
            if(count == 0 || count == 1){
                return true;
            }
            i++;
        }
        else{
            s.push(expression[i]);
            i++;
        }
    }
    return false;
}