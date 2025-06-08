#include <iostream> // For input/output operations (cin, cout)
#include <vector>   // For using std::vector
#include <string>   // For using std::string
#include <algorithm> // Not strictly needed for this corrected code, but often useful
#include <utility>   // Not strictly needed for this corrected code, but often useful

// Using namespace std; is common in competitive programming but can be avoided
// by explicitly using std:: for each standard library element (e.g., std::cout).
using namespace std;

int main(){
    // Declare variables to store the number of strings for each set
    int N, M, C;
    string s_temp; // Temporary string variable to read input

    // Declare vectors to store the strings
    vector<string> aux; // A general purpose auxiliary vector
    vector<string> rm;  // A vector for strings to be "removed" or handled

    // 1. Read N and then N strings into 'aux'
    cin >> N; // Read the number of strings for 'aux'
    for(int i = 0; i < N; i++){
        cin >> s_temp; // Read a string
        aux.push_back(s_temp); // Add it to the 'aux' vector
    }

    // 2. Read M and then M strings into 'rm'
    cin >> M; // Read the number of strings for the first part of 'rm'
    for(int j = 0; j < M; j++){
        cin >> s_temp; // Read a string
        rm.push_back(s_temp); // Add it to the 'rm' vector
    }

    // 3. Read C and then C more strings into 'rm'
    cin >> C; // Read the number of strings for the second part of 'rm'
    for(int k = 0; k < C; k++){
        cin >> s_temp; // Read a string
        rm.push_back(s_temp); // Add it to the 'rm' vector
    }

    // 4. Print the contents of the vectors
    // To print a vector, you need to iterate through its elements.

    cout << "Contents of rm:" << endl;
    for(const string& str : rm){ // Range-based for loop for convenience
        cout << str << " "; // Print each string followed by a space
    }
    cout << endl; // Newline after printing all elements of rm

    cout << "Contents of aux:" << endl;
    for(const string& str : aux){
        cout << str << " ";
    }
    cout << endl; // Newline after printing all elements of aux

    return 0; // Indicate successful execution
}
