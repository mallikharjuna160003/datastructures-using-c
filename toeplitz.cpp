#include<iostream>
using namespace std;
bool checkDiagonal(int mat[N][M], int i, int j)
{
	int res = mat[i][j];
	while (++i < N && ++j < M)
	{
		// mismatch found
		if (mat[i][j] != res)
			return false;
	}

	// we only reach here when all elements
	// in given diagonal are same
	return true;
}
bool isToepliz(int mat[N][M],int row,int col)
{
	// do for each element in first row
	for (int i = 0; i < M; i++)
	{
		// check descending diagonal starting from
		// position (0, j) in the matrix
		if (!checkDiagonal(mat, 0, i))
			return false;
	}

	// do for each element in first column
	for (int i = 1; i < N; i++)
	{
		// check descending diagonal starting from
		// position (i, 0) in the matrix
		if (!checkDiagonal(mat, i, 0))
			return false;
	}

	// we only reach here when each descending
	// diagonal from left to right is same
	return true;
}



int main(){
	
	int row,col;
	cin>>"Please input size of the matrix"<<row,col;
	
	int matrix[row][col];
	cout<<"Please input the Matrix row by row:";
    for(int i=0;i<row;i++)
    {
     	for(int j=0;j<col;j++)
     	{
     		cin>>matrix[i][j];
     	 }
    }    
    char T;
	cin>>"Please input the Type:"<<T;
	
	if (isToepliz(matrix,row,col))
		cout << "Matrix is a Toepliz ";
	else
		cout << "Matrix is not a Toepliz ";
	return 0;
}
