
module;

export module efi.types:system;

import :primitives;

export namespace efi
{
struct table_header
{
    u64 signature;
    u32 revision;
    u32 header_size;
    u32 crc32;
    u32 reserved;
};

struct alignas(16) guid_t
{
    u32 ms1;
    u16 ms2;
    u16 ms3;
    u8  ms4[8];
};

constexpr auto
make_guid(auto _ms1,
          auto _ms2,
          auto _ms3,
          auto _ms4,
          auto _ms5,
          auto _ms6,
          auto _ms7,
          auto _ms8,
          auto _ms9,
          auto _ms10,
          auto _ms11)
{
    return guid_t{.ms1 = _ms1,
                  .ms2 = _ms2,
                  .ms3 = _ms3,
                  .ms4 = {_ms4, _ms5, _ms6, _ms7, _ms8, _ms9, _ms10, _ms11}};
}

} // namespace efi