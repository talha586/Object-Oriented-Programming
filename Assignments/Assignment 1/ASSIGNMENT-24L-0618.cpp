////24L-0618
//// BCS-2B
//#include <iostream>
//#include <fstream>
//using namespace std;
//void getinput_matrices(int**& matrix1, int& row1, int& col1, int**& matrix2, int& row2, int& col2) 
//{
//    ifstream input("value_matrix.txt");
//    if (!input) 
//    {
//        cout << "Error: Could not open file." << endl;
//        return;
//    }
//   
//    input >> row1;
//    input >> col1;
//    matrix1 = new int* [row1];
//    for (int i = 0; i < row1; i++) 
//    {
//        matrix1[i] = new int[col1];
//        for (int j = 0; j < col1; j++) 
//        {
//            input >> matrix1[i][j];
//        }
//    }
//    
//    input >> row2;
//    input >> col2;
//    matrix2 = new int* [row2];
//    for (int i = 0; i < row2; i++) 
//    {
//        matrix2[i] = new int[col2];
//        for (int j = 0; j < col2; j++) 
//        {
//            input >> matrix2[i][j];
//        }
//    }
//    input.close();
//}
//
//int** sparse_array(int** matrix, int row, int col) 
//{
//    int** sparse_matrix = new int* [row];
//
//    for (int i = 0; i < row; i++) 
//    {
//        int count = 0;
//        for (int j = 0; j < col; j++) 
//        {
//            if (matrix[i][j] != 0) count++;
//        }
//
//        sparse_matrix[i] = new int[count * 2 + 1];
//        sparse_matrix[i][0] = count;
//
//        int index = 1;
//        for (int j = 0; j < col; j++) 
//        {
//            if (matrix[i][j] != 0) 
//            {
//                sparse_matrix[i][index] = j;
//                sparse_matrix[i][index + 1] = matrix[i][j];
//                index += 2;
//            }
//        }
//    }
//    return sparse_matrix;
//    for (int i=0;i<row;i++)
//    {
//        delete[] sparse_matrix[i];
//    }
//    delete[] sparse_matrix;
//}
//
//int** getaddition(int** matrix1, int** matrix2, int row,int row2,int col,int col2,bool&found) 
//{
//    int** add_matrix = new int* [row];
//
//    if (row==row2 && col==col2 )
//    {
//        found = true;
//
//        for (int i = 0; i < row; i++)
//        {
//            int arr[20];
//            int x = 1, y = 1, z = 1, values = 0;
//            int counter_1 = (matrix1[i][0] * 2) + 1;
//            int counter_2 = (matrix2[i][0] * 2) + 1;
//
//            while (x < counter_1 && y < counter_2)
//            {
//                if (matrix1[i][x] == matrix2[i][y])
//                {
//                    arr[z++] = matrix1[i][x];
//                    arr[z++] = matrix1[i][x + 1] + matrix2[i][y + 1];
//                    x += 2; y += 2; values++;
//                }
//                else if (matrix1[i][x] < matrix2[i][y])
//                {
//                    arr[z++] = matrix1[i][x];
//                    arr[z++] = matrix1[i][x + 1];
//                    x += 2; values++;
//                }
//                else
//                {
//                    arr[z++] = matrix2[i][y];
//                    arr[z++] = matrix2[i][y + 1];
//                    y += 2; values++;
//                }
//            }
//
//            while (x < counter_1)
//            {
//                arr[z++] = matrix1[i][x];
//                arr[z++] = matrix1[i][x + 1];
//                x += 2; values++;
//            }
//            while (y < counter_2)
//            {
//                arr[z++] = matrix2[i][y];
//                arr[z++] = matrix2[i][y + 1];
//                y += 2; values++;
//            }
//
//            arr[0] = values;
//            add_matrix[i] = new int[(values * 2) + 1];
//            for (int c = 0; c < (values * 2) + 1; c++)
//            {
//                add_matrix[i][c] = arr[c];
//            }
//        }
//    }
//
//    else
//    {
//        found = false;
//        cout << "Sum not possible:";
//    }
//    return add_matrix;
//    if (found==true)
//    {
//        for (int i = 0;i < row;i++)
//        {
//            delete[] add_matrix[i];
//        }
//    }
//    delete[]add_matrix;
//}
//
//int** getsubtraction(int** matrix1, int** matrix2, int row,int row2,int col,int col2,bool& found)
//{
//    int** sub_matrix = new int* [row];
//
//    if (row == row2 && col == col2)
//    {
//        found = true;
//
//        for (int i = 0; i < row; i++)
//        {
//            int arr[20];
//            int x = 1, y = 1, z = 1, values = 0;
//            int counter_1 = (matrix1[i][0] * 2) + 1;
//            int counter_2 = (matrix2[i][0] * 2) + 1;
//
//            while (x < counter_1 && y < counter_2)
//            {
//                if (matrix1[i][x] == matrix2[i][y])
//                {
//                    arr[z++] = matrix1[i][x];
//                    arr[z++] = matrix1[i][x + 1] - matrix2[i][y + 1];
//                    x += 2; y += 2; values++;
//                }
//                else if (matrix1[i][x] < matrix2[i][y])
//                {
//                    arr[z++] = matrix1[i][x];
//                    arr[z++] = matrix1[i][x + 1];
//                    x += 2; values++;
//                }
//                else
//                {
//                    arr[z++] = matrix2[i][y];
//                    arr[z++] = matrix2[i][y + 1];
//                    y += 2; values++;
//                }
//            }
//
//            while (x < counter_1)
//            {
//                arr[z++] = matrix1[i][x];
//                arr[z++] = matrix1[i][x + 1];
//                x += 2; values++;
//            }
//            while (y < counter_2)
//            {
//                arr[z++] = matrix2[i][y];
//                arr[z++] = matrix2[i][y + 1];
//                y += 2; values++;
//            }
//
//            arr[0] = values;
//            sub_matrix[i] = new int[(values * 2) + 1];
//            for (int c = 0; c < (values * 2) + 1; c++)
//            {
//                sub_matrix[i][c] = arr[c];
//            }
//        }
//    }
//
//    else
//    {
//        found = false;
//        cout << "difference not possible:";
//    }
//
//    return sub_matrix;
//    if (found==true)
//    {
//        for (int i = 0;i < row;i++)
//        {
//            delete[]sub_matrix[i];
//        }
//    }
//    delete[] sub_matrix;
//
//
//}
//
//int** gettranspose(int** matrix, int row,int col) 
//{
//
//    int** transpose_matrix = new int* [col];
//    for (int i=0;i<col;i++)
//    {
//        int value = 0;
//        int arr[20];
//        int s = 1;
//        for (int j=0;j<row;j++)
//        {
//            for (int k=1;k<matrix[j][0]*2+1;k+=2)
//            {
//                if (i==matrix[j][k])
//                {
//                    arr[s++] = j;
//                    arr[s++] = matrix[j][k+1];
//                    value++;
//                }
//            }
//        }
//        arr[0] = value;
//        transpose_matrix[i] = new int[value * 2 + 1];
//        for (int l=0;l<value*2+1;l++)
//        {
//            transpose_matrix[i][l] = arr[l];
//        }
//
//    }
//    return transpose_matrix;
//    for (int i=0;i<row;i++)
//    {
//        delete[]transpose_matrix[i];
//    }
//    delete[] transpose_matrix;
//}
//
//int** getmultiplication(int** matrix1, int row1, int** matrix2, int row2,int col,int col2,bool& found) 
//{
//    int** res = new int* [row1];
//
//    if (row1==col2 && row2==col)
//    {
//        found = true;
//        for (int i = 0;i < row1;i++)
//        {
//            int arr[100];
//            int value = 0;
//            int counter_1 = matrix1[i][0] * 2 + 1;
//            int index = 0, pos = 1;
//            for (int ietrate= 0;ietrate < col2;ietrate++)
//            {
//                int sum = 0;
//                for (int j = 1;j < counter_1;j += 2)
//                {
//                    for (int k = 1;k < matrix2[matrix1[i][j]][0] * 2 + 1;k += 2)
//                    {
//                        if (ietrate == matrix2[matrix1[i][j]][k])
//                        {
//                            index = matrix2[matrix1[i][j]][k];
//                            sum += matrix1[i][j + 1] * matrix2[matrix1[i][j]][k + 1];
//                        }
//                    }
//                }
//                if (sum != 0)
//                {
//                    arr[pos++] = index;
//                    arr[pos++] = sum;
//                    value++;
//                }
//            }
//            arr[0] = value;
//            res[i] = new int[value * 2 + 1];
//            for (int s = 0;s < value * 2 + 1;s++)
//            {
//                res[i][s] = arr[s];
//            }
//        }
//        return res;
//    }
//
//    else
//    {
//        found = false;
//        cout << "Multiplication not possible";
// 
//    }
//    if (found==true)
//    {
//        for (int i = 0;i < row1;i++)
//        {
//            delete[] res[i];
//        }
//    }
//    delete[] res;
//    return 0;
//
//}
//
//void output_sparse(int** sparse_matrix, int row) 
//{
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < (sparse_matrix[i][0] * 2) + 1; j++)
//        {
//            cout << sparse_matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void output_standard(int**matrix,int row,int col)
//{
//    cout << "Standard form of matrix:" << endl;
//    for (int i=0;i<row;i++)
//    {
//        for (int j=0;j<col;j++)
//        {
//            bool flag = false;
//            int x;
//            for (int k=1;k<matrix[i][0]*2+1; k+=2)
//            {
//                if (j==matrix[i][k])
//                {
//                    flag = true;
//                    x = matrix[i][k+1];
//                    break;
//                }
//            }
//            if (flag==true)
//            {
//                cout << x << " ";
//            }
//            else
//            {
//                cout << "0" << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//int main() 
//{
//    int row1 = 0, col1 = 0, row2 = 0, col2 = 0;
//    int** matrix1 = nullptr, ** matrix2 = nullptr;
//    bool found = true;
//
//    getinput_matrices(matrix1, row1, col1, matrix2, row2, col2);
//    matrix1 = sparse_array(matrix1, row1, col1);
//    matrix2 = sparse_array(matrix2, row2, col2);
//
//    cout << "Sparse representation of matrix1:"<<endl;
//    output_sparse(matrix1, row1);
//
//    cout << "Sparse representation of matrix 2:"<<endl;
//    output_sparse(matrix2, row2);
//    cout << endl;
//
//    cout << "Addition of matrix:"<<endl;
//    int** add_matrix = getaddition(matrix1, matrix2, row1,row2,col1,col2,found);
//    if (found==true)
//    {
//        output_sparse(add_matrix, row1);
//        cout << endl;
//        output_standard(add_matrix, row1, col1);
//    }
//    found = true;
//    cout << "Subtraction of matrix:"<<endl;
//
//    int** sub_matrix = getsubtraction(matrix1, matrix2, row1,row2,col1,col2,found);
//    if (found==true)
//    {
//        output_sparse(sub_matrix, row1);
//        cout << endl;
//        output_standard(sub_matrix, row1, col1);
//    }
//    cout << "Transpose of matrix 1:"<<endl;
//    int** trans_matrix1 = gettranspose(matrix1, row1,col1);
//    if (found==true)
//    {
//        output_sparse(trans_matrix1, row1);
//        output_standard(trans_matrix1, row1, col1);
//    }
//    found = true;
//    cout << "Transpose of matrix 2:" << endl;
//    int** trans_matrix2 = gettranspose(matrix2, row2, col2);
//    if (found == true)
//    {
//        output_sparse(trans_matrix2, row2);
//        output_standard(trans_matrix2, row2, col2);
//    }
//    cout << "Multiplication of matrix:" << endl;
//    int** mul_matrix = getmultiplication(matrix1, row1, matrix2, row2,col1,col2,found);
//    if (found==true)
//    {
//        output_sparse(mul_matrix, row1);
//        output_standard(mul_matrix, row1, col1);
//    }
//    cout << endl;
//    for (int i = 0;i < row1;i++)
//    {
//        delete[] matrix1[i];
//    }
//    delete[] matrix1;
//
//    for (int i = 0;i < row2;i++)
//    {
//        delete[] matrix2[i];
//    }
//    delete[] matrix2;
//
//    if (found==true)
//    {
//        for (int i = 0;i < row1;i++)
//        {
//            delete[] add_matrix[i];
//        }
//    }
//    delete[] add_matrix;
//
//    if (found==true)
//    {
//        for (int i = 0;i < row1;i++)
//        {
//            delete[] sub_matrix[i];
//        }
//    }
//
//    delete[] sub_matrix;
//
//    for (int i = 0;i < row1;i++)
//    {
//        delete[] trans_matrix1[i];
//    }
//    delete[] trans_matrix1;
//
//    if (found==true)
//    {
//        for (int i = 0;i < row1;i++)
//        {
//            delete[] mul_matrix[i];
//        }
//    }
//    delete[] mul_matrix;
//}