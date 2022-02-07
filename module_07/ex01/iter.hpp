#pragma once
#ifndef ITER_H
#define ITER_H

template<typename T>
void iter(T *p, int l, void(*f)(T&))
{
  for (int i = 0; i < l; i++) {
    f(p[i]);
  }
}

#endif
