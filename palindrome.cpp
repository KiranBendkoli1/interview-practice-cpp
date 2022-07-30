#include<iostream>
using namespace std;

string isPalindrome(string word){
    for(int i=0;i<word.length();i++){
        if(word[i] != word[word.length()-i-1]){
            return   word + " is not palindrome\n";
        }

    }
    return word + " is palindrome\n";

}
int main()
{
    cout << isPalindrome("ABA");
    return 0;
}