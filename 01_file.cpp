
#include<iostream>
void sort(int mber[],int siz);
int TotalMarks(int Marks[], int size);
int main() {
    int Marks[] = { 92,81,47,55,82,84,50 };
    int size = sizeof(Marks) / sizeof(int);
    int total=TotalMarks(Marks,size);
    std::cout << "Your total marks are \n" << total<<"\n";
    int Numbers[]={10,7,8,9,5,6,4,3,2,1};
    int siz=sizeof(Numbers)/sizeof(int);
    sort(Numbers,siz);
    for(int i:Numbers){
        std::cout<<" "<<i;
    };
};//main end
int TotalMarks(int Marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += Marks[i];

        return total;
    };
};



    void sort(int mber[],int siz) {
        for (int i = 0; i < siz-1; i++) {
            for (int j = 0; j < siz-i-1; j++) {
                if(mber[j]>mber[j+1]){
                    int temp=mber[j];
                    mber[j]=mber[j+1];
                    mber[j+1]=temp;
                }
            }
        }
    }
/**#include <iostream>

void sort(int mber[], int siz);
int TotalMarks(int Marks[], int size);

int main() {
    int Marks[] = { 92, 81, 47, 55, 82, 84, 50 };
    int size = sizeof(Marks) / sizeof(int);
    int total = TotalMarks(Marks, size);
    std::cout << "Your total marks are " << total << std::endl;

    int Numbers[] = { 10, 7, 8, 9, 5, 6, 4, 3, 2, 1 };
    int siz = sizeof(Numbers) / sizeof(int);
    sort(Numbers, siz);

    std::cout << "Sorted numbers are:";
    for (int i : Numbers) {
        std::cout << " " << i;
    }
    std::cout << std::endl;

    return 0;
}

int TotalMarks(int Marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += Marks[i];
    }
    return total;
}

void sort(int mber[], int siz) {
    for (int i = 0; i < siz - 1; i++) {
        for (int j = 0; j < siz - i - 1; j++) {
            if (mber[j] > mber[j + 1]) {
                int temp = mber[j];
                mber[j] = mber[j + 1];
                mber[j + 1] = temp;
            }
        }
    }
}**/