#include <iostream>
#include <conio.h>
using namespace std;
int bayar, diskon, jumlah[50], harga[50], sub_total[50];
float total;
string nama_barang[50];
int i;
int A;
int jumlah_beli=0;
void menu(){
string makanan= " Nasi Putih = Rp.5000\n• Ayam Goreng = Rp.10000\n• Bebek Goreng = Rp.12000\n• Opor Ayam = Rp.11000\n• Sop Daging = Rp.15000\n• Kerupuk = Rp.2000\n• Aneka Gorengan = Rp.2000";
cout<<makanan<<endl; 
cout<<endl;
}
string pesanan(){
string minuman="• Es Teh Manis = Rp.3000\n• Es Jeruk = Rp.4000\n• Kopi = Rp.5000\n• Susu = Rp.3000\n• Aneka Jus = Rp.5000\n• Minuman Botol = Rp.5000\n• Air Putih= Gratis";
return minuman;
}
int main(){
cout<<"Warung Makan Langsung Kenyang"<<endl;
cout<<"=============================\n"<<endl;
cout<<"Daftar Menu\n"<<endl;
menu();
cout<<pesanan()<<endl;
cout<<endl;
cout<<"Masukkan Jumlah Pesanan: ";
cin>>jumlah_beli;
for (i=0; i<jumlah_beli; i++){
cout<<endl;
cout<<"Masukkan Pesanan ke-"<<i+1<<endl;
cout<<"Nama Pesanan: ";
cin>>nama_barang[i];
cout<<"Jumlah Pesanan: ";
cin>>jumlah[i];
cout<<"Harga Pesanan: ";
cin>>harga[i];
sub_total[i]= jumlah[i]*harga[i];
total +=sub_total[i];
}
cout<<endl;
cout<<"Struk Pembayaran Warung Makan Langsung Kenyang"<<endl;
cout<<"====================================================================="<<endl;
cout<<"No Pesanan Jumlah Harga Sub Total"<<endl;
for (i=0; i<jumlah_beli; i++){
cout<<i+1<<""<<nama_barang[i]<<" "<<jumlah[i]<<" "<<harga[i]<<" "<<sub_total[i]<<endl;
}
cout<<"====================================================================="<<endl;
if (total>=70000){
diskon=0.02*total;
} else if (total>=50000){
diskon=0.01;
}else if (total>=30000){
diskon=0.005;
}else {
diskon=0;
}
cout<<"Jumlah Bayar : Rp."<<total<<endl;
cout<<"Diskon : Rp."<<diskon<<endl;
cout<<"Total Bayar : Rp."<<total-diskon<<endl;
cout<<"Bayar : Rp.";
cin>>bayar;
cout<<"Kembali : Rp."<<(bayar-(total-diskon))<<endl;
cout<<endl;
A=1;
while(A<=1){
cout<<"Terima Kasih Sudah Mampir Di Warung Kami"<<endl;
A++;
}
getch;
}

