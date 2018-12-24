#include <iostream>
using namespace std;
int main()
{
 int batas,a,b,mod;

 cout << " \t|============================================|" << endl ;
cout << " \t|=== PROGRAM MENAMPILKAN BILANGAN PRIMA =====|" << endl ;
cout << " \t|============= ALIF MUSTAFANAH ==============|" << endl ;
cout << " \t|============================================|\n" << endl ;

 cout<<"MASUKAN BATAS BILANGAN PRIMA 1 SAMPAI = ";
 cin>>batas;
 cout<<"------------------------------------------- \n";

 for (a=2;a<=batas;a++){
  mod=1;
  for (b=2;b<a;b++){
   if(a%b==0)
   {
    mod=0;
   }
  }
  if(mod==1)
  {
   cout<<a<<" ";
  }
 }char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
 cout << " \n\t" << endl ;
cout << " \n\t|===============================================|" << endl ;
cout << " \t|== TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI ==|" << endl ;
cout << " \t|============== ALIF MUSTAFANAH ================|" << endl ;
cout << " \t|===============================================|\n" << endl ;
}
