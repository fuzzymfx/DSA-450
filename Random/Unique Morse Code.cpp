class Solution
{
public:
	int uniqueMorseRepresentations(vector<string> &words)
	{
		set<string> s;
		string ref[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
		for (int i = 0; i < words.size(); i++)
		{
			string w = "";
			for (int j = 0; j < words[i].length(); j++)
				w.append(ref[words[i][j] - 'a']);
			s.insert(w);
		}
		return s.size();
	}
};