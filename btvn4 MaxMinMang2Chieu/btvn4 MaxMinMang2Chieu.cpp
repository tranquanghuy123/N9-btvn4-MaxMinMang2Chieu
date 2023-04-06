#include <iostream>
using namespace std;
// Định nghĩa số phần tử trong mảng
#define ROW	10
#define COL 10
// Hàm nhập mảng
void NhapMang(int array[ROW][COL], int& r, int& c)
{

	cout << "Nhap so dong: ";
	cin >> r;
	cout << "Nhap so cot: ";
	cin >> c;
	// khởi tạo giá trị cho mảng
	// Do có cột và hàng nên sẽ sd 2 vòng lặp
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
		}
	}

}
void XuatMang(int array[ROW][COL], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
// Hàm xuất giá trị lớn nhất
int Max(int array[ROW][COL], int r, int c)
{
	int max = array[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
			cout << " max = " << max << endl;
		}
	}
	return max;
}
// Ham xuất giá trị nhỏ nhất
int Min(int array[ROW][COL], int r, int c)
{
	int min = array[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (array[i][j] < min)
				min = array[i][j];
			cout << " min = " << min << endl;
		}
	}
	return min;
}
int main()
{
	{
		/*Khai báo số lượng dòng và số lượng cột
		lớn nhất mà mảng có thể chứa*/
		int array[ROW][COL];
		// Tổng số lượng hàng và cột thực tế
		int row, col;
		NhapMang(array, row, col);
		XuatMang(array, row, col);
		Max(array, row, col);
		Min(array, row, col);
	}
	return 0;
}
