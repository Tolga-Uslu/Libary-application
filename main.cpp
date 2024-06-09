#include <iostream>
using namespace std;

int main() {
		int kitapSecimi;
	int kitapturu;
	do{ 

		cout<<"Kutuphanemize Hosgeldiniz"<<endl;
		cout<<"Iste kutuphanemizdeki kitapturleri"<<endl;
		cout<<"    1.Roman"             <<endl;
		cout<<"    2.Korku"             <<endl;
		cout<<"    3.Fabl"              <<endl;
		cout<<"    4.Sanat ve Edebiyat" <<endl;
		cout<<"    5. cikis"            <<endl;
		cout<<"istediginiz kitap turu icin yanindaki sayiya karsilik gelen tusa basiniz"<<endl;
		cin>>kitapturu; 
	switch(kitapturu){
	case 1:
	cout<<" Roman katagorisindeki kitaplarimiz assagidaki gibidir"         <<endl;
	cout<<"     1.Ateşten Gömlek : Halide Edib Adıvar"	                   <<endl;
	cout<<"     2.Sinekli Bakkal : Halide Edib Adıvar"                     <<endl;
	cout<<"     3.Saatleri Ayarlama Enstitüsü : Ahmet Hamdi Tanpınar"      <<endl;
	cout<<"     4.İnce Memed 1 : Yaşar Kemal"                              <<endl;
	cin>>kitapSecimi;
	switch(kitapSecimi) {
		
                    case 1:
                        cout << "Ateşten Gömlek'i seçtiniz." << endl;
                        break;
                    case 2:
                        cout << "Sinekli Bakkal'ı seçtiniz." << endl;
                        break;
                    case 3:
                        cout << "Saatleri Ayarlama Enstitüsü'nü seçtiniz." << endl;
                        break;
                    case 4:
                        cout << "İnce Memed 1'i seçtiniz." << endl;
                        break;
                    default:
                        cout << "Geçersiz seçim." << endl;
                }
                break;
	case 2:
	cout<<" Korku katagorisindeki kitaplarimiz assagidaki gibidir"         <<endl;
	cout<<"        1.Tepedeki Ev : Shirley Jackson"                        <<endl;
	cout<<"        2.Cthulhu'nun Cagrisi:  H.P.Lovecraft"                  <<endl;
	cout<<"        3.Drakula : Bram Stoker"                                <<endl;
	cout<<"        4.Yan Evin Sirri: Shari Lapena"                         <<endl;
	
	switch(kitapSecimi) {
                    case 1:
                        cout << "Tepedeki Ev'i seçtiniz." << endl;
                        break;
                    case 2:
                        cout << "Cthulhu'nun Çağrısı'nı seçtiniz." << endl;
                        break;
                    case 3:
                        cout << "Drakula'yı seçtiniz." << endl;
                        break;
                    case 4:
                        cout << "Yan Evin Sırrı'nı seçtiniz." << endl;
                        break;
                    default:
                        cout << "Geçersiz seçim." << endl;
                }
                break;
	
	case 3:
	cout<<"Fabl katagorisindeki kitaplarimiz assagidaki gibidir"           <<endl;
	cout<<"        1.Richard Bach, Martı"                                  <<endl;
	cout<<"        2.Ezop, Ezop Masalları"                                 <<endl;
	cout<<"        3.Ezop, Agustos Böceği ile Karinca."                    <<endl;
	cout<<"        4.Ezop, Aslan ile Fare."                                <<endl;
	
	switch(kitapSecimi) {
                    case 1:
                        cout << "Martı'yı seçtiniz." << endl;
                        break;
                    case 2:
                        cout << "Ezop Masalları'nı seçtiniz." << endl;
                        break;
                    case 3:
                        cout << "Ağustos Böceği ile Karınca'yı seçtiniz." << endl;
                        break;
                    case 4:
                        cout << "Aslan ile Fare'yi seçtiniz." << endl;
                        break;
                    default:
                        cout << "Geçersiz seçim." << endl;
                }
                break;
	case 4:
	cout<<"Sanat ve Edebiyatkatagorisindeki kitaplarimiz assagidaki gibidir"<<endl;
	cout<<"        1.Kurk Mantolu Madonna - Sabahattin Ali."                          <<endl;
	cout<<"        2.Tutunamayanlar - Oguz Atay"                                      <<endl;
	cout<<"        3.Sinekli Bakkal - Halide Edib Adıvar"                             <<endl;
	cout<<"        4.Saatleri Ayarlama Enstitüsü - Ahmet Hamdi Tanpınar"              <<endl;
	
	switch(kitapSecimi) {
                    case 1:
                        cout << "Kürk Mantolu Madonna'yı seçtiniz." << endl;
                        break;
                    case 2:
                        cout << "Tutunamayanlar'ı seçtiniz." << endl;
                        break;
                    case 3:
                        cout << "Sinekli Bakkal'ı seçtiniz." << endl;
                        break;
                    case 4:
                        cout << "Saatleri Ayarlama Enstitüsü'nü seçtiniz." << endl;
                        break;
                    default:
                        cout << "Geçersiz seçim." << endl;
                }
                break;
	case 5:
		cout<<"Sistemden cikiliyor "<<endl;
		break;
	
	default:
		cout<<"Aradıgınız kitap turu bu kutuphanede malesef bulanmamamaktadir Baska kitap turlerine bakmak istemezmisiniz"<<endl;
	}
		}while(kitapturu!=5);
		
	return 0;
}
