
class Trie {
	vector < string > arr;
	map< string, int > mp;
public:
	/** Initialize your data structure here. */
	Trie() {

		arr.clear();
		mp.clear();

	}

	/** Inserts a word into the trie. */
	void insert(string word) {
		arr.push_back(word);
		mp[word]++;

	}

	/** Returns if the word is in the trie. */
	bool search(string word) {
		if (mp[word] > 0) {
			return true;
		}
		else
			return false;
	}

	/** Returns if there is any word in the trie that starts with the given prefix. */
	bool startsWith(string prefix) {

		int len = prefix.length();

		for (int i = 0; i < arr.size(); i++) {
			string cur = arr[i].substr(0, len);
			if (cur == prefix) {
				return true;
			}
			cur.clear();
		}
		return false;
	}
};