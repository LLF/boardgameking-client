//
//  UndercoverJoinScene.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-28.
//
//

#ifndef __BoardGameKing__UndercoverJoinScene__
#define __BoardGameKing__UndercoverJoinScene__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class UndercoverJoinScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(UndercoverJoinScene);
    
public:
    void buttonBack(Ref *senderz, Control::EventType controlEvent);
    
};
#endif /* defined(__BoardGameKing__UndercoverJoinScene__) */
