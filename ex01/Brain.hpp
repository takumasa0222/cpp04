#pragma once
#include <string>
#include <cstdio>

class Brain {
public:
    Brain();
    ~Brain();
    Brain(const Brain& source);
    Brain& operator=(const Brain& source);
    void setIdea(unsigned int index, const std::string &idea);
    const std::string &getIdea(unsigned int index) const;
    static const unsigned int kIdeaSize = 100;
private:
    std::string ideas[kIdeaSize];
};
