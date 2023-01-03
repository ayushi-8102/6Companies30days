class Solution {
public:
    int evalRPN(vector<string>& tokens) {
	stack<long long > st;
	for(auto& i : tokens){
		if(i == "+" || i == "-" || i == "*" || i == "/") {
			long long m = st.top(); 
            st.pop();
			long long n = st.top(); 
            st.pop();
			if(i == "+") m = m + n;
			if(i == "-") m = n - m;
			if(i == "/") m = n / m;
			if(i == "*") m = n * m;   
			st.push(m);
        }
		else st.push(stoll(i));  
    }
         // stoi - converts from string to int     
	return st.top(); 
}
};
