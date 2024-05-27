
module;

export module efi.types:time;

import :primitives;

export namespace efi
{
struct time_t
{
    u16 year;
    u8  month;
    u8  day;
    u8  hour;
    u8  minute;
    u8  second;
    u8  pad1;
    u32 nanosecond;
    i16 timezone;
    u8  daylight;
    u8  pad2;
};

struct time_capability_t
{
    u32  resolution;
    u32  accuracy;
    bool sets_to_zero;
};

} // namespace efi