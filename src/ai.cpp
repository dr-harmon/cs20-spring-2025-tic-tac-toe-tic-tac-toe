#include "ai.h"

#include <limits>

using namespace std;

TicTacToeAI::TicTacToeAI(Player aiPlayer, Player opponent)
{
    if (aiPlayer == NONE || opponent == NONE) {
        throw TicTacToeBoard::InvalidPlayer();
    }

    this->aiPlayer = aiPlayer;
    this->opponent = opponent;
}

int TicTacToeAI::getBestMove(const TicTacToeBoard& board) const
{
    return minimax(board, true).move;
}

TicTacToeAI::Node TicTacToeAI::minimax(const TicTacToeBoard& board, bool maximize) const
{
    // TODO: If the game is over, return an appropriate score and 0 as the move.

    // TODO: If the game is not over, then for all possible next moves,
    // call minimax recursively to determine which move provides the best
    // score, then return that score and move.
}
