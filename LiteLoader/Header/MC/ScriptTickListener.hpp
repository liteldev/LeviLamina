// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptTickListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTICKLISTENER
public:
    class ScriptTickListener& operator=(class ScriptTickListener const &) = delete;
    ScriptTickListener(class ScriptTickListener const &) = delete;
    ScriptTickListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptTickListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual enum EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual enum EventResult onLevelTick();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTTICKLISTENER
#endif
    MCAPI ScriptTickListener(class Scripting::ScriptEngine &, class ScriptFormPromiseTracker &);

protected:

private:

};