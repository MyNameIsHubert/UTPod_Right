//
// Created by Hubert ECE on 10/30/2018.
//
/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "UTPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;

    cout<<"---------------------------Test Case 0/Remove Song from Empty List----------------------------" << endl;
    Song s0("Justin Bieber", "Baby", 4);
    int result1 = t.removeSong(s0);
    cout<<"Removing: " << s0.getTitle() << ", by " << s0.getArtist() << "." << endl;
    cout << "Delete result is = " << result1 << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 1/Add Song----------------------------" << endl;
    Song s1("Beatles", "Hey Jude", 4);
    int result = t.addSong(s1);
    cout << "Adding: " << s1.getTitle() << ", by " << s1.getArtist() << ". With size " << s1.getSize()<< "MB." << endl <<"Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 2/Add Song----------------------------" << endl;
    Song s2("Macklemore", "Brad Pitt is my Cousin", 5);
    result = t.addSong(s2);
    cout << "Adding: " << s2.getTitle() << ", by " << s2.getArtist() << ". With size " << s2.getSize()<< "MB." << endl <<"Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 3/Add Song----------------------------" << endl;
    Song s3("Macklemore", "Tunnels", 6);
    result = t.addSong(s3);
    cout << "Adding: " << s3.getTitle() << ", by " << s3.getArtist() << ". With size " << s3.getSize()<< "MB." << endl <<"Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 4/Add Song----------------------------" << endl;
    Song s4("Waka Flaka", "No Hands", 7);
    result = t.addSong(s4);
    cout << "Adding: " << s4.getTitle() << ", by " << s4.getArtist() << ". With size " << s4.getSize()<< "MB."<< endl <<"Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 5/Add Song----------------------------" << endl;
    Song s5("Macklemore", "Tunnels Extended", 141);
    result = t.addSong(s5);
    cout << "Adding: " << s5.getTitle() << ", by " << s5.getArtist() << ". With size " << s5.getSize()<< "MB."<< endl <<"Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 6/Add Song----------------------------" << endl;
    Song s6("Halsey", "Colors", 77);
    result = t.addSong(s6);
    cout << "Adding: " << s6.getTitle() << ", by " << s6.getArtist() << ". With size " << s6.getSize()<< "MB."<< endl << "Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout<<endl;

    cout<<"---------------------------Test Case 7/Add Song----------------------------" << endl;
    Song s7("Queen", "Bohemian Rhapsody", 200);
    result = t.addSong(s7);
    cout << "Adding: " << s7.getTitle() << ", by " << s7.getArtist() << ". With size " << s7.getSize()<< "MB." << endl << "Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout << endl;

    cout<<"---------------------------Test Case 8/Add Song----------------------------" << endl;
    Song s8("Toby Fox", "Megalovania", 300);
    result = t.addSong(s8);
    cout << "Adding:" << s8.getTitle() << ", by " << s8.getArtist() << ". With size " << s8.getSize()<< "MB." << endl << "Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout << endl;

    cout<<"---------------------------Test Case 9/Add Same Song----------------------------" << endl;
    Song s9("Waka Flaka", "No Hands", 7);
    result = t.addSong(s9);
    cout << "Adding:" << s9.getTitle() << ", by " << s9.getArtist() << ". With size " << s9.getSize()<< "MB." << endl << "Add result is = " << result << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout << endl;

    cout<<"---------------------------Test Case 10/Changing Song Title, Artist Name, and Size----------------------------" << endl;

    string newart = "ToTo";
    string newtitle = "Africa";
    int newsize = 33;
    cout << "Changing: " << s1.getTitle() << ", by " << s1.getArtist() << ". With size " << s1.getSize()<< "MB." << endl;
    s1.setArtist(newart);
    s1.setTitle(newtitle);
    s1.setSize(newsize);
    cout << "To: " << s1.getTitle() <<  ", by " << s1.getArtist() << ". With size " << s1.getSize()<< "MB." << endl;
    cout << "Current Song List:" << endl;
    cout<<endl;
    t.showSongList();
    cout << endl;
    cout << endl;
    cout << endl;

    cout<< "--------------------Shuffle---------------------" <<endl;
    cout << "Shuffle Music List: " << endl;
    t.shuffle();
    t.showSongList();
    cout<<endl;
    cout<<endl;

    cout<<"----------------------Sort-----------------------" <<endl;
    cout << "Sort Music List: " << endl;
    t.sortSongList();
    t.showSongList();
    cout<<endl;
    cout<<endl;

    cout<<"------------------Removing Songs-----------------"<<endl;
    cout<<"Removing: " << s2.getTitle() << ", by " << s2.getArtist() << "." << endl;
    result = t.removeSong(s2);
    cout << "Delete result is = " << result << endl;
    cout<<endl;
    cout<<"Removing: " << s3.getTitle() << ", by " << s3.getArtist() << "." << endl;
    result = t.removeSong(s3);
    cout << "Delete result is = " << result << endl;
    cout<<endl;

    cout << "Showing Current Song List: " << endl;
    t.showSongList();
    cout<<endl;

    cout<<endl;
    cout<<"Removing: " << s1.getTitle() << ", by " << s1.getArtist() << "." << endl;
    result = t.removeSong(s1);
    cout << "Delete result is = " << result << endl;
    cout<<endl;
    cout<<"Removing: " << s5.getTitle() << ", by " << s5.getArtist() << "." << endl;
    result = t.removeSong(s5);
    cout << "Delete result is = " << result << endl;
    cout << endl;
    cout<<"Removing: " << s4.getTitle() << ", by " << s4.getArtist() << "." << endl;
    result = t.removeSong(s4);
    cout << "Delete result is = " << result << endl;
    cout<<endl;

    cout << "Showing Current Song List: "<< endl;
    t.showSongList();
    cout<<endl;

    cout<<"-------------------------Adding Songs Again----------------------" << endl;

    result = t.addSong(s5);
    cout << "Adding: " << s5.getTitle() << ", by " << s5.getArtist() << "." << endl <<"Add result is = " << result << endl;

    cout<<"Showing Current Song List: " << endl;
    t.showSongList();
    cout<<endl;


    cout << "Remaining Free Memory = " << t.getRemainingMemory() << endl;
    cout << "Memory Taken up = " << t.getTotalMemory()-t.getRemainingMemory();
    cout<<endl;


}
