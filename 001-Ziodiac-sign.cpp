#include <iostream>
#include <string>
#include <list>

using namespace std;

enum all{
Fire,
Earth,
Air,
Water
};

enum Zodiacc{
    Aries,
    Taurus,
    Gemini,
    Cancer,
    Leo,
    Virgo,
    Libra,
    Scorpio,
    Sagittarius,
    Capricorn,
    Aquarius,
    Pisces

};
string elementname(all elem){
switch (elem)
{
case Fire:
return "Fire";
case Water:
return "Water";
case Earth:
return "Earth";
case Air:
return "Air";
default: return "wrong!!!";
}

}

struct Zodiacs{
string name;
int startDay;
int startMonth;
int endDay;
int endMonth;
all element;
};

string Zodiacabout(Zodiacc name){
switch (name)
{
    case Aries:
        return "Aries is a fire sign known for high energy, courage, and leadership tendencies. They are action-oriented and like challenges. They make quick decisions and often act impulsively. They are highly motivated and competitive.";

    case Taurus:
        return "Taurus is an earth sign associated with stability, patience, and persistence. They value comfort and security in life. They move slowly but steadily toward their goals. They are reliable but can be stubborn.";

    case Gemini:
        return "Gemini is an air sign characterized by curiosity, adaptability, and communication skills. They enjoy learning and social interaction. They often switch between ideas quickly. They can sometimes seem inconsistent.";

    case Cancer:
        return "Cancer is a water sign known for emotional depth and strong intuition. They are protective of their loved ones. Family and emotional security are important to them. They can be sensitive and caring.";

    case Leo:
        return "Leo is a fire sign associated with confidence, creativity, and leadership. They enjoy being in the spotlight. They are generous and expressive in relationships. They can also be prideful.";

    case Virgo:
        return "Virgo is an earth sign focused on detail, analysis, and practicality. They are often organized and perfectionistic. They like solving problems and helping others. They can be critical but helpful.";

    case Libra:
        return "Libra is an air sign that values balance, fairness, and harmony. They try to avoid conflict and seek peace. They are social and relationship-oriented. They can struggle with indecision.";

    case Scorpio:
        return "Scorpio is a water sign known for intensity, passion, and emotional strength. They are private and observant. They are very determined once they set goals. They can be secretive and jealous.";

    case Sagittarius:
        return "Sagittarius is a fire sign associated with freedom, exploration, and optimism. They love adventure and new experiences. They are honest and straightforward. They can be impatient at times.";

    case Capricorn:
        return "Capricorn is an earth sign known for discipline, ambition, and responsibility. They focus on long-term success. They are hardworking and practical. They can seem serious and reserved.";

    case Aquarius:
        return "Aquarius is an air sign characterized by innovation, independence, and originality. They think differently from others. They care about society and future ideas. They can seem emotionally distant.";

    case Pisces:
        return "Pisces is a water sign known for imagination, empathy, and sensitivity. They are often creative and artistic. They deeply feel other people's emotions. They can sometimes escape reality.";

    

    default: return "wrong!!!";
}

}


void ShowZodiacSigns(Zodiacs array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "____________________"<<endl;
        cout << "Zodiac Name: " << array[i].name<<endl;
        cout << "Zodiac startDay: " << array[i].startDay<<endl;
        cout << "Zodiac startMonth: " << array[i].startMonth<<endl;
        cout << "Zodiac endDay: " << array[i].endDay<<endl;
        cout << "Zodiac endMonth: " << array[i].endMonth<<endl;
        cout << "Zodiac element: " << elementname(array[i].element)<<endl;
    }
}
void findZodiac(Zodiacs array[])
{
    string answ1;
    string answ2;
    string answ3;
    string answ4;
    string answ5;
    string answ6;
    string answ7;
    string answ8;
    string answ9;
    string answ10;
    string answ11;
    cout<<"Is your birthday in the first half of the year? "<<endl;
    cin>>answ1;
    if (answ1=="yes")
    {
        cout<<"Is your birthday in the first quarter of the year?"<<endl;
        cin>>answ2;
        if (answ2=="yes")
        {
            cout<<"Is your birthday in the first month of the year?"<<endl;
            cin>>answ3;
            if (answ3=="yes")
            {
                //January
                cout<<"Is 20 - your birthday > 0?"<<endl;
                cin>>answ11;
                if (answ11=="yes")
                { 
                    cout<<"your zodiac sign is Capricorn, and it is an Earth sign."<<endl;
                    cout<<Zodiacabout(Capricorn)<<endl;
                }
                else
                {
                    cout<<"Your Jodiac is Aquarius and You are  Air man!"<<endl;
                    cout<<Zodiacabout(Aquarius)<<endl;
                }
                
            }
            else
            {
                cout<<"Is your birthday in spring?"<<endl;
                cin>>answ4;
                if (answ4=="no")
                {
                    //Feburary
                    cout<<"Is 19 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is Aquarius and You are  Air man!"<<endl;
                        cout<<Zodiacabout(Aquarius)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Pisces and You are  Water man!"<<endl;
                        cout<<Zodiacabout(Pisces)<<endl;
                    }
                }
                else
                {
                    //March
                    cout<<"Is 21 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is Pisces and You are  Water man!"<<endl;
                        cout<<Zodiacabout(Pisces)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Aries and You are  Fire man!"<<endl;
                        cout<<Zodiacabout(Aries)<<endl;
                    }
                }
                
            }
            
        }
        else {
            cout<<"Is your birthday in summer?"<<endl;
            cin>>answ5;
            if (answ5=="yes")
            {
                //June
                cout<<"Is 21 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is  Gemini and You are  Air man!"<<endl;
                        cout<<Zodiacabout(Gemini)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Cancer and You are  Water man!"<<endl;
                        cout<<Zodiacabout(Cancer)<<endl;
                    }
            }
            else
            {
                cout<<"Is your zodiac sign an earth?"<<endl;
                cin>>answ6;
                if (answ6=="yes")
                {
                    
                    cout<<"Is 20 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is  Aries and You are  Fire man!"<<endl;
                        cout<<Zodiacabout(Aries)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Taurus and You are  Earth man!"<<endl;
                        cout<<Zodiacabout(Taurus)<<endl;
                    }
                }
                else
                {
                    cout<<"Is your month  5th? "<<endl;
                    cin>>answ7;
                    if (answ7=="yes")
                    {
                       
                        cout<<"Your Jodiac is  Gemini and You are  Air man!"<<endl;
                        cout<<Zodiacabout(Gemini)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Aries and You are  Fire man!"<<endl;
                        cout<<Zodiacabout(Aries)<<endl;

                    }
                    
                }
                
            }
            
        }
        







        
    }  
    else
    {
        cout<<"Is your birthday in the last quarter of the year?"<<endl;
        cin>>answ8;
        if (answ8=="yes")
        {
            cout<<"Is your birthday in winter?";
            cin>>answ9;
            if (answ9=="yes")
            {
                //December
                cout<<"Is 22 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is  Sagittarius and You are  Fire man!"<<endl;
                        cout<<Zodiacabout(Sagittarius)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Capricorn and You are  Earth man!"<<endl;
                        cout<<Zodiacabout(Capricorn)<<endl;
                    }
            }
            else{
                cout<<"Does your birth month have 31 days?";
                cin>>answ10;
                if (answ10=="yes")
                {
                    //Octember
                    cout<<"Is 23 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is  Libra and You are  Air man!"<<endl;
                        cout<<Zodiacabout(Libra)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Scorpio and You are  Water man!"<<endl;
                        cout<<Zodiacabout(Scorpio)<<endl;
                    }
                }
                else{
                    //November
                    cout<<"Is 22 - your birthday > 0?"<<endl;
                    cin>>answ11;
                    if (answ11=="yes")
                    {
                        cout<<"Your Jodiac is Scorpio and You are  Water man!"<<endl;
                        cout<<Zodiacabout(Scorpio)<<endl;
                    }
                    else
                    {
                        cout<<"Your Jodiac is Sagittarius and You are  Fire man!"<<endl;
                        cout<<Zodiacabout(Sagittarius)<<endl;
                    }
                }
                
            }
            
            
        }
        else
        {
            // July - August - September

            cout << "Is your birthday in September?" << endl;
            cin >> answ9;

            if (answ9 == "yes")
            {
                cout << "Is 23 - your birthday > 0?" << endl;
                cin >> answ11;

                if (answ11 == "yes")
                {
                    cout << "Your Zodiac is Virgo and you are an Earth sign!" << endl;
                    cout<<Zodiacabout(Virgo)<<endl;
                }
                else
                {
                    cout << "Your Zodiac is Libra and you are an Air sign!" << endl;
                    cout<<Zodiacabout(Libra)<<endl;
                }
            }
            else
            {
                cout << "Is your birthday in August?" << endl;
                cin >> answ10;

                if (answ10 == "yes")
                {
                    cout << "Is 23 - your birthday > 0?" << endl;
                    cin >> answ11;

                    if (answ11 == "yes")
                    {
                        cout << "Your Zodiac is Leo and you are a Fire sign!" << endl;
                        cout<<Zodiacabout(Leo)<<endl;
                    }
                    else
                    {
                        cout << "Your Zodiac is Virgo and you are an Earth sign!" << endl;
                        cout<<Zodiacabout(Virgo)<<endl;
                    }
                }
                else
                {
                    // July

                    cout << "Is 23 - your birthday > 0?" << endl;
                    cin >> answ11;

                    if (answ11 == "yes")
                    {
                        cout << "Your Zodiac is Cancer and you are a Water sign!" << endl;
                        cout<<Zodiacabout(Cancer)<<endl;
                    }
                    else
                    {
                        cout << "Your Zodiac is Leo and you are a Fire sign!" << endl;
                        cout<<Zodiacabout(Leo)<<endl;
                    }
                }
            }
        }
        
    }
}
int main(){
Zodiacs array[]={{"Aries",21,3,19,4,Fire},
{"Taurus",20,4,20,5,Earth},
{"Gemini",21,5,20,6,Air},
{"Cancer",21,6,22,7,Water},
{"Leo",23,7,22,8,Fire},
{"Virgo",23,8,22,9,Earth},
{"Libra",23,9,22,10,Air},
{"Scorpio",23,10,21,11,Water},
{"Sagittarius",22,11,21,12,Fire},
{"Capricorn",22,12,19,1,Earth},
{"Aquarius",20,1,18,2,Air},
{"Pisces",19,2,20,3,Water}
};
ShowZodiacSigns(array,12);
findZodiac(array);
}