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
	cout<<"     1.Ate�ten G�mlek : Halide Edib Ad�var"	                   <<endl;
	cout<<"     2.Sinekli Bakkal : Halide Edib Ad�var"                     <<endl;
	cout<<"     3.Saatleri Ayarlama Enstit�s� : Ahmet Hamdi Tanp�nar"      <<endl;
	cout<<"     4.�nce Memed 1 : Ya�ar Kemal"                              <<endl;
	cin>>kitapSecimi;
	switch(kitapSecimi) {
		
                    case 1:
                        cout << "Ate�ten G�mlek'i se�tiniz." << endl;
                        break;
                    case 2:
                        cout << "Sinekli Bakkal'� se�tiniz." << endl;
                        break;
                    case 3:
                        cout << "Saatleri Ayarlama Enstit�s�'n� se�tiniz." << endl;
                        break;
                    case 4:
                        cout << "�nce Memed 1'i se�tiniz." << endl;
                        break;
                    default:
                        cout << "Ge�ersiz se�im." << endl;
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
                        cout << "Tepedeki Ev'i se�tiniz." << endl;
                        break;
                    case 2:
                        cout << "Cthulhu'nun �a�r�s�'n� se�tiniz." << endl;
                        break;
                    case 3:
                        cout << "Drakula'y� se�tiniz." << endl;
                        break;
                    case 4:
                        cout << "Yan Evin S�rr�'n� se�tiniz." << endl;
                        break;
                    default:
                        cout << "Ge�ersiz se�im." << endl;
                }
                break;
	
	case 3:
	cout<<"Fabl katagorisindeki kitaplarimiz assagidaki gibidir"           <<endl;
	cout<<"        1.Richard Bach, Mart�"                                  <<endl;
	cout<<"        2.Ezop, Ezop Masallar�"                                 <<endl;
	cout<<"        3.Ezop, Agustos B�ce�i ile Karinca."                    <<endl;
	cout<<"        4.Ezop, Aslan ile Fare."                                <<endl;
	
	switch(kitapSecimi) {
                    case 1:
                        cout << "Mart�'y� se�tiniz." << endl;
                        break;
                    case 2:
                        cout << "Ezop Masallar�'n� se�tiniz." << endl;
                        break;
                    case 3:
                        cout << "A�ustos B�ce�i ile Kar�nca'y� se�tiniz." << endl;
                        break;
                    case 4:
                        cout << "Aslan ile Fare'yi se�tiniz." << endl;
                        break;
                    default:
                        cout << "Ge�ersiz se�im." << endl;
                }
                break;
	case 4:
	cout<<"Sanat ve Edebiyatkatagorisindeki kitaplarimiz assagidaki gibidir"<<endl;
	cout<<"        1.Kurk Mantolu Madonna - Sabahattin Ali."                          <<endl;
	cout<<"        2.Tutunamayanlar - Oguz Atay"                                      <<endl;
	cout<<"        3.Sinekli Bakkal - Halide Edib Ad�var"                             <<endl;
	cout<<"        4.Saatleri Ayarlama Enstit�s� - Ahmet Hamdi Tanp�nar"              <<endl;
	
	switch(kitapSecimi) {
                    case 1:
                        cout << "K�rk Mantolu Madonna'y� se�tiniz." << endl;
                        break;
                    case 2:
                        cout << "Tutunamayanlar'� se�tiniz." << endl;
                        break;
                    case 3:
                        cout << "Sinekli Bakkal'� se�tiniz." << endl;
                        break;
                    case 4:
                        cout << "Saatleri Ayarlama Enstit�s�'n� se�tiniz." << endl;
                        break;
                    default:
                        cout << "Ge�ersiz se�im." << endl;
                }
                break;
	case 5:
		cout<<"Sistemden cikiliyor "<<endl;
		break;
	
	default:
		cout<<"Arad�g�n�z kitap turu bu kutuphanede malesef bulanmamamaktadir Baska kitap turlerine bakmak istemezmisiniz"<<endl;
	}
		}while(kitapturu!=5);
		
	return 0;
}
