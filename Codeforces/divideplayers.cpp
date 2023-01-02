class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
    long long int sum = 0;
    int size = skill.size() / 2;
    for (int i = 0; i < skill.size(); i++)
    {
        sum = sum + skill[i];
    }
    // cout<<sum<<" ";
   if(sum%size==0){ 
       sum = sum / size;
       vector<pair<int, int>> vp;
    map<int,int> arr;
       // cout<<sum;
        for(int k=0;k<skill.size();k++){
            arr[k]=0;
        }
       
    for (int j = 0; j < skill.size(); j++)
    {
        if (arr[j]==0)
        {
            for (int i = 1; i < skill.size(); i++)
            {
                if(arr[i]==0 && i!=j){if (skill[j] + skill[i] == sum)
                {
                    vp.push_back({skill[j], skill[i]});
                    // cout<<skill[j]<<" "<<skill[i];
                    arr[i] = 1;
                    arr[j] = 1;
                    break;
                }}
            }
        }
    }

    long long int summ=0;
   if(vp.size()==size){ for(auto ele:vp){
       // cout<<ele.first<<" "<<ele.second<<endl;
       
        summ+=ele.first*ele.second;
    }}else return -1;
    return summ;
   }else{
       return -1;
   }
        
    }
};