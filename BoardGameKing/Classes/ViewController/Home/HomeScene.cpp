//
//  HomeScene.cpp
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-20.
//
//

#include "HomeScene.h"
#include "../../Games/Undercover/GameView/UndercoverStartScene.h"

Scene* HomeScene::createScene()
{
    auto scene = Scene::create();
    auto layer = HomeScene::create();
    scene->addChild(layer);
    return scene;
}

bool HomeScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    ControlButton* button = ControlButton::create("卧底", "Arial", 40);
    button->addTargetWithActionForControlEvents(this, cccontrol_selector(HomeScene::buttonTouch), Control::EventType::TOUCH_UP_INSIDE);
    button->setAnchorPoint(Point(0.5,0.5));
    button->setZoomOnTouchDown(true);
    button->setPosition(Vec2(visibleSize.width / 2,
                             visibleSize.height / 2));
    this->addChild(button, 1);
    return true;
}

void HomeScene::buttonTouch(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->pushScene(UndercoverStartScene::createScene());
}