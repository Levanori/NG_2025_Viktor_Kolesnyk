#include <iostream>

using namespace std;

int main() {
    const int max_len_text = 1000;
    char text[max_len_text] = {0};
    int word_count = 0;
    bool word = false;

    cout << "Enter a string: ";
    cin.getline(text, max_len_text);

    for (int elem_num = 0; text[elem_num] != '\0'; elem_num++) {
        if((text[elem_num] >= 'a' && text[elem_num] <= 'z')
            || (text[elem_num] >= 'A' && text[elem_num] <= 'Z')){
            if(!word){
                word_count++;
                word = true;
            }
        }
        else{
            word = false;
        }
    }

    cout << word_count << " words in the string."<< endl;
    return 0;
}
