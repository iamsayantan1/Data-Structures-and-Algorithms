//{ Driver Code Starts
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// } Driver Code Ends
//User function template for C
int isPalindrome(char  S[])
    {
        int start = 0, end = 0, isPalindrome=1;
        
        while(S[end] != '\0') {
            end++;
        }
        end--;
        
        while(start<end)    {
            if(S[start] != S[end])  {
                isPalindrome = 0;
                break;
            }
            start++;
            end--;
        }
        
        return isPalindrome;
    }

//{ Driver Code Starts.

int main() {
    
    int t;
    printf("Enter no of times you want to check palindrome: ");
    scanf("%d", &t);

    while(t--){
        char s[200005];
        printf("Enter your input string: ");
        scanf("%s", &s);
        if(isPalindrome(s)) printf("%s is a palindrome sequence.\n", s);
        else  printf("%s is not a palindrome sequence.\n", s);
    }
    return 0;
}
// } Driver Code Ends