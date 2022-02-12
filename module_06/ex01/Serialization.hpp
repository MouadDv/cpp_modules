#pragma once
#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"
#include <cstdint>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif