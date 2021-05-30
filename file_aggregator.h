#pragma once

#include "disk_writer.h"

#include <stdint.h>

int64_t aggregate_data(size_t threads_n, filelist files);