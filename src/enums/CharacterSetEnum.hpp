#ifndef CHARACTER_SET_H
#define CHARACTER_SET_H

enum class CharacterSetEnum
{
    ASCII = 0,
    UTF8 = 1
};
static const char* const CharacterSetNames[2] = { "ASCII", "UTF8" };

#endif
