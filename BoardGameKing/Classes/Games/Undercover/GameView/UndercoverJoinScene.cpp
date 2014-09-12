//
//  UndercoverJoinScene.cpp
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-28.
//
//

#include "UndercoverJoinScene.h"

Scene* UndercoverJoinScene::createScene()
{
    auto scene = Scene::create();
    auto layer = UndercoverJoinScene::create();
    scene->addChild(layer);
    return scene;
}

bool UndercoverJoinScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    ControlButton* back = ControlButton::create("Back", "Arial", 40);
    back->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverJoinScene::buttonBack), Control::EventType::TOUCH_UP_INSIDE);
    back->setAnchorPoint(Point(0.5,0.5));
    back->setZoomOnTouchDown(true);
    back->setPosition(Vec2(visibleSize.width - 100,
                           visibleSize.height -100));
    this->addChild(back, 1);
    return true;
}

void UndercoverJoinScene::buttonBack(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}