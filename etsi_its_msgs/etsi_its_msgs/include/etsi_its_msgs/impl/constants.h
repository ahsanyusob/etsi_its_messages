/*
=============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
=============================================================================
*/

/**
 * @file impl/constants.h
 * @brief File containing constants that are used in the context of ETIS ITS Messages
 */

#pragma once

#include <iostream>
#include <map>

namespace etsi_its_msgs {

const uint64_t UNIX_SECONDS_2004 = 1072915200; // Unix-Seconds for 2004-01-01T00:00:00.000Z

/**
 * @brief std::map that stores all leap second insertions since 2004 with the corresponding unix-date of the insertion
 * 
 */
const std::map<uint64_t, uint16_t> LEAP_SECOND_INSERTIONS_SINCE_2004 {
    {UNIX_SECONDS_2004, 0},
    {1136073599, 1}, // 2005-12-31T23:59:59.000Z
    {1230767999, 2}, // 2008-12-31T23:59:59.000Z
    {1341100799, 3}, // 2012-06-30T23:59:59.000Z
    {1435708799, 4}, // 2015-06-30T23:59:59.000Z
    {1483228799, 5}  // 2016-12-31T23:59:59.000Z
};

/**
 * @brief Get the leap second insertions since 2004 for given unix seconds
 * 
 * @param unix_seconds
 * @return uint16_t the number of leap second insertions since 2004 for unix_seconds
 */
inline uint16_t getLeapSecondInsertionsSince2004(const uint64_t unix_seconds)
{
    // Check if the map is empty
    if (LEAP_SECOND_INSERTIONS_SINCE_2004.empty()) {
        std::cerr << "WARN: LEAP_SECOND_INSERTIONS_SINCE_2004 is empty!" << std::endl;
        return 0;
    }

    auto it = LEAP_SECOND_INSERTIONS_SINCE_2004.upper_bound(unix_seconds); // Find the first element greater than givenUnixSecond
    if (it == LEAP_SECOND_INSERTIONS_SINCE_2004.begin()) {
        std::cerr << "Given unix_second is smaller than all keys in the map!" << std::endl;
        return 0;
    }
    --it; // Move iterator to the element with a key less than or equal to givenUnixSecond
    return it->second; // Return the corresponding value
}

} // namespace etsi_its_msgs