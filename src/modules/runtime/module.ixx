
module;

export module efi.runtime;

import efi.time;
import efi.types;

export namespace efi
{

struct runtime_services
{
    table_header hdr;
};

} // namespace efi