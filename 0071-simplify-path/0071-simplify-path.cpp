class Solution {
public:
    string simplifyPath(string path) {
        stack <string> p;
        stringstream p1(path);
        string temp;
        vector<string> s;
        string result;
        while(getline(p1,temp,'/')){
            if(temp == ".." && p.empty()==0){
                p.pop();
            }
            else if(temp == "." || temp == ""){
            }
            else if(temp != ".."){
                p.push(temp);
            }
        }
        if(p.empty()==1){
            return "/";
        }
        while(p.empty()==0){
            string t = p.top();
            s.push_back(t);
            s.push_back("/");

            p.pop();
        }
        for(int i=s.size()-1;i>=0;i--){
            result += s[i];
        }
        return result;
    }
};