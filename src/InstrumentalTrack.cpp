#include "InstrumentalTrack.hpp"

InstrumentalTrack::InstrumentalTrack(const std::string& title, double duration, const std::string& composer, const std::string& genre,
        const std::string& leadInstrument, bool hasSolo) : MusicalComposition(title, duration, composer, genre), _leadInstrument(leadInstrument), _hasSolo(hasSolo) {}

std::string InstrumentalTrack::GetLeadInstrument() const {
    return this->_leadInstrument;
}

bool InstrumentalTrack::HasSolo() const {
    return this->_hasSolo;
}

void InstrumentalTrack::ShowInfo() const {
    printf("Title: %s, Duration: %f, Composer: %s, Genre: %s, LeadInstrument: %s, HasSolo: %b", title.c_str(), duration, composer.c_str(), genre.c_str(), _leadInstrument.c_str(), _hasSolo);
}

InstrumentalTrack::~InstrumentalTrack() {}
