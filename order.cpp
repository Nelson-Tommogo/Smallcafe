  #include<iostream>
  using namespace std;
  int main(){
    int quantity;
    int choice;
    int Qrooms=0,QChampaigne=0,Qpitza=0, QFish=0, QDrinks=0, Qchicken=0;
    int Srooms=0,SChampaigne=0,Spitza=0, SFish=0, SDrinks=0, Schicken=0;
    int Total_rooms=0, Total_cham=0, Total_pitza=0, Total_fish=0, Total_Drink=0, Total_Chicken;
    cout<<"\n\t\t Available Items";
    cout<<"\n\tResidential Rooms Available";
    cin>>Qrooms;
    cout<<"\n\tChampaigne Available";
    cin>>QChampaigne;
    cout<<"\n\t Pitza Available";
    cin>>Qpitza;
    cout<<"\n\t Fish Available";
    cin>>QFish;
    cout<<"\n\t Soft Drinks Available";
    cin>>QDrinks;
    cout<<"\n\tChicken Available";
    cin>>Qchicken;
    m:
    cout<<"\n\t\t Select from the menue?";
    cout<<"\n\n1 Rooms";
    cout<<"\n2 Champaigne";
    cout<<"\n3 Pitza";
    cout<<"\n4 Fish";
    cout<<"\n5 Soft Drinks";
    cout<<"\n6 Chicken";
    cout<<"\n7 Information regarding sales and collection";
    cout<<"\n8 Exit";
    cout<<"\n\n Please Enter Your Choice";
    cin>> choice;
    switch (choice)
    {
    case1:
     cout<<"\n\n\t Enter number of Rooms";
    cin>>quantity;
        if(Qrooms-Srooms>=quantity){
            Srooms=Srooms+quantity;
            Total_rooms=Total_rooms+(quantity*1200);
            cout<<"\\n\t\t"<<quantity<<"Rooms/Rooms have been alloted to you!";
        }
        else{
            cout<<"\\n\t\t"<<Qrooms-Srooms<<"Roomos available";
        }
        break;
        case2:
     cout<<"\n\n\t Enter Champaigne Quantity";
    cin>>quantity;
        if(QChampaigne-QChampaigne>=quantity){
            QChampaigne=QChampaigne+quantity;
            Total_cham=Total_cham+(quantity*250);
            cout<<"\\n\t\t"<<quantity<<"Champaigne ordered";
        }
        else{
            cout<<"\\n\t\t"<<QChampaigne-QChampaigne<<"Champaigne Available";
        }
        break;
    case3:
     cout<<"\n\n\t Enter number of Pitza";
    cin>>quantity;
        if(Qpitza-Spitza>=quantity){
            Spitza=Spitza+quantity;
            Total_pitza=Total_pitza+(quantity*550);
            cout<<"\\n\t\t"<<quantity<<"pitza ordered";
        }
        else{
            cout<<"\\n\t\t"<<Qpitza-Spitza<<"pitza Available";
        }
        break;
        case4:
     cout<<"\n\n\t Enter number of Fish";
    cin>>quantity;
        if(QFish-SFish>=quantity){
            SFish=SFish+quantity;
            Total_fish=Total_fish+(quantity*100);
            cout<<"\\n\t\t"<<quantity<<"Fish Ordered";
        }
        else{
            cout<<"\\n\t\t"<<QFish-SFish<<"Fish  available";
        }
        break;
          case5:
     cout<<"\n\n\t Enter number of Soft Drinks";
    cin>>quantity;
        if(QDrinks-SDrinks>=quantity){
            SDrinks=SDrinks+quantity;
            Total_Drink=Total_Drink+(quantity*150);
            cout<<"\\n\t\t"<<quantity<<"Drink Ordered";
        }
        else{
            cout<<"\\n\t\t"<<QDrinks-SDrinks<<"Drink  available";
        }
        break;
          case6:
     cout<<"\n\n\t Enter number of Chicken";
    cin>>quantity;
        if(Qchicken-Schicken>=quantity){
            Schicken=Schicken+quantity;
            Total_Chicken=Total_Chicken+(quantity*850);
            cout<<"\\n\t\t"<<quantity<<"Chicken Ordered";
        }
        else{
            cout<<"\\n\t\t"<<Qchicken-Schicken<<"Chicken  Available";
        }
        break;

        case 7:
        cout<<"\n\t\t Details of sales and collections";
        cout<<"\n\t\t Number of roooms we had"<<Qrooms;
        cout<<"\n\t\t Number of rooom sold"<<Srooms;
        cout<<"\n\t\t Number of rooms remaining"<<Qrooms-Srooms;
        cout<<"\n\t\t Total collection that day"<<Total_rooms;

        cout<<"\n\t\t Number of Pasta we had"<<QChampaigne;
        cout<<"\n\t\t Number of Pasta Sold"<<SChampaigne;
        cout<<"\n\t\t Number of Pasta remaining"<<QChampaigne-SChampaigne;
        cout<<"\n\t\t Total collection that day"<<Total_cham;


        cout<<"\n\t\t Number of Fish we had"<<QFish;
        cout<<"\n\t\t Number of Fish Sold"<<SFish;
        cout<<"\n\t\t Number of Fish remaining"<<QFish-SFish;
        cout<<"\n\t\t Total collection that day"<<Total_fish;


        cout<<"\n\t\t Number of Drinks we had"<<QDrinks;
        cout<<"\n\t\t Number of Drinks Sold"<<SDrinks;
        cout<<"\n\t\t Number of Drinks remaining"<<QDrinks-SDrinks;
        cout<<"\n\t\t Total collection that day"<<Total_Drink;


        cout<<"\n\t\t Number of Pitza we had"<<Qpitza;
        cout<<"\n\t\t Number of Pitza Sold"<<Spitza;
        cout<<"\n\t\t Number of Pitza remaining"<<Qpitza-Spitza;
        cout<<"\n\t\t Total collection that day"<<Total_pitza;


        cout<<"\n\t\t Number of chicken we had"<<Qchicken;
        cout<<"\n\t\t Number of Chicken Sold"<<Schicken;
        cout<<"\n\t\t Number of Chicken remaining"<<Qchicken-Schicken;
        cout<<"\n\t\t Total collection that day"<<Total_Chicken;
        case 8:
        exit(0);
    default:
    cout<<"Please select from the numbers Above";
        break;
    } 
    goto m;
  }