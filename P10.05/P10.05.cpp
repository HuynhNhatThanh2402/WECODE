void Nhap(SinhVien& x)
{
    cin.getline(x.MASV, 10);
    cin.getline(x.HoTen, 100);
    cin.getline(x.NgaySinh, 12);
    cin >> x.GioiTinh;
    cin >> x.DiemToan >> x.DiemLy >> x.DiemHoa;
}

void Xuat(SinhVien x)
{
    cout << x.MASV << "     " << x.HoTen << "      " << x.NgaySinh << "       " << x.GioiTinh << "     ";
    cout << x.DiemToan << "       " << x.DiemLy << "     " << x.DiemHoa << "      ";
    cout << setprecision(3) << (x.DiemToan + x.DiemLy + x.DiemHoa) / 3;
}