class Solution {
public:
    string multiply(string num1, string num2) {
		int n = num2.size();
        int m = num1.size();

		// Base Conditions
		if (m == 0 || n == 0 || num1=="0" || num2=="0") {
			return "0";
		}
		if (num1=="1") {
			return num2;
		}
		if (num2=="1") {
			return num1;
		}

		// Output can be maximum of length M + N.
		int result[m+n];
        for(int i=0; i<m+n; i++)
            result[i]=0;

		for (int i = m - 1; i >= 0; i--) {
			for (int j = n - 1; j >= 0; j--) {
				int product = (num1[i] - '0') * (num2[j] - '0');
				product += result[i + j + 1];

				// Adding the new product into the result array
				result[i + j + 1] = product % 10;
				result[i + j] += product / 10;
			}
		}

		string sb="";
		for (int r : result) {
			if (sb.size() == 0 && r == 0) {
				continue;
			}
			sb+=to_string(r);
		}

		return sb;
    }
};