

add_library(efi20 STATIC
)

target_sources(efi20
PRIVATE

PUBLIC
    FILE_SET 
        CXX_MODULES
    BASE_DIRS
        ${EFI20_MODULE_DIR}
    FILES
        ${EFI20_MODULE_DIR}/module.ixx

        ${EFI20_MODULE_DIR}/time/module.ixx

        ${EFI20_MODULE_DIR}/runtime/module.ixx

        ${EFI20_MODULE_DIR}/types/module.ixx
        ${EFI20_MODULE_DIR}/types/constants.ixx
        ${EFI20_MODULE_DIR}/types/error.ixx
        ${EFI20_MODULE_DIR}/types/system.ixx
        ${EFI20_MODULE_DIR}/types/network.ixx
        ${EFI20_MODULE_DIR}/types/time.ixx
        ${EFI20_MODULE_DIR}/types/${EFI20_TARGET_ARCH}/primitives.ixx
)

target_include_directories(efi20 
PUBLIC
    ${EFI20_INCLUDE_DIR}/${EFI20_TARGET_ARCH}
)
