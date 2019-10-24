#include<bits/stdc++.h>
using namespace std;

vector<string> split_string(string str, char sep) {
    vector<string> words;
    string word;

    for(auto it = str.begin(); it <= str.end(); it++) {
        char ch = *it;
        if(ch == sep) {
            if(word.size()) {
                words.push_back(word);
                word.clear();
            }
            continue;
        }else {
        word.push_back(ch);
        if( it == str.end() - 1) {
            words.push_back(word);
        }
        }
    }
    return words;
}
vector<int> get_integer_summands(vector<string> v) {
    vector<int> ans;

    for(auto it = v.begin(); it != v.end(); it++) {
        string el = *it;
        ans.push_back(stoi(el));
    }
    return ans;
}

//template <typename t>
void bubble_sort(vector<int>& v) {
    int n = v.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(v[j] > v[j+1])
                swap(v[j], v[j+1]);
        }
    }
}

int main()
{
    string input;
    cin >> input;

    vector<int> ans = get_integer_summands(split_string(input, '+'));
    bubble_sort(ans);
    for(int i = 0; i < ans.size() ; i++){
        if(i) cout << '+' ;
        cout << ans[i] ;
    }
    cout << endl;
    return 0;
}
