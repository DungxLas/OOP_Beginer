//
//  HoSo.hpp
//  OOP_Beginer
//
//  Created by PHẠM HÙNG DŨNG on 20/09/2022.
//

#ifndef HoSo_hpp
#define HoSo_hpp

#pragma once
#include <iostream>
using namespace std;

class HoSo
{
private:
    int SoLuong;
    float GiaTien;
    int CheckThue;
    float LoaiThue;
public:
    void Input();
    void Output();
    float TinhTien();
};

#endif /* HoSo_hpp */
