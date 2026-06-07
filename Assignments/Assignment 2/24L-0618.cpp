//////24L-0618
////// BCS-2B
//#include <iostream>
//#include <fstream>
//using namespace std;
//class operation {
//private:
//    int row, col;
//    int** matrix;
//    int** sparse_matrix; 
//    bool found = true;
//
//public:
//    operation() 
//    {
//        row = 0;
//        col = 0;
//        matrix = nullptr;
//        sparse_matrix = nullptr;
//    }
//
//    operation(int r, int c)
//    {
//        row = r;
//        col = c;
//        found = true;
//        matrix = new int* [row];
//        for (int i = 0; i < row; i++) 
//        {
//            matrix[i] = new int[col];
//            for (int j = 0; j < col; j++) 
//            {
//                matrix[i][j] = 0;
//            }
//        }
//        sparse_matrix = nullptr;
//    }
//
//    // Copy constructor
//    operation(const operation& o)
//    {
//        row = o.row;
//        col = o.col;
//        found = o.found;
//        matrix = new int* [row];
//        for (int i = 0; i < row; i++) 
//        {
//            matrix[i] = new int[col];
//            for (int j = 0; j < col; j++)
//            {
//                matrix[i][j] = o.matrix[i][j];
//            }
//        }
//        convert_to_sparse(); // Convert the copied matrix to sparse form
//    }
//
//     //Copy Assignment Operator (Deep Copy)
//    operation& operator=(const operation& o) 
//    {
//        if (this != &o) 
//        { // Prevent self-assignment
//   
//            for (int i = 0; i < row; i++) {
//                delete[] sparse_matrix[i];
//            }
//            delete[] sparse_matrix;
//
//            // Copy new data
//            row = o.row;
//            col = o.col;
//            sparse_matrix = new int* [row];
//
//            for (int i = 0; i < row; i++) 
//            {
//                int s = o.sparse_matrix[i][0] * 2 + 1;
//                sparse_matrix[i] = new int[s];
//
//                for (int j = 0; j < s; j++) {
//                    sparse_matrix[i][j] = o.sparse_matrix[i][j];
//                }
//            }
//        }
//        return *this;
//    }
//
//    // Move Assignment Operator
//    operation& operator=(operation& o) noexcept 
//    {
//        if (this != &o) 
//        { // Prevent self-assignment
//            for (int i = 0; i < row; i++) {
//                delete[] sparse_matrix[i];
//            }
//            delete[] sparse_matrix;
//
//            // Transfer ownership
//            row = o.row;
//            col = o.col;
//            sparse_matrix = o.sparse_matrix;
//
//            // Nullify source
//            o.row = 0;
//            o.col = 0;
//            o.sparse_matrix = nullptr;
//        }
//        return *this;
//    }
//
//    operation(operation& o)//move constructor
//    {
//        row = o.row;
//        col =o.col;
//        found = o.found;
//        matrix = o.matrix;
//        sparse_matrix = o.sparse_matrix;
//        o.matrix = nullptr;
//        o.sparse_matrix = nullptr;
//        o.row = 0;
//        o.col = 0;
//    }
//
//
//    // Convert standard matrix to sparse matrix
//    void convert_to_sparse() 
//    {
//        sparse_matrix = new int* [row];
//        for (int i = 0; i < row; i++) 
//        {
//            int count = 0;
//            for (int j = 0; j < col; j++) 
//            {
//                if (matrix[i][j] != 0) count++;
//            }
//
//            sparse_matrix[i] = new int[count * 2 + 1];
//            sparse_matrix[i][0] = count;
//
//            int index = 1;
//            for (int j = 0; j < col; j++)
//            {
//                if (matrix[i][j] != 0) {
//                    sparse_matrix[i][index] = j;
//                    sparse_matrix[i][index + 1] = matrix[i][j];
//                    index += 2;
//                }
//            }
//        }
//    }
//
//    // Convert sparse matrix back to standard matrix
//    void convert_to_standard() 
//    {
//        for (int i = 0; i < row; i++) 
//        {
//            for (int j = 0; j < col; j++) 
//            {
//                matrix[i][j] = 0; // Initialize to 0
//            }
//            for (int j = 1; j < sparse_matrix[i][0] * 2 + 1; j += 2) 
//            {
//                int col_index = sparse_matrix[i][j];
//                int value = sparse_matrix[i][j + 1];
//                matrix[i][col_index] = value;
//            }
//        }
//    }
//
//    void getinput_matrices() {
//        ifstream input("value_matrix.txt");
//        if (!input) 
//        {
//            cout << "Error. Could not open file." << endl;
//            return;
//        }
//
//        input >> row;
//        input >> col;
//        matrix = new int* [row];
//        for (int i = 0; i < row; i++) 
//        {
//            matrix[i] = new int[col];
//            for (int j = 0; j < col; j++) 
//            {
//                input >> matrix[i][j];
//            }
//        }
//
//        input.close();
//        convert_to_sparse(); // Convert input matrix to sparse form
//    }
//
//    void getinput_matrices_2() {
//        ifstream input("value_matrix_2.txt");
//        if (!input) 
//        {
//            cout << "Error. Could not open file." << endl;
//            return;
//        }
//
//        input >> row;
//        input >> col;
//        matrix = new int* [row];
//        for (int i = 0; i < row; i++) 
//        {
//            matrix[i] = new int[col];
//            for (int j = 0; j < col; j++) 
//            {
//                input >> matrix[i][j];
//            }
//        }
//        input.close();
//        convert_to_sparse(); // Convert input matrix to sparse form
//    }
//
//    operation getaddition(operation& o2) 
//    {
//        operation result(row, col);
//        if (row == o2.row && col == o2.col) 
//        {
//            found = true;
//            result.sparse_matrix = new int* [row];
//            for (int i = 0; i < row; i++) 
//            {
//                int arr[20];
//                int x = 1, y = 1, z = 1, values = 0;
//                int counter_1 = (sparse_matrix[i][0] * 2) + 1;
//                int counter_2 = (o2.sparse_matrix[i][0] * 2) + 1;
//
//                while (x < counter_1 && y < counter_2) 
//                {
//                    if (sparse_matrix[i][x] == o2.sparse_matrix[i][y])
//                    {
//                        arr[z++] = sparse_matrix[i][x];
//                        arr[z++] = sparse_matrix[i][x + 1] + o2.sparse_matrix[i][y + 1];
//                        x += 2; y += 2; values++;
//                    }
//                    else if (sparse_matrix[i][x] < o2.sparse_matrix[i][y]) 
//                    {
//                        arr[z++] = sparse_matrix[i][x];
//                        arr[z++] = sparse_matrix[i][x + 1];
//                        x += 2; values++;
//                    }
//                    else 
//                    {
//                        arr[z++] = o2.sparse_matrix[i][y];
//                        arr[z++] = o2.sparse_matrix[i][y + 1];
//                        y += 2; values++;
//                    }
//                }
//
//                while (x < counter_1) 
//                {
//                    arr[z++] = sparse_matrix[i][x];
//                    arr[z++] = sparse_matrix[i][x + 1];
//                    x += 2; values++;
//                }
//                while (y < counter_2) 
//                {
//                    arr[z++] = o2.sparse_matrix[i][y];
//                    arr[z++] = o2.sparse_matrix[i][y + 1];
//                    y += 2; values++;
//                }
//
//                arr[0] = values;
//                result.sparse_matrix[i] = new int[(values * 2) + 1];
//                for (int c = 0; c < (values * 2) + 1; c++) 
//                {
//                    result.sparse_matrix[i][c] = arr[c];
//                }
//            }
//            result.convert_to_standard(); // Convert result back to standard form
//        }
//        else 
//        {
//            found = false;
//            cout << "Sum not possible:" << endl;
//        }
//        return result;
//    }
//
//    operation getsubtraction(operation& o2) 
//    {
//        operation result(row, col);
//        if (row == o2.row && col == o2.col)
//        {
//            found = true;
//            result.sparse_matrix = new int* [row];
//            for (int i = 0; i < row; i++)
//            {
//                int arr[20];
//                int x = 1, y = 1, z = 1, values = 0;
//                int counter_1 = (sparse_matrix[i][0] * 2) + 1;
//                int counter_2 = (o2.sparse_matrix[i][0] * 2) + 1;
//
//                while (x < counter_1 && y < counter_2) 
//                {
//                    if (sparse_matrix[i][x] == o2.sparse_matrix[i][y]) 
//                    {
//                        arr[z++] = sparse_matrix[i][x];
//                        arr[z++] = sparse_matrix[i][x + 1] - o2.sparse_matrix[i][y + 1];
//                        x += 2; y += 2; values++;
//                    }
//                    else if (sparse_matrix[i][x] < o2.sparse_matrix[i][y]) 
//                    {
//                        arr[z++] = sparse_matrix[i][x];
//                        arr[z++] = sparse_matrix[i][x + 1];
//                        x += 2; values++;
//                    }
//                    else 
//                    {
//                        arr[z++] = o2.sparse_matrix[i][y];
//                        arr[z++] = o2.sparse_matrix[i][y + 1];
//                        y += 2; values++;
//                    }
//                }
//
//                while (x < counter_1) 
//                {
//                    arr[z++] = sparse_matrix[i][x];
//                    arr[z++] = sparse_matrix[i][x + 1];
//                    x += 2; values++;
//                }
//                while (y < counter_2) 
//                {
//                    arr[z++] = o2.sparse_matrix[i][y];
//                    arr[z++] = o2.sparse_matrix[i][y + 1];
//                    y += 2; values++;
//                }
//
//                arr[0] = values;
//                result.sparse_matrix[i] = new int[(values * 2) + 1];
//                for (int c = 0; c < (values * 2) + 1; c++)
//                {
//                    result.sparse_matrix[i][c] = arr[c];
//                }
//            }
//            result.convert_to_standard(); // Convert result back to standard form
//        }
//        else 
//        {
//            found = false;
//            cout << "Difference not possible:" << endl;
//        }
//        return result;
//    }
//
//    operation gettranspose() 
//    {
//        operation result(col, row);
//        result.sparse_matrix = new int* [col];
//        for (int i = 0; i < col; i++) 
//        {
//            int value = 0;
//            int arr[20];
//            int s = 1;
//            for (int j = 0; j < row; j++) 
//            {
//                for (int k = 1; k < sparse_matrix[j][0] * 2 + 1; k += 2) 
//                {
//                    if (i == sparse_matrix[j][k]) 
//                    {
//                        arr[s++] = j;
//                        arr[s++] = sparse_matrix[j][k + 1];
//                        value++;
//                    }
//                }
//            }
//            arr[0] = value;
//            result.sparse_matrix[i] = new int[value * 2 + 1];
//            for (int l = 0; l < value * 2 + 1; l++) 
//            {
//                result.sparse_matrix[i][l] = arr[l];
//            }
//        }
//        result.convert_to_standard(); // Convert result back to standard form
//        return result;
//    }
//
//    operation getmultiplication(operation& o2) 
//    {
//        operation result(row, o2.col);
//        if (col == o2.row) 
//        {
//            found = true;
//            result.sparse_matrix = new int* [row];
//            for (int i = 0; i < row; i++) 
//            {
//                int arr[100];
//                int value = 0;
//                int counter_1 = sparse_matrix[i][0] * 2 + 1;
//                int index = 0, pos = 1;
//                for (int ietrate = 0; ietrate < o2.col; ietrate++) 
//                {
//                    int sum = 0;
//                    for (int j = 1; j < counter_1; j += 2) 
//                    {
//                        for (int k = 1; k < o2.sparse_matrix[sparse_matrix[i][j]][0] * 2 + 1; k += 2) 
//                        {
//                            if (ietrate == o2.sparse_matrix[sparse_matrix[i][j]][k]) {
//                                index = o2.sparse_matrix[sparse_matrix[i][j]][k];
//                                sum += sparse_matrix[i][j + 1] * o2.sparse_matrix[sparse_matrix[i][j]][k + 1];
//                            }
//                        }
//                    }
//                    if (sum != 0) {
//                        arr[pos++] = index;
//                        arr[pos++] = sum;
//                        value++;
//                    }
//                }
//                arr[0] = value;
//                result.sparse_matrix[i] = new int[value * 2 + 1];
//                for (int s = 0; s < value * 2 + 1; s++) {
//                    result.sparse_matrix[i][s] = arr[s];
//                }
//            }
//            result.convert_to_standard(); // Convert result back to standard form
//        }
//        else {
//            found = false;
//            cout << "Multiplication not possible" << endl;
//        }
//        return result;
//    }
//
//    void output_standard() 
//    {
//        cout << "Standard form of matrix:" << endl;
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < col; j++) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    ~operation() 
//    {
//        for (int i = 0; i < row; i++)
//        {
//            delete[] matrix[i];
//            if (sparse_matrix) delete[] sparse_matrix[i];
//        }
//        delete[] matrix;
//        delete[] sparse_matrix;
//    }
//};
//
//int main() 
//{
//    operation o1, o2;
//    o1.getinput_matrices();
//    o2.getinput_matrices_2();
//
//    //operation o11=o2;//copy constructor
//    //o11.output_standard();
//
//    operation o3 = o1.getaddition(o2);
//    //operation o8(move(o3));//move operator
//    o3.output_standard();
//
//    //operation o9;//copy assignment operator
//    operation o4 = o1.getsubtraction(o2);
//    //o9 = o4;
//    o4.output_standard();
//
//    //operation o10;
//    operation o5 = o1.getmultiplication(o2);
//    //o10 = (move(o5));
//    o5.output_standard();//move assignment operator
//
//    operation o6 = o1.gettranspose();
//    o6.output_standard();
//
//    operation o7 = o2.gettranspose();
//    o7.output_standard();
//}