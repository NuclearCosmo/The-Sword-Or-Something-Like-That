#pragma once
#include <functional>
#include <iostream>
#include "cocos2d.h"

namespace cocos2d //Namespace
{
	class Event;
	class EventListenerKeyboard;
	class Node;
}


namespace OOP //Our namespace
{
	class KeyboardListener
	{
	public:
		//Constructor is called when an object of type MouseListener is called
		KeyboardListener();
		//Destructor is called when an object of type MouseListener is destroyed
		~KeyboardListener();

		void OnKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event *a_Event); //Gets called when the mouse button is released
		void OnKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event *a_Event); //Gets called when the mouse button is pressed


		bool getLeftArrow();
		bool getRightArrow();
		bool getUpArrow();


		cocos2d::EventListenerKeyboard *getListener(); //Returns the listener that holds the event


	private:
		cocos2d::EventListenerKeyboard *m_Listener; //The listener that saves the event
		bool upArrow = false;
		bool leftArrow = false;
		bool rightArrow = false;
	};
}