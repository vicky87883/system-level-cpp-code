#include <iostream>        // Input and output stream (cin, cout, cerr)
#include <vector>          // Dynamic array container (std::vector)
#include <algorithm>       // Algorithms like sort, max_element, etc.
#include <iterator>        // Iterator utilities (std::begin, std::end, etc.)
#include <numeric>         // Numeric operations (accumulate, inner_product, etc.)
#include <functional>      // Function objects, bind, function, etc.
#include <cmath>           // Common math functions (sqrt, pow, abs, etc.)
#include <limits>          // Numeric limits of data types
#include <random>          // Random number generation utilities
#include <chrono>          // Time utilities (duration, clock, etc.)
#include <thread>          // Multithreading support (std::thread)
#include <future>          // Asynchronous operations (std::future, std::async)
#include <exception>       // Exception handling utilities (std::exception)
#include <type_traits>     // Compile-time type information
#include <utility>         // Utility components (std::move, std::swap, etc.)
#include <optional>        // Optional values (std::optional)
#include <variant>         // Type-safe union (std::variant)
#include <array>           // Fixed-size array container (std::array)
#include <map>             // Sorted associative container (std::map)
#include <set>             // Sorted set container (std::set)
#include <unordered_map>   // Unordered associative container (std::unordered_map)
#include <unordered_set>   // Unordered set container (std::unordered_set)
#include <list>            // Doubly-linked list container (std::list)
#include <deque>           // Double-ended queue container (std::deque)
#include <bitset>          // Fixed-size sequence of bits (std::bitset)
#include <stack>           // Stack container adapter (std::stack)
#include <queue>           // Queue container adapter (std::queue, std::priority_queue)
#include <fstream>         // File stream operations (std::ifstream, std::ofstream)
#include <sstream>         // String stream classes (std::stringstream, etc.)
#include <regex>           // Regular expressions (std::regex)
#include <locale>          // Localization utilities
#include <codecvt>         // Unicode conversion utilities (deprecated in C++17)
#include <filesystem>      // File system library (std::filesystem)
#include <initializer_list>// Support for initializer lists
#include <typeindex>       // Runtime type information (std::type_index)
#include <typeinfo>        // Runtime type information (typeid)
#include <atomic>          // Atomic operations for multithreading
#include <condition_variable> // Thread synchronization (std::condition_variable)
#include <mutex>           // Mutual exclusion primitives (std::mutex)
#include <shared_mutex>    // Shared mutual exclusion (std::shared_mutex)

// Additional commonly used standard headers not in your list:
#include <cstddef>         // Defines types like size_t, ptrdiff_t
#include <cassert>         // Macro for diagnostics (assert)
#include <climits>         // Limits of integral types
#include <cfloat>          // Limits of floating-point types
#include <cstdint>         // Fixed-width integer types (int32_t, etc.)
#include <cstdio>          // C-style input/output (printf, scanf, etc.)
#include <cstdlib>         // General utilities (malloc, free, rand, etc.)
#include <cstring>         // C-style string handling (strcpy, strlen, etc.)
#include <ctime>           // C-style time/date utilities
#include <stdexcept>       // Standard exceptions (std::runtime_error, etc.)
#include <memory>          // Smart pointers (std::unique_ptr, std::shared_ptr)
#include <new>             // Low-level memory management (operator new)
#include <tuple>           // Tuple library (std::tuple)
#include <scoped_allocator>// Nested memory allocation (std::scoped_allocator_adaptor)
#include <forward_list>    // Singly-linked list container (std::forward_list)
#include <complex>         // Complex number support (std::complex)
#include <valarray>        // Array class for numeric values (std::valarray)
#include <cfenv>           // Floating-point environment
#include <ciso646>         // Alternative operator spellings
#include <locale.h>        // C localization utilities
#include <cwchar>          // Wide character utilities
#include <cwctype>         // Wide character classification and mapping
using namespace std;
// ...existing code...
void printAllSubarrays(const vector<int>& arr)
{
    int n=arr.size();
    // Iterate over all possible starting points of subarrays
    for(int start = 0; start < n; ++start)
    {
        for(int end=start;end<n;++end)
        {
            cout<<"[";
            // Iterate over all possible ending points of subarrays
            for(int k=start;k<=end;++k)
            {
                cout<<arr[k];
                if(k<end) cout<<", ";
            }
            cout<<"]\n";
        }
    }
}
void main(){
vector<int> arr={1,2,3};
printAllSubarrays(arr);
}