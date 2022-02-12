#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

#include <time.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p);
Base * generate(void);
void identify(Base& p);

#endif