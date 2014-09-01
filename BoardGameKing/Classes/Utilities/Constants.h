//
//  Constants.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-26.
//
//

#ifndef __BoardGameKing__Constants__
#define __BoardGameKing__Constants__

#include "cocos2d.h"
#include "AppMacros.h"
namespace Constants
{
    //Audio
//    extern const char * BACKGROUND_SOUND_TOGGLE;
//    extern const char * SOUND_EFFECT_TOGGLE;
    extern const char * SOUND_MANAGER;
    
    //Network
    typedef enum
    {
        HTTP200 = 200,
        HTTP204 = 204,
        HTTP302 = 302,
        HTTP403 = 403,
        HTTP404 = 404,
        HTTP500 = 500,
    } HTTP_STATUS;
    
    typedef enum
    {
        STATUS_CODE_OK = 0,
        STATUS_CODE_AUTHENTICATION_ERROR = 1,
        STATUS_CODE_REQUIRE_UUID = 2,
        STATUS_CODE_INVALID_UUID = 4,
        STATUS_CODE_PLAYER_NOT_EXIST = 5,
        STATUS_CODE_MAINTENANCE = 8,
        STATUS_CODE_PLAYER_BAN = 9,
        STATUS_CODE_APP_NEED_UPDATE = 10,
        STATUS_CODE_DLC_NEED_UPDATE = 11,
        SYSTEM_SERVER_STATUS_CODE = 1000,
    } SERVER_STATUS;
}
using namespace Constants;
#endif /* defined(__BoardGameKing__Constants__) */
