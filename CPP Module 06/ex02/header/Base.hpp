#pragma once

#include <iostream>
#include <cstdlib> //rand
#include <ctime> //seed pour rand

class Base {
	public:
		virtual			~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};