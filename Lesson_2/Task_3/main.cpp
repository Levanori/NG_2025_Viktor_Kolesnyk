#include <iostream>

using namespace std;

int main() {
    const int max_len_text = 1000;
    char text[max_len_text] = {0};
    float vowels = 0;
    float non_vowels = 0;
    float all_elem = 0;

    cout << "Enter a string: ";
    cin.getline(text, max_len_text);

    for (int elem_num = 0; text[elem_num] != '\0'; elem_num++) {
        if((text[elem_num] >= 'a' && text[elem_num] <= 'z')
            || (text[elem_num] >= 'A' && text[elem_num] <= 'Z')){

            if(text[elem_num] == 'A' || text[elem_num] == 'a'
                || text[elem_num] == 'E' || text[elem_num] == 'e'
                || text[elem_num] == 'I' || text[elem_num] == 'i'
                || text[elem_num] == 'O' || text[elem_num] == 'o'
                || text[elem_num] == 'U' || text[elem_num] == 'u'
                || text[elem_num] == 'Y' || text[elem_num] == 'y'){
                vowels++;
            }
            else {
                non_vowels++;
            }
        }
        all_elem++;
    }

    cout << "The ratio of vowels to non-vowels " << vowels << "/" << non_vowels << endl;
    cout << "The percentage of vowels: " << (vowels/all_elem)*100 << " and non-vowels: " << (non_vowels/all_elem)*100 << endl;
    return 0;
}
