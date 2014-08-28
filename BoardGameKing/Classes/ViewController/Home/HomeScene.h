//
//  HomeScene.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-20.
//
//

#ifndef __BoardGameKing__HomeScene__
#define __BoardGameKing__HomeScene__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class HomeScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
        
    CREATE_FUNC(HomeScene);
    
public:
    void buttonTouch(Ref *senderz, Control::EventType controlEvent);
};
#endif /* defined(__BoardGameKing__HomeScene__) */
