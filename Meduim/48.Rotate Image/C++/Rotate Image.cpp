#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


void printvector(vector<vector<int>>& matrix) {
    // Get the dimensions of the 2D array
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Print the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
       cout << endl; // Move to the next line after each row
    }
    cout << endl;


}

void rotate(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Create a new_matrix and copy the contents
    vector<vector<int>> new_image(rows, vector<int>(cols));
    vector<vector<int>> new_image_2(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            new_image[j][(rows - 1) - i] = matrix[i][j]; // Rotate to Right
            new_image_2[i][j] = matrix[j][(rows - 1) - i]; // Rotate to Left 
        }
    }

    printvector(new_image);
    printvector(new_image_2);
    matrix = new_image;
    printvector(matrix);
}


int main() {
    vector<vector<int>> matrix;
    matrix = { {1,2,3},{4,5,6},{7,8,9} };
    printvector(matrix);
	rotate(matrix);
}	


