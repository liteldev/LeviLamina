// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StringTag : public Tag {

#define AFTER_EXTRA
// Add Member There
string val;

public:
    LIAPI std::string& value();
    LIAPI StringTag& operator=(std::string const& val);
    LIAPI static std::unique_ptr<StringTag> create(std::string val = "");
    LIAPI bool set(std::string const& val);
    LIAPI std::string get();
    LIAPI operator std::string() const;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRINGTAG
public:
    class StringTag& operator=(class StringTag const &) = delete;
    StringTag(class StringTag const &) = delete;
#endif

public:
    /*0*/ virtual ~StringTag();
    /*2*/ virtual void write(class IDataOutput &) const;
    /*3*/ virtual void load(class IDataInput &);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const &) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRINGTAG
#endif
    MCAPI StringTag(std::string);
    MCAPI StringTag();

protected:

private:

};