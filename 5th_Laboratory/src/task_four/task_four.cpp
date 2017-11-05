/**
 * @file    task_four.cpp
 * @author  Silvio da Costa Sampaio (codes)
 * @author  Lucas Gomes Dantas (comments)
 * @since   05/11/2017
 * @date    05/11/2017
 */

#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::back_inserter;
#include <vector>
using std::vector;
#include <algorithm>
using std::transform;

/**
 * @brief This function calculates the square of a given integer.
 * @param val An integer in which the square operation will be applied.
 * @return The square of param provided by user.
 */
int square(int val) {
	return val * val;
}

int main(int argc, char* argv[]) {

	// Creating vector col and col2. After, pushes back values [1, ..., 9] to vector col.
	// ========================================================================================
	vector<int> col;
	vector<int> col2;
	for (int i = 1; i <= 9; ++i) {
		col.push_back(i);
	}
	// ========================================================================================
	
	// std::back_inserter = Creates a back-insert iterator that inserts new elements at the end
	// of the container to which it is applied.
	// std::transform = Applies a given function to a range and stores the result in another.
	// Here we will apply function square() to each element in range [ col.begin(), col.end() )
	// and gonna store the result at the end (or "back") of container col2.
	// After this, col2 will store the square of each element of col.
	// ========================================================================================
	transform(col.begin(), col.end(), back_inserter(col2), square);
	// ========================================================================================

	// Iterating over each element of vector col2 and printing its values.
	// ========================================================================================	
	for (vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
		cout << (*it) << " ";
	}
	// ========================================================================================	
	
	cout << endl;
	return 0;
}