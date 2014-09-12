//
//  UndercoverStartScene.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-26.
//
//

#ifndef __BoardGameKing__UndercoverStartScene__
#define __BoardGameKing__UndercoverStartScene__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class UndercoverStartScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(UndercoverStartScene);
    
public:
    void buttonCreate(Ref *senderz, Control::EventType controlEvent);
    void buttonJoin(Ref *senderz, Control::EventType controlEvent);
    void buttonBack(Ref *senderz, Control::EventType controlEvent);

};

#endif /* defined(__BoardGameKing__UndercoverStartScene__) */
