//
//  HoSo.cpp
//  OOP_Beginer
//
//  Created by PHẠM HÙNG DŨNG on 20/09/2022.
//

#include "HoSo.hpp"

void HoSo::Input()
{
    do {
        cout << "\nNhap vao so luong: ";
        cin >> SoLuong;
        if (SoLuong < 0) {
            cout << "\nSo luong khong hop le!!! Xin hay nhap lai.";
        }
    } while (SoLuong < 0);
    
    do {
        cout << "\nNhap vao gia tien: ";
        cin >> GiaTien;
        if (GiaTien < 0) {
            cout << "\nGia tien khong hop le!!! Xin hay nhap lai.";
        }
    } while (GiaTien < 0);
    
    do {
        cout << "\nCo thue hay khong ?  (1: Co, 0: Khong): ";
        cin >> CheckThue;
        if (CheckThue != 0 && CheckThue != 1) {
            cout << "\nLua chon khong hop le!!! Xin hay nhap lai.";
        }
    } while (CheckThue != 0 && CheckThue != 1);
    
    if (CheckThue == 1) {
        do {
            cout << "\nNhap vao loai thue (1: GST - 7%, 0: PST - 8%): ";
            cin >> LoaiThue;
            if (LoaiThue != 0 && LoaiThue != 1) {
                cout << "\nLua chon khong hop le!!! Xin hay nhap lai.";
            }
        } while (LoaiThue != 0 && LoaiThue != 1);
    }
}

void HoSo::Output()
{
    cout << "\nSo luong: " << SoLuong;
    cout << "\nGia tien: " << GiaTien;
    if (CheckThue == 1) {
        cout << "\nMat hang nay co thue !";
        if (LoaiThue == 1) {
            cout << " La thue GST - 7%";
        }
        else {
            cout << " La thue PST - 8%";
        }
    }
    else {
        cout << "\nMat hang nay khong thue !";
    }
    cout << "\nTinh tien: " << TinhTien() << endl;
}

float HoSo::TinhTien()
{
    float Tien = SoLuong * GiaTien;
    if (CheckThue == 1) {
        if (LoaiThue == 1) {
            Tien *= 1.07;
        }
        else {
            Tien *= 1.08;
        }
    }
    
    return Tien;
}
