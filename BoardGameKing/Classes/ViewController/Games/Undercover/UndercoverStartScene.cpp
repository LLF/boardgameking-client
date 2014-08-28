//
//  UndercoverStartScene.cpp
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-26.
//
//

#include "UndercoverStartScene.h"
Scene* UndercoverStartScene::createScene()
{
    auto scene = Scene::create();
    auto layer = UndercoverStartScene::create();
    scene->addChild(layer);
    return scene;
}

bool UndercoverStartScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    ControlButton* button1 = ControlButton::create("Create", "Arial", 40);
    button1->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverStartScene::buttonBack), Control::EventType::TOUCH_UP_INSIDE);
    button1->setAnchorPoint(Point(0.5,0.5));
    button1->setZoomOnTouchDown(true);
    button1->setPosition(Vec2(visibleSize.width / 2,
                             visibleSize.height / 2 + 50));
    this->addChild(button1, 1);
    ControlButton* button2 = ControlButton::create("Join", "Arial", 40);
    button2->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverStartScene::buttonJoin), Control::EventType::TOUCH_UP_INSIDE);
    button2->setAnchorPoint(Point(0.5,0.5));
    button2->setZoomOnTouchDown(true);
    button2->setPosition(Vec2(visibleSize.width / 2,
                             visibleSize.height / 2 - 50));
    this->addChild(button2, 1);
    ControlButton* back = ControlButton::create("Back", "Arial", 40);
    back->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverStartScene::buttonBack), Control::EventType::TOUCH_UP_INSIDE);
    back->setAnchorPoint(Point(0.5,0.5));
    back->setZoomOnTouchDown(true);
    back->setPosition(Vec2(visibleSize.width - 100,
                              visibleSize.height -100));
    this->addChild(back, 1);
    return true;
}

void UndercoverStartScene::buttonCreate(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}
void UndercoverStartScene::buttonJoin(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}
void UndercoverStartScene::buttonBack(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}