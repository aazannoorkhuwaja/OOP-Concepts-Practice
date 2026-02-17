#include<iostream>
using namespace std;
class user{  
    public:
    friend class playlist;
    int n=0;
    playlist *p1=nullptr;
    void createplaylist()
    {
        cout <<"How Many Playlists Do You want to create! "<<endl;
        cin >>n;
        p1=new playlist[n];
        int i=0;
        while (i < n){
            
            p1[i].addsongs();
            i++;
        }
    };

    void listplaylists(){
        cout <<"******* List Playlists *******"<<endl;
        for(int i=0;i<n;i++)
        {
            cout << "Here is the List of songs in playlist : " <<endl;
            p1[i].showsongs();
        }

    };

    ~user(){
        delete[] p1 ;
    }

};

 class song{
    int n=0;
    string *title = nullptr;
    string *artist = nullptr;
    public:
    void setsong()
    {
        cout<<"How Many Songs You want to Add :"<<endl;
        cin>>n;

        title = new string[n];
        artist = new string[n];
        
        int i=0;
        while(i<n)
        {
            cout <<"Enter Song Title : "<<endl;
            cin.ignore();
            getline(cin,title[i]);
            cout <<"Do you know artist name : if (yes/y) then share if (no/n) then we can move forward "<<endl;
            string artist_confo;
            cin>>artist_confo;
            cin.ignore();
            if(artist_confo == "yes" || artist_confo == "y")
            {
                cout<<"Share The Artist name of Song : "<<endl;
                getline(cin,artist[i]);

            }
            else {
                cout <<"If You Dont want to share then we are comfortable to move forward!"<<endl;
                cout<<"Share The Artist name of Song : "<<endl;
                artist[i]="no name";
            }
            i++;
        }
        
    };

    void getsongdetails(){
        cout <<"Total Number Of Songs In Play List Are :"<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout <<"Song Title Is : "<<title[i]<<endl;
            cout<< "Artist Of Song IS : "<<artist[i]<<endl;
        }

    }

   
    ~ song() {
        delete[] artist ;
        delete[] title ;
    }
};

class playlist{
public:
friend class song;
song s1;
    void addsongs()
    {   
    s1.setsong();
    }
    void showsongs()
    {
        s1.getsongdetails();
    };
};


int main(){
user u;
 u.createplaylist();
 u.listplaylists();
 return 0;
 }