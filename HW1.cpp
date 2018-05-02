//  Created by Mike3 on 20/03/2018.
//  Copyright © 2018 Mike3. All rights reserved.
//

#include <iostream>
#include <string>
#include <limits>
using namespace std;

string in;


bool inspect(int d, int i, long last) {

	if (d<0) return false;
	else if (last <= i) return true;

	else if (in[i] == in[last]) {

		return (inspect(d, i + 1, last - 1));
	}

	else {
		return (inspect(d - 1, i + 1, last)) ||
			(inspect(d - 1, i, last - 1));
	}
}




int main() {
	int i = 0;
	int d;
	size_t len;//number of delete
	long last;
	bool result;

	cin >> d;
	cin.ignore();

	//read line by line
	while (getline(cin, in)) {
		len = in.length();
		last = len - 1;

		result = inspect(d, i, last);


		if (result) cout << "Yes" << '\n';
		else cout << "No" << '\n';

	}

	system("pause");
	return 0;
}
