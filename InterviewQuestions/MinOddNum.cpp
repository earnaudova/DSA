#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <unordered_map>

/*
 * Word predictor
 *
 * When typing a word, predict the next one.
 * There is already a trained data which shall be used.
 *
 * Training data:
 * [ ["I", "am", "in", "here"],
 *   ["so", "I", "am", "red"],
 *   ["Sam", "is", "I", "have", "cat"]
 *   ]
 *
 *   1. How could we optimize this solution?
 */

using namespace std;

class Predict{
private:
    unordered_map<string, unordered_map<string, int>> dict;

public:
    Predict(vector<vector<string>> &trainingData){
        for(vector<string> line : trainingData){
            for(int i = 0; i < line.size()-1; i++){
                string firstElement = line[i];
                string secElement = line[i+1];

                dict[firstElement][secElement]++;
            }
        }
    }

    string getWord(string word){
        string res = "";
        for(auto mp: dict){
            if(mp.first == "word"){
                int maxNum = INT_MIN;
                for(auto p: mp.second){
                    if(p.second > maxNum){
                        res = p.first;
                        maxNum = p.second;
                    }
                }
            }
        }
        return res;
    }
};