#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media {
public:
    virtual void play() = 0;
    virtual ~Media() { cout << "Media destructor called." << endl; }
};

class Audio : public Media {
public:
    void play() override { cout << "Playing Audio..." << endl; }
    ~Audio() { cout << "Audio destructor." << endl; }
};

class Video : public Media {
public:
    void play() override { cout << "Playing Video..." << endl; }
    ~Video() { cout << "Video destructor." << endl; }
};

int main() {
    vector<unique_ptr<Media>> playlist;
    playlist.push_back(make_unique<Audio>());
    playlist.push_back(make_unique<Video>());
    playlist.push_back(make_unique<Audio>());

    for (auto &m : playlist)
        m->play();

    return 0;
}
