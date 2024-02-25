#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;

vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string, int> freqMap;
    for (const string& word : words) {
        freqMap[word]++;
    }
    
    auto compare = [&](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    };
    priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(compare)> minHeap(compare);
    
    for (const auto& entry : freqMap) {
        minHeap.push(entry);
        if (minHeap.size() > k) minHeap.pop();
    }
    
    vector<string> result(k);
    for (int i = k - 1; i >= 0; i--) {
        result[i] = minHeap.top().first;
        minHeap.pop();
    }
    
    return result;
}

int main() {
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;
    vector<string> result = topKFrequent(words, k);

    cout << "Top " << k << " frequent words: ";
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

