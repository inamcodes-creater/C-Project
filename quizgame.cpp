#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void beginner(){
    int score[10]={10,20,30,40,50,60,70,80,90,100};
    string a,b,c,d,e,f,g,h,i,j;
    cout<<"BEGINNER LEVEL GAME(ROUND-1)\n";
    //question-1
    cout<<"1.Who wrote the Indian National Anthem?:\n";
    cout<<"(a) Mahatma Gandhi\n";
    cout<<"(b) Subhas Chandra Bose\n";
    cout<<"(c) Rabindranath Tagore\n";
    cout<<"(d) Jawaharlal Nehru\n";
    cout<<"Enter the Answer:";
    getline(cin,a);
    //Condition
    if (a=="RABINDRANATH TAGORE"||a=="rabindranath tagore"||a=="c"||a=="C"){
        cout<<"Correct Answer:"<<a<<"\t"<<"Score:"<<score[0]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<a<<"\t"<<"Score:"<<score[0]-10<<endl;
    }
    //question-2
    cout<<"2.What is the national currency of India??:\n";
    cout<<"(a) Dollar\n";
    cout<<"(b) Taka\n";
    cout<<"(c) Rupee\n";
    cout<<"(d) Yen\n";
    cout<<"Enter the Answer:";
    getline(cin,b);
    if (b=="RUPEE"||b=="rupee"||b=="c"||b=="C"){
        cout<<"Correct Answer:"<<b<<"\t"<<"Score:"<<score[0]+10<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<b<<"\t"<<"Score:"<<score[1]-10<<endl;
    }
    //question-3
    cout<<"3.Which Indian state is known as the “Land of Five Rivers”?:\n";
    cout<<"(a).Haryana\n";
    cout<<"(b).Gujarat\n";
    cout<<"(c).Punjab\n";
    cout<<"(d).Rajasthan\n";
    cout<<"Enter the Answer:";
    getline(cin,c);
    if (c=="c"|c=="C"){
        cout<<"Correct Answer:"<<c<<"\t"<<"Score:"<<score[2]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<c<<"\t"<<"Score:"<<score[2]-10<<endl;
    }
    //question-4
    cout<<"4.What are the three colors in the Indian national flag?:\n";
    cout<<"(a).Red, White, Green\n";
    cout<<"(b).Orange, White, Blue\n";
    cout<<"(c).Saffron, White, Green\n";
    cout<<"(d).Green, Yellow, White\n";
    cout<<"Enter the Answer:";
    getline(cin,d);
    if (d=="SAFFRON,WHITE,GREEN"|d=="saffron,white,green"|d=="c"|d=="C"){
        cout<<"Correct Answer:"<<d<<"\t"<<"Score:"<<score[3]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<d<<"\t"<<"Score:"<<score[3]-10<<endl;
    }
    //question=5
    cout<<"5.Which is the national sport traditionally associated with India?:\n";
    cout<<"(a).Cricket\n";
    cout<<"(b).Hockey\n";
    cout<<"(c).Football\n";
    cout<<"(d).Kabaddi\n";
    cout<<"Enter the Answer:";
    getline(cin,e);
    if (e=="HOCKEY"|e=="hockey"|e=="b"|e=="B"){
        cout<<"Correct Answer:"<<e<<"\t"<<"Score:"<<score[4]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<e<<"\t"<<"Score:"<<score[4]-10<<endl;
    }
    //question-6
    cout<<"6.Which monument is known as the symbol of love in India?:\n";
    cout<<"(a).India Gate\n";
    cout<<"(b).Red Fort\n";
    cout<<"(c).Qutub Minar\n";
    cout<<"(d).Taj Mahal\n";
    cout<<"Enter the Answer:";
    getline(cin,f);
    if (f=="TAJ MAHAL"|f=="taj mahal"|f=="d"|f=="D"){
        cout<<"Correct Answer:"<<f<<"\t"<<"Score:"<<score[5]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<f<<"\t"<<"Score:"<<score[5]-10<<endl;
    }
    //question-7
    cout<<"7.How many states are there in India currently?:\n";
    cout<<"(a).25\n";
    cout<<"(b).26\n";
    cout<<"(c).28\n";
    cout<<"(d).30\n";
    cout<<"Enter the Answer:";
    getline(cin,g);
    if (g=="28"|g=="c"||g=="C"){
        cout<<"Correct Answer:"<<g<<"\t"<<"Score:"<<score[6]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<g<<"\t"<<"Score:"<<score[6]-10<<endl;
    }
    //question-8
    cout<<"8.Which is the national aquatic animal of India?\n";
    cout<<"(a).Dolphin\n";
    cout<<"(b).Whale\n";
    cout<<"(c).Shark\n";
    cout<<"(d).Crocodile\n";
    cout<<"Enter the Answer:";
    getline(cin,h);
    if (h=="DOLPHIN"|h=="dolphin"|h=="a"|h=="A"){
        cout<<"Correct Answer:"<<h<<"\t"<<"Score:"<<score[7]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<h<<"\t"<<"Score:"<<score[7]-10<<endl;
    }
    //question-9
    cout<<"9.What is the national song of India?:\n";
    cout<<"(a).Sare Jahan Se Achha\n";
    cout<<"(b).Jana Gana Mana\n";
    cout<<"(c).Ae Mere Watan Ke Logon\n";
    cout<<"(d).Vande Mataram\n";
    cout<<"Enter the Answer:";
    getline(cin,i);
    if (i=="VANDE MATARAM"|i=="vande mataram"|i=="d"|i=="D"){
        cout<<"Correct Answer:"<<i<<"\t"<<"Score:"<<score[8]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<i<<"\t"<<"Score:"<<score[8]-10<<endl;
    }
    //question-10
    cout<<"10.Which Indian scientist is known as the Missile Man of India?:\n";
    cout<<"(a).C.V. Raman\n";
    cout<<"(b).A.P.J. Abdul Kalam\n";
    cout<<"(c).Homi Bhabha\n";
    cout<<"(d).Vikram Sarabhai\n";
    cout<<"Enter the Answer:";
    getline(cin,j);
    if (j=="A.P.J. ABDUL KALAM"|j=="a.p.j. abdul kalam"|j=="A.P.J. Abdul Kalam"|j=="A.P.J.ABDULKALAM"|j=="a.p.j.abdulkalam"|j=="apjabdukalam"|j=="b"|j=="B"){
        cout<<"Correct Answer:"<<j<<"\t"<<"Score:"<<score[9]<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<j<<"\t"<<"Score:"<<score[9]-10<<endl;
    }
    
}
void intermediate(){                    //class-2
    string a,b,c,d,e;
    int score=10;
    cout<<"1.Who is the Father of the Nation:";
    getline(cin,a);
    if (a=="MAHATMA GANDHI"|a=="mahatma gandhi"){
        cout<<"Correct Answer:"<<a<<"\t"<<"Score:"<<score<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<a<<"\t"<<"Score:"<<score-10<<endl;
    }
    //question-2
    cout<<"2.Which bird is designated as  the National Bird of India?:";
    getline(cin,b);
    if (b=="PEACOCK"|b=="peacock"){
        cout<<"Correct Answer:"<<b<<"\t"<<"Score:"<<score + 10<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<b<<"\t"<<"Score:"<<score<<endl;
    }
    //question-3
    cout<<"3.Who is the Father of the india constitution?:";
    getline(cin,c);
    if (c=="DR.B.R.AMBEDKAR"|c=="dr.b.r.ambedkar"){
        cout<<"Correct Answer:"<<c<<"\t"<<"Score:"<<score + 20<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<c<<"\t"<<"Score:"<<score-10<<endl;
    }
    //question-4
    cout<<"4.Which is the national river?:";
    getline(cin,d);
    if (d=="GANGA"|d=="ganga"){
        cout<<"Correct Answer:"<<d<<"\t"<<"Score:"<<score + 30<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<d<<"\t"<<"Score:"<<score-10<<endl;
    }
    //question=5
    cout<<"5.when did India become a republic?:";
    getline(cin,e);
    cout<<"day-month-year // 01-july-2021";
    if (e=="26-JANUARY-1950"|e=="26-january-1950"){
        cout<<"Correct Answer:"<<e<<"\t"<<"Score:"<<score + 40<<endl;
        
    }
    else{
        cout<<"Wrong Answer:"<<e<<"\t"<<"Score:"<<score-10<<endl;
    }

}
void hard(){                //class 3
    string a,b,c,d,e,f,g,h,i,j;;
        int score=10;
        int score1=0;
         //question-1
         cout<<"1.Which Article of the indian Comstitution deals with Fundamental Rights?:";
         getline(cin,a);
         if(a=="Article 12-35"||a=="ARTICLE 12-35" || a=="article 12-35"){
            cout<<"Correct Answer:"<<a<<"\t"<<"Score:"<<score<<endl;
         }
         else{
            cout<<"Wrong Answer:"<<a<<"\t"<<"Score:"<<score1<<endl;
         }
         //question-2
         cout<<"2.Which indian State has the longest Coastline?:";
         cin>>b;
         if(b=="GUJARAT"||b=="gujarat"){
            cout<<"Correct Answer:"<<b<<"\t"<<"Score:"<<score +10<<endl;
         }
         else{
            cout<<"Wrong Answer:"<<b<<"\t"<<"Score:"<<score1<<endl;
         }
         //question-3
         cout<<"3.Who was the First President of Indian?:";
         getline(cin,c);
         if(c=="PRATIBHA PATIL"||c=="pratibha patil"){
            cout<<"Correct Answer:"<<c<<"\t"<<"Score:"<<score +20<<endl;
         }
         else{
            cout<<"Wrong Answer:"<<c<<"\t"<<"Score:"<<score1<<endl;
         }
         //question-4
         cout<<"4.In WHich Year Quit lindia Movement ?:";
         getline(cin,d);
         if(d=="1942"){
            cout<<"Correct Answer:"<<d<<"\t"<<"Score:"<<score +30<<endl;
         }
         else{
            cout<<"Wrong Answer:"<<d<<"\t"<<"Score:"<<score1<<endl;
         }
         //question-5
         cout<<"5.Which is the highest Mountain peak in Indian?:";
         getline(cin,e);
         if(e=="KANCHENJUNGA"||e=="kanchenjunga"){
            cout<<"Correct Answer:"<<e<<"\t"<<"Score:"<<score +40<<endl;
         }
         else{
            cout<<"Wrong Answer:"<<e<<"\t"<<"Score:"<<score1<<endl;
         }
         
}
int main(){
    int choice;
    cout<<"---------------------\n";
    cout<<"Welcome to Quiz game\n";
    cout<<"---------------------\n";
    //beginner();
    //intermediate();
    cout<<"Choice the Option:\n";
    cout<<"(1.)Beginner-Level\n";
    cout<<"(2.)intermediate-Level\n";
    cout<<"(3.)Advanced-Level\n";
    cout<<"==================\n\n";
    cout<<"Enter the Choice:";
    cin>>choice;
    cin.ignore();
    cout<<"\n\n==================\n";
    

    //getline(cin,choice);
    switch (choice){
        case 1:
            beginner();
            return 0;
        break;
        case 2:
            intermediate();
        break;
        case 3:
            hard();
            cout<<"Not Found:";
        break;
        return 0;
    }
    return 0;
}
