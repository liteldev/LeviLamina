/**
 * @file  HorseContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HorseContainerManagerModel.
 *
 */
class HorseContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSECONTAINERMANAGERMODEL
public:
    class HorseContainerManagerModel& operator=(class HorseContainerManagerModel const &) = delete;
    HorseContainerManagerModel(class HorseContainerManagerModel const &) = delete;
    HorseContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HorseContainerManagerModel();
    /**
     * @hash   549879583
     * @vftbl  6
     * @symbol  ?getItemCopies\@HorseContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   1776813232
     * @vftbl  7
     * @symbol  ?setSlot\@HorseContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   66699257
     * @vftbl  8
     * @symbol  ?getSlot\@HorseContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1750508586
     * @vftbl  17
     * @symbol  ?_postInit\@HorseContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   276874173
     * @symbol  ??0HorseContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HorseContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID const &);

};