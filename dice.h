/*
 * dice coefficient = bigram overlap * 2 / (bigrams in a + bigrams in b)
 * it outputs values [0..1]
 */

#include<iostream>
#include<string.h>
#include<set>
#include<iterator>

using namespace std;

float dice_coefficient(string string1, string string2)
{

        set<string> string1_bigrams;
        set<string> string2_bigrams;

        //base case
        if(string1.length() == 0 || string2.length() == 0)
        {
                return 0;
        }

        for(unsigned int i = 0; i < (string1.length() - 1); i++) {      // extract character bigrams from string1
                string1_bigrams.insert(string1.substr(i, 2));
        }
        for(unsigned int i = 0; i < (string2.length() - 1); i++) {      // extract character bigrams from string2
                string2_bigrams.insert(string2.substr(i, 2));
        }

        int intersection = 0;

        // find the intersection between the two sets

        for(set<string>::iterator IT = string2_bigrams.begin();
            IT != string2_bigrams.end();
            IT++)
        {
                intersection += string1_bigrams.count((*IT));
        }

        // calculate dice coefficient
        int total = string1_bigrams.size() + string2_bigrams.size();
        float dice = (float)(intersection * 2) / (float)total;

        return dice;
}
