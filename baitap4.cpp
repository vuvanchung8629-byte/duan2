/*Bài 4: Tính tiền điện
Viết chương trình C++ tạo lớp cơ sở KhachHang có phương thức ảo tinhTien().
Xây dựng các lớp dẫn xuất: KhachHangSinhHoat, KhachHangKinhDoanh kế thừa từ KhachHang,
 mỗi lớp có cách tính tiền điện riêng.
Hãy thực hiện các yêu cầu sau:
a) Xây dựng các phương thức tính tiền cho từng lớp.
b) Viết chương trình minh họa tính đa hình bằng cách sử dụng con trỏ lớp cơ sở
 để gọi hàm tinhTien() của các lớp dẫn*/
 #include <iostream>
 using namespace std;
 class KhachHang{
public:
    virtual double tinhTien(){
        return 0;
 }
};
class KhachHangSinhHoat : public KhachHang{
private:
    double soDien;
    double donGia;
public:
    KhachHangSinhHoat (double sd, double dg){
        donGia = dg;
        soDien = sd;

    }
    double tinhTien() override {
        return soDien * donGia;

    }
};
class KhachHangKinhDoanh : public KhachHang{
private:
    double donGia;
    double soDien;
public:
    KhachHangKinhDoanh (double dg, double sd){
         soDien = sd;
        donGia = dg;
    }
    double tinhTien() override {
        return donGia * soDien;

    }
};
int main(){
    KhachHang * hang;
    KhachHangSinhHoat sh(3000,123);
    hang= &sh;
    cout<<"tinh tien khach hang sinh hoat la:"<<hang ->tinhTien()<<endl;
    KhachHangKinhDoanh kd(80,3000);
    hang = &kd;
    cout<<"khach hang kdoanh tinh tien"<<hang ->tinhTien()<<endl;
    return 0;



}

