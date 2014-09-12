//
//  UndercoverGameScene.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-9-12.
//
//

#ifndef __BoardGameKing__UndercoverGameScene__
#define __BoardGameKing__UndercoverGameScene__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class UndercoverGameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(UndercoverGameScene);
    
public:
    void buttonBack(Ref *senderz, Control::EventType controlEvent);
    
};
#endif /* defined(__BoardGameKing__UndercoverGameScene__) */
