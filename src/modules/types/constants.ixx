
module;

export module efi.types:constants;

import :primitives;

export namespace efi
{

consteval auto
status_width()
{
    return sizeof(unsigned_native) * 8;
}

constexpr auto MAIN_WARN_HIGH_BIT = (unsigned_native)0x00 << (status_width() - 8);
constexpr auto OEM_WARN_HIGH_BIT  = (unsigned_native)0x40 << (status_width() - 8);

constexpr auto MAIN_ERROR_HIGH_BIT = (unsigned_native)0x80 << (status_width() - 8);
constexpr auto OEM_ERROR_HIGH_BIT  = (unsigned_native)0xc0 << (status_width() - 8);

} // namespace efi