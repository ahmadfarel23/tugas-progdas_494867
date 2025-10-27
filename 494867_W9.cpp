#include <iostream>
#include <cmath>

using namespace std;

// Tetapkan nilai PI sesuai permintaan soal
const double PI = 3.1416;

// a. Fungsi distance: Menghitung jarak Euclidean antara dua titik (x1, y1) dan (x2, y2).
double distance(double x1, double y1, double x2, double y2) {
    // Rumus: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double deltaX_sq = pow(x2 - x1, 2);
    double deltaY_sq = pow(y2 - y1, 2);
    
    return sqrt(deltaX_sq + deltaY_sq);
}

// b. Fungsi radius: Menghitung radius lingkaran (jarak antara pusat dan titik di lingkaran).
// Fungsi ini memanggil fungsi distance.
double radius(double centerX, double centerY, double pointX, double pointY) {
    // Radius adalah jarak antara (centerX, centerY) dan (pointX, pointY)
    return distance(centerX, centerY, pointX, pointY);
}

// c. Fungsi circumference: Menghitung keliling lingkaran.
// Rumus: 2 * PI * r
double circumference(double r) {
    return 2 * PI * r;
}

// d. Fungsi area: Menghitung luas lingkaran.
// Rumus: PI * r^2
double area(double r) {
    return PI * pow(r, 2);
}

int main() {
    // Koordinat pusat lingkaran (Center) dan titik di lingkaran (Point)
    double cX, cY;
    double pX, pY;
    
    // Variabel hasil
    double r, diameter, circ, areaVal;

    // --- Input Pengguna ---
    cout << "--- Program Lingkaran dari Dua Titik ---" << endl;
    
    // Input koordinat pusat
    cout << "Masukkan koordinat PUSAT lingkaran (Cx, Cy):" << endl;
    cout << "Cx: "; cin >> cX;
    cout << "Cy: "; cin >> cY;

    // Input koordinat titik pada lingkaran
    cout << "\nMasukkan koordinat TITIK PADA LINGKARAN (Px, Py):" << endl;
    cout << "Px: "; cin >> pX;
    cout << "Py: "; cin >> pY;

    // --- Pemanggilan Fungsi dan Perhitungan ---
    
    // 1. Hitung Radius
    // Radius (r) = jarak antara pusat dan titik
    r = radius(cX, cY, pX, pY);

    // 2. Hitung Diameter
    diameter = 2 * r;

    // 3. Hitung Keliling (Circumference)
    circ = circumference(r);

    // 4. Hitung Luas (Area)
    areaVal = area(r);
    
    // --- Output Hasil ---
    cout << "\n=====================================" << endl;
    cout << "Hasil Perhitungan Lingkaran" << endl;
    cout << "=====================================" << endl;
    cout << "Koordinat Pusat: (" << cX << ", " << cY << ")" << endl;
    cout << "Koordinat Titik: (" << pX << ", " << pY << ")" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Radius (r)      : " << r << endl;
    cout << "2. Diameter (d)    : " << diameter << endl;
    cout << "3. Keliling (K)    : " << circ << endl;
    cout << "4. Luas (L)        : " << areaVal << endl;
    cout << "=====================================" << endl;

    return 0;
}