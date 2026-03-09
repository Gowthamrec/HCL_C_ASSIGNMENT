#include <iostream>
#include <string>
using namespace std;

class Media {
public:
    string title;
    Media(string t) : title(t) {}
    virtual void play() { cout << "Playing media: " << title << endl; }
    virtual ~Media() {}
};

class Audio : public Media {
public:
    Audio(string t) : Media(t) {}
    void play() override { cout << "Playing audio: " << title << endl; }
};

class Video : public Media {
public:
    Video(string t) : Media(t) {}
    void play() override { cout << "Playing video: " << title << endl; }
};

int main() {
    Media *m1 = new Audio("Song.mp3");
    Media *m2 = new Video("Movie.mp4");

    m1->play();
    m2->play();

    delete m1;
    delete m2;
    return 0;
}
