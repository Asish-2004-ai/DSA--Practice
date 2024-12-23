#include <bits/stdc++.h> 

vector<int> reverse(vector<int> a){
	int i = 0;
	int j = a.size()-1;

	while(i<j){
		swap(a[i++], a[j--]);
	}

	return a;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	int carry = 0;
	vector<int> ans;

	while(i>=0 && j>=0){
		int first = a[i];
		int sec = b[j];
		int sum = first + sec + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;

	}

	while(i>=0){
		int sum =a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	while(j>=0){
		int sum =b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}

	while(carry !=0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}

	return reverse(ans);

}