
module;

export module efi.types:network;

import :primitives;

export namespace efi
{

struct mac_address
{
    u8 byte[32];
};

struct ipv4_address
{
    u8 byte[4];
};

struct ipv6_address
{
    u8 byte[8];
};

} // namespace efi