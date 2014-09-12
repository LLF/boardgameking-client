//
//  UndercoverHostScene.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-28.
//
//

#ifndef __BoardGameKing__UndercoverHostScene__
#define __BoardGameKing__UndercoverHostScene__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class UndercoverHostScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(UndercoverHostScene);
    
public:
    void buttonBack(Ref *senderz, Control::EventType controlEvent);
    void buttonStart(Ref *senderz, Control::EventType controlEvent);

};
#endif /* defined(__BoardGameKing__UndercoverHostScene__) */
