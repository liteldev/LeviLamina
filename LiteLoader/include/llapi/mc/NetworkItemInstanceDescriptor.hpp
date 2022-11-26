/**
 * @file  NetworkItemInstanceDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ItemDescriptorCount.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkItemInstanceDescriptor.
 *
 */
class NetworkItemInstanceDescriptor : public ItemDescriptorCount {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMINSTANCEDESCRIPTOR
public:
    class NetworkItemInstanceDescriptor& operator=(class NetworkItemInstanceDescriptor const &) = delete;
    NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor const &) = delete;
    NetworkItemInstanceDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -640223117
     */
    virtual ~NetworkItemInstanceDescriptor();
    /**
     * @symbol ??0NetworkItemInstanceDescriptor@@QEAA@AEBVItemStackDescriptor@@@Z
     * @hash   -100421700
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemStackDescriptor const &);
    /**
     * @symbol ??0NetworkItemInstanceDescriptor@@QEAA@AEBVItemInstance@@@Z
     * @hash   -778662858
     */
    MCAPI NetworkItemInstanceDescriptor(class ItemInstance const &);
    /**
     * @symbol ??0NetworkItemInstanceDescriptor@@QEAA@$$QEAV0@@Z
     * @hash   -265822237
     */
    MCAPI NetworkItemInstanceDescriptor(class NetworkItemInstanceDescriptor &&);
    /**
     * @symbol ?getItemInstance@NetworkItemInstanceDescriptor@@QEBA?AVItemInstance@@AEBVBlockPalette@@@Z
     * @hash   -1524461119
     */
    MCAPI class ItemInstance getItemInstance(class BlockPalette const &) const;
    /**
     * @symbol ?read@NetworkItemInstanceDescriptor@@QEAAXAEAVReadOnlyBinaryStream@@@Z
     * @hash   -45126802
     */
    MCAPI void read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?write@NetworkItemInstanceDescriptor@@QEBAXAEAVBinaryStream@@@Z
     * @hash   78395538
     */
    MCAPI void write(class BinaryStream &) const;

};