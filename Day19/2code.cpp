#include <iostream>
using namespace std;

// Imagine this is a magical mirror that can ask itself the same question!
int askMirror(int question) {
    if (question == 0) {
        cout << "Mirror: Finally, an easy question! The answer is 0." << endl;
        return 0; // Base case: The mirror knows the answer to this one.
    } else {
        cout << "Mirror: Too lazy to answer " << question << ", I'll ask myself " << question-1 << " instead." << endl;
        int answer = askMirror(question - 1); // The mirror asks itself an easier question.
        cout << "Mirror: Since the answer to " << question-1 << " is " << answer << ", the answer to " << question << " is " << answer + 1 << "." << endl;
        return answer + 1; // And it builds the answer from the easier question.
    }
}

int main() {
    int toughQuestion = 5; // Let's ask the mirror a tough question!
    cout << "You: Hey mirror, what's the answer to " << toughQuestion << "?" << endl;
    int answer = askMirror(toughQuestion); // Start the recursion magic!
    cout << "Mirror: The final answer to " << toughQuestion << " is " << answer << "!" << endl;
    return 0;
}
