#pragma once

#include <stdbool.h>
#include <stddef.h>

/// True on success
bool fill_memory(void *address, size_t sz, size_t threads_n);