#ifndef WORD_LIST_H
#define WORD_LIST_H


struct WordWithHint {
    char *word;
    char *hint;
};


#define MAX_INDEX (sizeof(wordList) / sizeof((wordList)[0]) - 1)

struct WordWithHint wordList[] = {
    { "geeksforgeeks", "Computer coding" },
    { "elephant", "A large mammal with a trunk" },
    { "pizza", "A popular Italian dish" },
    { "beach", "Sandy shore by the sea" },
    { "mountain", "A large natural elevation of the earth's surface" },
    { "guitar", "A stringed musical instrument" },
    { "jazz", "A genre of music with improvisation" },
    { "sunflower", "A tall plant with a large yellow flower" },
    { "bicycle", "A two-wheeled vehicle powered by pedaling" },
    { "pyramid", "A monumental structure with a square base and triangular sides" },
    { "cloud", "A visible mass of condensed water vapor in the sky" },
    { "robot", "A machine capable of carrying out a complex series of actions" },
    { "chocolate", "A sweet treat made from cocoa beans" },
    { "lighthouse", "A tall structure that helps guide ships at sea" },
    { "astronaut", "A person trained for space travel" },
    { "volcano", "A mountain that erupts with molten lava" },
    { "ballet", "A highly technical form of dance" },
    { "mystery", "A genre focused on solving crimes or uncovering secrets" },
    { "keyboard", "A device for typing letters, numbers, and symbols" },
    { "treasure", "Valuable items often buried or hidden" },
    { "library", "A collection of books and other media for study and reading" },
    { "butterfly", "An insect with large colorful wings" },
    { "waterfall", "A flow of water over a vertical drop" },
    { "whale", "A large marine mammal" },
    { "dragon", "A mythical creature often depicted with wings and fire-breathing ability" },
    { "hologram", "A three-dimensional image formed by light" },
    { "moon", "Earth's natural satellite" },
    { "octopus", "A sea creature with eight arms" },
    { "universe", "All of space and everything in it, including stars and planets" },
    { "piano", "A large musical instrument with keys played by pressing them" }
};

#endif //WORD_LIST_H