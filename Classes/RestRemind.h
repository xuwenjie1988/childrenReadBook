#ifndef __RestRemind_SCENE_H__
#define __RestRemind_SCENE_H__

#include "cocos2d.h"
#include "FileNames.h"
#include "BabyCenter.h"
#include "App.h"
#include "Toast.h"
class RestRemind : public cocos2d::Layer
{
public:
	RestRemind();
	~RestRemind();
    virtual bool init();
    CREATE_FUNC(RestRemind);
private:
	EventListenerTouchOneByOne* myTouchListener;//��������
	int m_times;//��ʱ
};

#endif // __Parent_SCENE_H__
