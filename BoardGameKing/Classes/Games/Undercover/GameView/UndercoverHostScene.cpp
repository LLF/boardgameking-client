//
//  UndercoverHostScene.cpp
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-28.
//
//

#include "UndercoverHostScene.h"
#include "UndercoverGameScene.h"

Scene* UndercoverHostScene::createScene()
{
    auto scene = Scene::create();
    auto layer = UndercoverHostScene::create();
    scene->addChild(layer);
    return scene;
}

bool UndercoverHostScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    ControlButton* back = ControlButton::create("Back", "Arial", 40);
    back->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverHostScene::buttonBack), Control::EventType::TOUCH_UP_INSIDE);
    back->setAnchorPoint(Point(0.5,0.5));
    back->setZoomOnTouchDown(true);
    back->setPosition(Vec2(visibleSize.width - 100,
                           visibleSize.height -100));
    this->addChild(back, 1);
    ControlButton* button1 = ControlButton::create("Start", "Arial", 40);
    button1->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverHostScene::buttonStart), Control::EventType::TOUCH_UP_INSIDE);
    button1->setAnchorPoint(Point(0.5,0.5));
    button1->setZoomOnTouchDown(true);
    button1->setPosition(Vec2(visibleSize.width / 2,
                              visibleSize.height / 2 + 50));
    this->addChild(button1, 1);
    return true;
}

void UndercoverHostScene::buttonBack(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}

void UndercoverHostScene::buttonStart(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->pushScene(UndercoverGameScene::createScene());
}