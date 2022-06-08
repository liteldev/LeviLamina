// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AddItemActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDITEMACTORPACKET
public:
    class AddItemActorPacket& operator=(class AddItemActorPacket const &) = delete;
    AddItemActorPacket(class AddItemActorPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~AddItemActorPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI AddItemActorPacket(class ItemActor &);
    MCAPI AddItemActorPacket();

protected:

private:

};