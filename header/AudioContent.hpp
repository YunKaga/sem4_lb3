#ifndef AUDIOCONTENT_HPP
#define AUDIOCONTENT_HPP

#include <string>

#ifdef _WIN32
    #ifdef MUSIC_LIBRARY_EXPORTS
        #define MUSIC_API __declspec(dllexport)
    #else
        #define MUSIC_API __declspec(dllimport)
    #endif
#else
    #define MUSIC_API
#endif

class MUSIC_API AbstractAudioContent {
protected:
    std::string title;
    double duration;
public:
    AbstractAudioContent(const std::string& title, double duration);
    std::string GetTitle() const;
    double GetDuration() const;
    virtual void ShowInfo() const;
    virtual ~AbstractAudioContent();
};

#endif
