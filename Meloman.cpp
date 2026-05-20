#include "MusicDisk.hpp"
#include "Song.hpp"
#include "header/InstrumentalTrack.hpp"

#include <iostream>

int main() {
    MusicDisk disk("Sklad", 160);

    auto song1 = std::make_shared<Song>("a", 10, "b", "c", "d", false);
    auto song2 = std::make_shared<Song>("b", 20, "b", "c", "d", false);
    auto song3 = std::make_shared<Song>("c", 30, "b", "c", "d", false);
    auto song4 = std::make_shared<InstrumentalTrack>("d", 40, "b", "c", "guitar", true);

    disk.AddTrack(song1);
    disk.AddTrack(song2);
    disk.AddTrack(song3);
    disk.AddTrack(song4);

    disk.ShowAllTracks();

    std::cout << disk.CalculateTotalDuration() << std::endl;
    std::cout << disk.GetTrackCount() << std::endl;

    return 0;
}
