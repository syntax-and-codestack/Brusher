//shaderflags.cpp programmed by hunter manko
#define SHADER_FLAG_CLIP 000
#define SHADER_FLAG_MONSTER_CLIP 001
#define SHADER_FLAG_PLAYER_CLIP 002
#define SHADER_FLAG_LIGHTGRID 003
#define SHADER_FLAG_AMBIENT 004
#define SHADER_FLAG_TRIGGER 005
#define SHADER_FLAG_CAULK 006
#define SHADER_FLAG_LIQUID 007
#define SHADER_FLAG_WATER 008
#define SHADER_FLAG_LAVA 009
#define SHADER_FLAG_PORTAL 010
#define SHADER_FLAG_FLAGGER 011
#define SHADER_FLAG_VOLUME 012
#define SHADER_FLAG_NODRAW 013
#define SHADER_FLAG_GOAL_VOLUME 014
#define SHADER_FLAG_HINT 015

//compare clip
#define SHADER_COMPARE_FLAGS 0x0 SHADER_FLAG_CLIP || SHADER_FLAG_MONSTER_CLIP || SHADER_FLAG_PLAYER_CLIP

//match to macro value
int SHADERFLAG_ID;