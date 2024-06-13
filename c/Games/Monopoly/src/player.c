#include "player.h"
#include <string.h>

void initializePlayer(Player *player, const char *name) {
    strncpy(player->name, name, sizeof(player->name) - 1);
    player->position = 0;
    player->balance = 1500;
    player->inJail = 0;
    player->jailTurns = 0;
    player->getOutOfJailFreeCards = 0;
    memset(player->properties, -1, sizeof(player->properties));
}
