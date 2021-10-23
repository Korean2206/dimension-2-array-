#include<iostream>
#include<utility>
using namespace std;

void inPut(int arr[][100],int r,int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout<<"Arr["<<i<<"]"<<"["<<j<<"] = ";
            cin>>arr[i][j];
        }
        
    }
    
}
void outPut(int arr[][100],int r,int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        
            cout<<endl;
    }
    
}
// tìm kiếm vị trí mảng 2 chiều
std::pair<int,int> search(int arr[][100],int r,int c,int v)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if(arr[i][j] == v) return {i,j};
        }
        
    }
    return {-1,-1};
}
// in ra gia tri lon nhat mang 2 chieu
int maxElement(int arr[][100],int r,int c)
{
    int maxValue = arr[1][1];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if(arr[i][j] > maxValue)
            {
                maxValue = arr[i][j];
            }
        }
        
    }
    return maxValue;
}
//in ra gia tri nho nhat mang 2 chieu
int minElement(int arr[][100],int r,int c)
{
    int minValue = arr[1][1];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if(arr[i][j] < minValue)
            {
                minValue = arr[i][j];
            }
        }
        
    }
    return minValue;
}
// in ra phần tử nhỏ nhất và chia hết cho 3
void min3Element(int arr[][100],int r,int c)
{
    int min,kt=0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if( arr[i][j] % 3 == 0)
            {
                
               min = arr[i][j];
               kt=1;
               break;
            }
        }
        
    }
    if (kt == 1)
    {
        for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if( arr[i][j] % 3 == 0 && arr[i][j] < min)
            {
                
               min = arr[i][j];
               
            }
        }
        
    }
    cout<<"\nSo nho nhat trong mang va chia het cho 3 : "<<min;
    }
    else
    {
        cout<<"\nKhong co so nho nhat va chia het cho 3.";
    }
    
}
//tỉnh tổng các phần tử trên hàng chẳn
int sumEvenRow(int arr[][100],int r,int c)
{
    int sum = 0;
    for (int i = 2; i <= r; i+=2)
    {
        for (int j = 1; j <= c; j++)
        {
        
           
            sum = sum + arr[i][j];
        
            
        }
        
    }
    return sum;
}
int maxCol1(int arr[][100],int r,int c,int pos)
{
    int maxValue = arr[1][pos];
    for (int i = 1; i <= r; i++)
    {
        if(arr[i][pos] > maxValue)
        maxValue = arr[i][pos];
    }
    return maxValue;
}
//sap xep hang theo chieu giam dan 
void rowGiam(int arr[][100],int r,int c,int pos)
{
    for (int j = 1; j <= c-1; j++)
    {
        for (int k = j+1; k <= c; k++)
        {
            if(arr[pos][j] < arr[pos][k])
            {
                int swap = arr[pos][j];
                arr[pos][j] = arr[pos][k];
                arr[pos][k] = swap;
            }
        }
        
    }
    
}
void soNguyenTo(int arr[][100],int r,int c)
{
   
    for (int i = 1; i <= r; i++)
    {   
        for (int j = 1; j <= c; j++)
        {
            if(arr[i][j] == 2) cout<<arr[i][j]<<"  "; 
            if(arr[i][j] > 2)
            {
                if(arr[i][j] % 2!=0)
                {
                    cout<<arr[i][j]<<"  ";
                }
            }

        }
        
    }
    
}
void RemoveRow(int arr[][100],int &r,int c,int n)
{
    for (int i = n; i <= r-1; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            arr[i][j] = arr[i+1][j];
        }
        
    }
    r--;
}

void RemoveCol(int arr[][100],int r,int &c,int n)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = n; j <= c-1; j++)
        {
            arr[i][j] = arr[i][j+1];
        }
        
    }
    c--;
}
void Swap(int &a,int &b)
{
    int tmp = a;
    a =b;
    b =tmp;
}
// swap row trong mảng 2 chiều
void SwapRow(int arr[][100],int r,int c,int row1,int row2)
{
    if((row1 >=1 && row1 <=r)&&(row2>=1&&row2<=r))
    {
        for (int j = 1; j <= c; j++)
        {
            Swap(arr[row1][j],arr[row2][j]);
        }
        
    }
}
// swap 2 col trong mảng 2 chiều
void SwapCol(int arr[][100],int r,int c,int col1,int col2)
{
    if((col1>=1 && col1<=c)&&(col2>=1&&col2<=c))
    {
        for (int i = 1; i <= r; i++)
        {
            Swap(arr[i][col1],arr[i][col2]);
        }
        
    }
}
// Giá trị lớn  nhất Trên đường chéo của mảng

int MaxCheo(int arr[][100],int r,int c)
{
    int MaxValue = arr[1][1];
    for (int i = 1; i <= r; i++)
    {
        if(arr[i][i] > MaxValue)
        {
            MaxValue = arr[i][i];
        }
    }
    return MaxValue;
}
// Giá trị nhỏ nhất Trên đường chéo của mảng
int MinCheo(int arr[][100],int r,int c)
{
    int MinValue = arr[1][1];
    for (int i = 1; i <= r; i++)
    {
        if(arr[i][i] < MinValue)
        {
            MinValue = arr[i][i];
        }
    }
    return MinValue;
}


int main()
{
    int arr[100][100];
    int r,c,v,pos,n;
    int col1,col2,row1,row2;
    cout<<"Nhap so hang : ";cin>>r;
    cout<<"Nhap so cot : ";cin>>c;
    
    cout<<"Nhap ma tran :\n";
    inPut(arr,r,c);
    outPut(arr,r,c);
    cout<<"\nSo lon nhat trong duong cheo : "<<MaxCheo(arr,r,c);
    cout<<"\nSo nho nhat trong duong cheo : "<<MinCheo(arr,r,c);
    cout<<"Nhap 2 cot muon swap : ";
    cin>>col1>>col2;
    SwapCol(arr,r,c,col1,col2);
    outPut(arr,r,c);
    cout<<"\nNhap so hang muon xoa : ";
    cin>>n;
    RemoveRow(arr,r,c,n);
    outPut(arr,r,c);
    cout<<"\nNhap so cot muon xoa : ";
    cin>>n;
    RemoveCol(arr,r,c,n);
    outPut(arr,r,c);

    soNguyenTo(arr,r,c);
    cout<<"\nNhap vi tri hang mua giam dan : ";
    cin>>pos;
    rowGiam(arr,r,c,pos);
    cout<<"Hang thu "<<pos<<" giam dan :";
    cout<<endl;
    outPut(arr,r,c);
    cout<<"\nso co gia tri lon nhat : "<<maxElement(arr,r,c)<<endl;
    cout<<"\nNhap cot can tim so lon nhat : ";
    cin>>pos;
    cout<<"\nso lon nhat trong cot : "<<maxCol1(arr,r,c,pos)<<endl;

    cout<<"\nso co gia tri nho nhat : "<<minElement(arr,r,c)<<endl;
    min3Element(arr,r,c);
    cout<<"\nsum row chan = "<<sumEvenRow(arr,r,c);
    cout<<"\nNhap so can tim : ";
    cin>>v;
    std::pair<int,int> tm = search(arr,r,c,v);
    cout<<"\nTim thay so "<<v<<" tai hang "<<tm.first<<" tai cot "<<tm.second;




    return 0;
}



























