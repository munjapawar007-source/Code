/*
Q.2 Program to count the total number of vowels and consonants in a string.

(vowels = a, e, i, o, u)
(consonants = b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z)

Input: This is a really simple sentence
Output: Number of vowels: 10
        Number of consonants: 17
Author: munja
*/

#include<iostream>
#include<string>
using namespace std;

void alphabet(string sentence);

int main()
{
    string sentence;
    cout << "enter string: ";

    getline(cin, sentence);

    alphabet(sentence);

    return 0;
}

void alphabet(string sentence)
{
    int n = sentence.length();
    int vowels = 0;
    int consonants = 0;

    for(char str : sentence)
    {
        if(str == 'A' || str == 'a' ||
           str == 'E' || str == 'e' ||
           str == 'I' || str == 'i' ||
           str == 'O' || str == 'o' ||
           str == 'U' || str == 'u')
            vowels++;
        else if (str >= 'A' && str <= 'Z' || str >= 'a' && str <= 'z')
         consonants++;
    }
    cout << "count of vowels: " << vowels << endl;
    cout << "count of consonants: " << consonants << endl;
}

/*
std::getline(cin,string)-> Unlike the standard extraction operator (std::cin >>), 
        which stops reading as soon as it hits a whitespace character (like a space or tab), 
        std::getline() reads everything up until it encounters a newline character (\n) or a custom delimiter
*/