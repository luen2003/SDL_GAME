#pragma once

#include "CommonFunction.h"
#include "TextObject.h"

enum ResultType
{
    RESULT_WIN,
    RESULT_LOSE
};

enum ResultAction
{
    ACTION_REPLAY,
    ACTION_MENU
};

class ResultScreen
{
public:

    ResultAction Show(SDL_Surface* screen,
        TTF_Font* font,
        ResultType result,
        int score,
        std::string highScore);
};