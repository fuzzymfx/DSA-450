class Solution
{
public:
	int minSetSize(vector<int> &arr)
	{
		// O(N)
		unordered_map<int, int> m;
		for (int i = 0; i < arr.size(); i++)
		{
			m[arr[i]]++;
		}
		vector<int> freq;
		int sum = 0;
		for (auto x : m)
		{
			freq.push_back(x.second);
			sum += x.second;
		}
		int size = sum;
		int count = 0;
		sort(freq.begin(), freq.end());
		while (size > (sum / 2))
		{
			size = size - freq.back();
			freq.pop_back();
			count++;
		}
		return count;
		// O(NlogN)
		//  set<int> s;
		//  for(int i=0;i<arr.size();i++)
		//      s.insert(arr[i]);
		//  vector<int>v(s.begin(),s.end());
		//  vector<int>vc(v.size(),0);
		//  int sum=0;
		//  for(int i=0;i<arr.size();i++)
		//      vc[find(v.begin(), v.end(), arr[i])-v.begin()]++;
		//  sum=accumulate(vc.begin(), vc.end(), 0);
		//  int size=sum;
		//  int count=0;
		//  sort(vc.begin(),vc.end());
		//  while(size>sum/2){
		//      size-=vc.back();
		//      vc.pop_back();
		//      count++;
		//  }
		//  return count;
	}
};