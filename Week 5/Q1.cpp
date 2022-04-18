#include <iostream>
using namespace std;

int main()
{
    char a[] = {'a', 'e', 'd', 'w','a', 'd', 'q', 'a','f','p'};
    int n = sizeof(a)/sizeof(a[0]);                 //calculate the size of the array of characters
    int max_index = 0, ch = 0, index = 0, max_count, flag = 0;
    for(int i = 0 ; i < n ; i++)                    // finding the maximum character in the array
    {
        ch = (int)a[i];                          
        if(max_index <= ch)
            max_index = ch;
    }

    int count_freq[max_index + 1] = {0};                   // initialize "count_freq" array to count frequency of character
    int i = 0;
    for(int j = 97; j <= max_index; j++)                   // loop to count the frequency of each character
    {
        ch = (int)a[i];
        count_freq[ch] = count_freq[ch] + 1;
        i++;
    }
    max_count = 1;

    for(int i = 97; i <= max_index; i++)
    {
        if(max_count < count_freq[i])                   // finding the element which has the highest frequency
        {
            flag = 1;
            index = i;                                  // storing the index of the max element
            max_count = count_freq[i];                  // storing the freqeuncy of the element
        }
    }
    if(flag)
    {
        char e = (char)index;
        cout<<e<<" "<<max_count - 1<<endl;
    }
    else
        cout<<"No Duplicates Present"<<endl;
}