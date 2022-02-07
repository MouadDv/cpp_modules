#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

template<typename T>
void swap(T &one, T &two)
{
  T tmp;
  tmp = one;
  one = two;
  two = tmp;
}

template<typename X>
X min(X one, X two)
{
  if (two <= one)
    return (two);
  return (one);
}

template<typename Y>
Y max(Y one, Y two)
{
  if (two >= one)
    return (two);
  return (one);
}



#endif
