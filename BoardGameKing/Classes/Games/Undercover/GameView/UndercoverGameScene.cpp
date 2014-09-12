//
//  UndercoverGameScene.cpp
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-9-12.
//
//

#include "UndercoverGameScene.h"
Scene* UndercoverGameScene::createScene()
{
    auto scene = Scene::create();
    auto layer = UndercoverGameScene::create();
    scene->addChild(layer);
    return scene;
}

bool UndercoverGameScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    ControlButton* back = ControlButton::create("Back", "Arial", 40);
    back->addTargetWithActionForControlEvents(this, cccontrol_selector(UndercoverGameScene::buttonBack), Control::EventType::TOUCH_UP_INSIDE);
    back->setAnchorPoint(Point(0.5,0.5));
    back->setZoomOnTouchDown(true);
    back->setPosition(Vec2(visibleSize.width - 100,
                           visibleSize.height - 100));
    this->addChild(back, 1);
    return true;
}


void UndercoverGameScene::buttonBack(Ref *senderz, Control::EventType controlEvent)
{
    Director::getInstance()->popScene();
}