 /*BÀI TẬP
Bài tập tạo các lớp có sử dụng các chỉ danh truy cập khác nhau
(private, public, protected, internal, ...) giúp sinh viên dễ hiểu
Yêu cầu
Tạo hệ thống quản lý sinh viên gồm 2 lớp:
1. Lớp cơ sở Nguoi
private: hoTen, namSinh
protected: diaChi
public:
Nhập thông tin
Xuất thông tin
2. Lớp dẫn xuất SinhVien kế thừa từ Nguoi
private: maSV, diemTB
public:
Nhập thông tin (gọi lại lớp cha)
Xuất thông tin
Xếp loại sinh viên
□ Mục tiêu kiến thức
Hiểu private: chỉ dùng trong lớp
Hiểu protected: dùng được trong lớp con
Hiểu public: truy cập mọi nơi
Biết cách kế thừa và sử dụng lại thuộc tính*/
#include <iostream>
#include <string>
using namespace std;

class Nguoi {
private:
    string hoTen;
    int namSinh;

protected:
    string diaChi;

public:
    void nhapThongTin() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cin.ignore();
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
    }

    void xuatThongTin() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
        cout << "Dia chi: " << diaChi << endl;
    }
};

class SinhVien : public Nguoi {
private:
    string maSV;
    float diemTB;

public:
    void nhapThongTin() {
        Nguoi::nhapThongTin();
        cout << "Nhap ma sinh vien: ";
        getline(cin, maSV);
        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
    }

    void xuatThongTin() {
        Nguoi::xuatThongTin();
        cout << "Ma sinh vien: " << maSV << endl;
        cout << "Diem trung binh: " << diemTB << endl;
    }

    void xepLoai() {
        if (diemTB >= 8.0) {
            cout << "Xep loai: Xuat sac" << endl;
        } else if (diemTB >= 6.5) {
            cout << "Xep loai: Kha" << endl;
        } else {
            cout << "Xep loai: Trung binh" << endl;
        }
    }
};
