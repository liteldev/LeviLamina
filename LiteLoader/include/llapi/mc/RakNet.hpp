/**
 * @file  RakNet.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class NetworkIdentifier;
#undef BEFORE_EXTRA

/**
 * @brief MC namespace RakNet.
 *
 */
namespace RakNet {

#define AFTER_EXTRA
// Add Member There
    enum class StartupResult;
    class RakNetSocket2;
    struct SplitPacketChannel;
    class BitStream;
    struct Packet;
    class RakNetSocket2;
    class RakPeerInterface;
    class SimpleMutex;
    struct SocketDescriptor;
    struct SplitPacketChannel;

    struct SystemAddress {
        char filler[17 * 8]; // uncertain?
        MCAPI const char* ToString(bool, char) const;
    };
    struct RakNetGUID {
        uint64_t unk;
        short unk8;
    };
    struct AddressOrGUID {
        RakNetGUID guid;
        SystemAddress adr;
    };

    class RakPeer {
    public:
        RakPeer(RakPeer const&) = delete;
        RakPeer(RakPeer&&) = delete;
        SystemAddress getAdr(NetworkIdentifier const& ni) {
            RakNetGUID const& guid = dAccess<RakNetGUID>(&ni, 8);
            return RakPeer::GetSystemAddressFromGuid(guid);
        }
        MCAPI virtual SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;
        MCAPI virtual int GetAveragePing(struct RakNet::AddressOrGUID);
        MCAPI virtual int GetLastPing(struct RakNet::AddressOrGUID) const;
        MCAPI virtual int GetLowestPing(struct RakNet::AddressOrGUID) const;
    };
#undef AFTER_EXTRA
    /**
     * @symbol ?ConnectionAttemptLoop@RakNet@@YAIPEAX@Z
     * @hash   900928421
     */
    MCAPI unsigned int ConnectionAttemptLoop(void *);
    /**
     * @symbol ?GetTime@RakNet@@YA_KXZ
     * @hash   -1517085360
     */
    MCAPI unsigned __int64 GetTime();
    /**
     * @symbol ?GetTimeMS@RakNet@@YAIXZ
     * @hash   1769735547
     */
    MCAPI unsigned int GetTimeMS();
    /**
     * @symbol ?GetTimeUS@RakNet@@YA_KXZ
     * @hash   -155509252
     */
    MCAPI unsigned __int64 GetTimeUS();
    /**
     * @symbol ?NonNumericHostString@RakNet@@YA_NPEBD@Z
     * @hash   -621520919
     */
    MCAPI bool NonNumericHostString(char const *);
    /**
     * @symbol ?ProcessNetworkPacket@RakNet@@YAXUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@_KAEAVBitStream@1@@Z
     * @hash   313386559
     */
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, unsigned __int64, class RakNet::BitStream &);
    /**
     * @symbol ?ProcessOfflineNetworkPacket@RakNet@@YA_NUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@PEA_N_K@Z
     * @hash   317242646
     */
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, unsigned __int64);
    /**
     * @symbol ?SplitPacketChannelComp@RakNet@@YAHAEBGAEBQEAUSplitPacketChannel@1@@Z
     * @hash   -1035448350
     */
    MCAPI int SplitPacketChannelComp(unsigned short const &, struct RakNet::SplitPacketChannel *const &);
    /**
     * @symbol ?UNASSIGNED_RAKNET_GUID@RakNet@@3URakNetGUID@1@B
     * @hash   262909303
     */
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;
    /**
     * @symbol ?UNASSIGNED_SYSTEM_ADDRESS@RakNet@@3USystemAddress@1@B
     * @hash   405832985
     */
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;
    /**
     * @symbol ?UpdateNetworkLoop@RakNet@@YAIPEAX@Z
     * @hash   612618969
     */
    MCAPI unsigned int UpdateNetworkLoop(void *);
    /**
     * @symbol ?UpdateTCPInterfaceLoop@RakNet@@YAIPEAX@Z
     * @hash   1964141523
     */
    MCAPI unsigned int UpdateTCPInterfaceLoop(void *);
    /**
     * @symbol ?_DLMallocDirectMMap@RakNet@@YAPEAX_K@Z
     * @hash   -1044769018
     */
    MCAPI void * _DLMallocDirectMMap(unsigned __int64);
    /**
     * @symbol ?_DLMallocMMap@RakNet@@YAPEAX_K@Z
     * @hash   1629211814
     */
    MCAPI void * _DLMallocMMap(unsigned __int64);
    /**
     * @symbol ?_DLMallocMUnmap@RakNet@@YAHPEAX_K@Z
     * @hash   270763777
     */
    MCAPI int _DLMallocMUnmap(void *, unsigned __int64);
    /**
     * @symbol ?_RakFree@RakNet@@YAXPEAX@Z
     * @hash   856240492
     */
    MCAPI void _RakFree(void *);
    /**
     * @symbol ?_RakFree_Ex@RakNet@@YAXPEAXPEBDI@Z
     * @hash   -113174635
     */
    MCAPI void _RakFree_Ex(void *, char const *, unsigned int);
    /**
     * @symbol ?_RakMalloc@RakNet@@YAPEAX_K@Z
     * @hash   1863966564
     */
    MCAPI void * _RakMalloc(unsigned __int64);
    /**
     * @symbol ?_RakMalloc_Ex@RakNet@@YAPEAX_KPEBDI@Z
     * @hash   1124324973
     */
    MCAPI void * _RakMalloc_Ex(unsigned __int64, char const *, unsigned int);
    /**
     * @symbol ?_RakRealloc@RakNet@@YAPEAXPEAX_K@Z
     * @hash   -1421624508
     */
    MCAPI void * _RakRealloc(void *, unsigned __int64);
    /**
     * @symbol ?_RakRealloc_Ex@RakNet@@YAPEAXPEAX_KPEBDI@Z
     * @hash   1621801461
     */
    MCAPI void * _RakRealloc_Ex(void *, unsigned __int64, char const *, unsigned int);

};