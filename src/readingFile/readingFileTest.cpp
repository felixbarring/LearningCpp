#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void test() {

	vector<string> list;
	ifstream in_stream;
	string line;
	in_stream.open("../resources/hello/hello.txt");

	// Add all lines to the vector
	for (string line; getline( in_stream, line ); ) {
		  list.push_back(line);
	}
	in_stream.close();

	// Print all the lines in the vector
	for(auto row : list) {
		std::cout<<row<<"\n";
	}

}