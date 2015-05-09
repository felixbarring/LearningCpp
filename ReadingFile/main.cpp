#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {

	vector<string> list;
	ifstream in_stream;
	string line;
	in_stream.open("hello/hello.txt");

	// Add all lines to the vecotr

	for (string line; getline( in_stream, line ); ) {
		  list.push_back(line);
	}
	in_stream.close();

	// Print all the lines in the vecotr
	for(auto row : list) {
		std::cout<<row<<"\n";
	}


}
