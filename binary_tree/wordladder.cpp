#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
	
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        //now use BFS stuff
        queue <string> current, next; 
        current.push(beginWord);
        int level=1;
        
        while(!current.empty() && !wordList.empty()){
            level++;
            while(!current.empty()){
                string currentString = current.front();
                current.pop();
                // search for all the words within 1 distance
                
                vector<string> words = wordsWithinDistance(wordList, currentString);

                // push results into queue next;
                for(int i=0; i < words.size(); i++ ){
                    next.push(words[i]);
                    if(words[i].compare(endWord)==0){
                        return level++;
                    }
                }
            
            }
            
            swap(current,next);

        }
        
        return 0;
    }
    
    int checkWords(vector<string> wordSet, string word){
        for( int i=0; i< wordSet.size(); i++ ){
            if(wordSet[i].compare(word)==0){
                return i;
            } 
        }

        return -1;
    }

    vector<string> wordsWithinDistance(vector<string> &wordSet, string word){
        string transformedWord (word);
        vector<string> result;

        for(int i=0; i < wordSet.size(); i++){
            char currentChar = word[i];
            for(char c='a'; c<='z'; c++){

                if(c == currentChar){
                    continue;
                }

                transformedWord[i]=c;
                int matchResult = checkWords(wordSet,transformedWord);
                if(matchResult!= -1){
                    //if they are the same, then remove this word and push it to result;
                    result.push_back(transformedWord);
                    wordSet.erase(wordSet.begin()+matchResult);
                }
            }
            transformedWord[i] = currentChar;
        }

        return result;
    }
};


int main(){
	vector<string> wordList;

	wordList.push_back("hot");
	wordList.push_back("dog");
	wordList.push_back("lot");
	wordList.push_back("ait");
	wordList.push_back("bit");
	wordList.push_back("cit");

	vector<string> list = wordsWithinDistance(wordList, "hit");

	for(int i=0; i <list.size();i++){
		cout << list[i] << endl;
	}
	return 0;
}