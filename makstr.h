#pragma once

#include <string>
#include "defs.h"
#include "room.h"

enum SpeechType
{
    kVerb,
    kPrep,
    kAdj,
    kBuzz,
    kAny
};

void add_buncher(const std::initializer_list<std::string> &strs);
void add_buzz(const std::initializer_list<std::string> &w);
void add_zork(SpeechType st, const std::initializer_list<std::string> &w);
void synonym(const char *n1, const std::initializer_list<std::string> &n2);

void add_inqobj(ObjectP obj);

void add_question(const char *str, const std::initializer_list<QuestionValue> &vector);
void add_demon(HackP x);

PrepP find_prep(const std::string &prep);
VerbP find_verb(const std::string &verb);
ActionP find_action(const std::string &action);
AdjectiveP find_adj(const std::string &adj);
void add_directions(const std::initializer_list<std::tuple<const char*, direction>> &nms);
direction find_dir(const std::string &dir);
void dsynonym(const char *dir, const char *syn);
void dsynonym(const char *dir, const std::initializer_list<const char*> &syns);

// Actions
// Object support flags.
class nrobj {};
class robjs {};
class reach {};
class obj {};
class aobjs {};
class have {};
class equ {};
class no_take {};
class try_ {}; // Added underscore to avoid using "try" keyword
class take {};
class driver {};
class flip {};
typedef std::list<std::any> AL;
class AVSyntax
{
public:
    AVSyntax(const std::string &name, rapplic fn) : _name(name), _fn(fn) {}

    const std::string &verb() const { return _name; }
    rapplic fn() const { return _fn; }

private:
    std::string _name;
    rapplic _fn;
};
typedef std::vector<std::any> AnyV;
typedef std::vector<AnyV> ActionVec;
void oneadd_action(const char *str1, const char *str2, rapplic atm);
void onenradd_action(const char *str1, const char *str2, rapplic atm);
void add_action(const char *nam, const char *str, const ActionVec &decl);
void add_action(const char *nam, const char *str, const AnyV &decl);
void sadd_action(const char *name, rapplic action);
void vsynonym(const char *verb, const char *syn);
void vsynonym(const char *verb, const std::initializer_list<const char *> &syns);