// COMPLETELY UPDATED FOR 50 Char

#include "stdafx.h"
#include "strings.h"

#define D "%D%"
#define W "%W%"

const tofmsgs &cyclops_melee()
{
    static const tofmsgs cm =
    {
        {   "The Cyclops misses, but the backwash almost knocks\nyou over.",
            "The Cyclops rushes you, but runs into the wall.",
            "The Cyclops trips over his feet trying to get at\nyou.",
            "The Cyclops unleashes a roundhouse punch, but you\nhave time to dodge."
        },
        {
            "The Cyclops knocks you unconscious.",
            "The Cyclops sends you crashing to the floor,\nunconscious."
        },
        {
            "The Cyclops raises his arms and crushes your\nskull.",
            "The Cyclops has just essentially ripped you to\nshreds.",
            "The Cyclops decks you.  In fact, you are dead.",
            "The Cyclops breaks your neck with a massive smash.",
        },
        {
            "A quick punch, but it was only a glancing blow.",
            "The Cyclops grabs but you twist free, leaving part\nof your cloak.",
            "A glancing blow from the Cyclops' fist.",
            "The Cyclops chops at you with the side of his\nhand, and it connects, but not solidly."
        },
        {
            "The Cyclops gets a good grip and breaks your arm.",
            "The monster smashes his huge fist into your chest,\nbreaking several\nribs.",
            "The Cyclops almost knocks the wind out of you with\na quick punch.",
            "A flying drop kick breaks your jaw.",
            "The Cyclops breaks your leg with a staggering\nblow."
        },
        {
            "The Cyclops knocks you silly, and you reel back.",
            "The Cyclops lands a punch that knocks the wind out\nof you.",
            "Heedless of your weapons, the Cyclops tosses you\nagainst the rock wall of the room.",
            "The Cyclops grabs you, and almost strangles you\nbefore you wiggle free, breathless."
        },
        {
            "The Cyclops grabs you by the arm, and you drop\nyour " W ".",
            "The Cyclops kicks your " W " out of your hand.",
            "The Cyclops grabs your " W ", tastes it, and\nthrows it to the ground in disgust.",
            "The monster grabs you on the wrist, squeezes, and\nyou drop your " W " in pain."
        },
        {
            "The Cyclops is so excited by his success that he\nneglects to kill you.",
            "The Cyclops, momentarily overcome by remorse,\nholds back.",
            "The Cyclops seems unable to decide whether to\nbroil or stew his dinner."
        },
        {
            "The Cyclops, no sportsman, dispatches his\nunconscious victim."
        }
    };
    return cm;
};
const tofmsgs &knife_melee()
{
    static const tofmsgs km =
    {
        {
            "Your stab misses the " D " by an inch.",
            "A good slash, but it misses the " D " by a mile.",
            "You charge, but the " D " jumps nimbly aside.",
            "A quick stroke, but the " D " is on guard.",
            "A good stroke, but it's too slow, the " D "\ndodges."
        },
        {
            "The haft of your knife knocks out the " D ".",
            "The " D " drops to the floor, unconscious.",
            "The " D " is knocked out!",
        },
        {
            "The end for the " D " as your knife severs\nhis jugular.",
            "The fatal thrust strikes the " D " square\nin the heart:  He dies.",
            "The " D " takes a final blow and slumps\nto the floor dead."
        },
        {
            "The " D " is slashed on the arm, blood\nbegins to trickle down.",
            "Your knife point pinks the " D " on the\nwrist, but it's not serious.",
            "Your stroke lands, but it was only the flat of the\nblade.",
            "The blow lands, making a shallow gash in the\n" D "'s arm!"
        },
        {
            "The " D " receives a deep gash in his side.",
            "A savage cut on the leg stuns the " D ",\nbut he can still fight!",
            "Slash!  Your stroke connects!  The " D "\ncould be in serious trouble!"
        },
        {
            "The " D " drops to his knees, staggered.",
            "The " D " is confused and can't fight back.",
            "The quickness of your thrust knocks the\n" D " back, stunned."
        },
        {
            "The " D " is disarmed by a subtle feint\npast his guard."
        }
    };
    return km;
}

const tofmsgs &sword_melee()
{
    static const tofmsgs sm =
    {
        {
            "Your swing misses the " D " by an inch.",
            "A mighty blow, but it misses the " D " by\na mile.",
            "You charge, but the " D " jumps nimbly aside.",
            "Clang! Crash! The " D " parries.",
            "A good stroke, but it's too slow, the " D "\ndodges."
        },
        {
            "Your sword crashes down, knocking the\n" D " into dreamland.",
            "The " D " is battered into unconsciousness.",
            "A furious exchange, and the " D " is\nknocked out!"
        },
        {
            "It's curtains for the " D " as your sword\nremoves his head.",
            "The fatal blow strikes the " D " square\nin the heart:  He dies.",
            "The " D " takes a final blow and slumps\nto the floor dead."
        },
        {
            "The " D " is struck on the arm, blood\nbegins to trickle down.",
            "Your sword pinks the " D " on the wrist,\nbut it's not serious.",
            "Your stroke lands, but it was only the flat of the\nblade.",
            "The blow lands, making a shallow gash in the\n" D "'s arm!"
        },
        {
            "The " D " receives a deep gash in his side.",
            "A savage blow on the thigh!  The " D " is\nstunned but can still fight!",
            "Slash!  Your blow lands!  That one hit an artery,\nit could be serious!"
        },
        {
            "The " D " is staggered, and drops to his\nknees.",
            "The " D " is momentarily disoriented and\ncan't fight back.",
            "The force of your blow knocks the " D "\nback, stunned."
        },
        {
            "The " D "'s weapon is knocked to the floor,\nleaving him unarmed."
        }
    };
    return sm;
}

const tofmsgs &thief_melee()
{
    static const tofmsgs tm =
    {
        {
            "The thief stabs nonchalantly with his stiletto\nand misses.",
            "You dodge as the thief comes in low.",
            "You parry a lightning thrust, and the thief\nsalutes you with a grim nod.",
            "The thief tries to sneak past your guard, but you\ntwist away."
        },
        {
            "Shifting in the midst of a thrust, the thief knocks\nyou unconscious with the haft of his stiletto.",
            "The thief knocks you out.",
        },
        {
            "Finishing you off, a lightning throw right to the\nheart.",
            "The stiletto severs your jugular.  It looks like\nthe end.",
            "The thief comes in from the side, feints, and\ninserts the blade into your ribs.",
            "The thief bows formally, raises his stiletto, and\nwith a wry grin, ends the battle and your life."
        },
        {
            "A quick thrust pinks your left arm, and blood\nstarts to trickle down.",
            "The thief draws blood, raking his stiletto across\nyour arm.",
            "The stiletto flashes faster than you can follow,\nand blood wells from your leg.",
            "The thief slowly approaches, strikes like a snake,\nand leaves you wounded."
        },
        {
            "The thief strikes like a snake!  The resulting\nwound is serious.",
            "The thief stabs a deep cut in your upper arm.",
            "The stiletto touches your forehead, and the blood\nobscures your vision.",
            "The thief strikes at your wrist, and suddenly your\ngrip is slippery with blood."
        },
        {
            "The butt of his stiletto cracks you on the skull,\nand you stagger back.",
            "You are forced back, and trip over your own feet,\nfalling heavily to the floor.",
            "The thief rams the haft of his blade into your\nstomach, leaving you out of breath.",
            "The thief attacks, and you fall back desperately."
        },
        {
            "A long, theatrical slash.  You catch it on your\n" W ", but the thief twists his knife, and\nthe " W " goes flying.",
            "The thief neatly flips your " W " out of your\nhands, and it drops to the floor.",
            "You parry a low thrust, and your " W " slips\nout of your hand.",
            "Avoiding the thief's stiletto, you stumble to the\nfloor, dropping your " W "."
        },
        {
            "The thief, a man of good breeding, refrains from\nattacking a helpless opponent.",
            "The thief amuses himself by searching your\npockets.",
            "The thief entertains himself by rifling your pack.",
        },
        {
            "The thief, noticing you begin to stir, reluctantly\nfinishes you off.",
            "The thief, forgetting his essentially genteel\nupbringing, cuts your throat.",
            "The thief, who is essentially a pragmatist,\ndispatches you as a threat to his livelihood."
        }
    };
    return tm;
}

const tofmsgs &troll_melee()
{
    static const tofmsgs tm =
    {
        {
            "The troll swings his axe, but it misses.",
            "The troll's axe barely misses your ear.",
            "The axe sweeps past as you jump aside.",
            "The axe crashes against the rock, throwing sparks!"
        },
        {
            "The flat of the troll's axe hits you delicately\non the head, knocking you out."
        },
        {
            "The troll lands a killing blow.  You are dead.",
            "The troll neatly removes your head.",
            "The troll's axe stroke cleaves you from the nave to the chops.",
            "The troll's axe removes your head."
        },
        {
            "The axe gets you right in the side.  Ouch!",
            "The flat of the troll's axe skins across your\nforearm.",
            "The troll's swing almost knocks you over as you\nbarely parry in time.",
            "The troll swings his axe, and it nicks your arm\nas you dodge."
        },
        {
            "The troll charges, and his axe slashes you on your\n" W " arm.",
            "An axe stroke makes a deep wound in your leg.",
            "The troll's axe swings down, gashing your\nshoulder.",
            "The troll sees a hole in your defense, and a\nlightning stroke opens a wound in your left side."
        },
        {
            "The troll hits you with a glancing blow, and you\nare momentarily stunned.",
            "The troll swings; the blade turns on your armor\nbut crashes broadside into your head.",
            "You stagger back under a hail of axe strokes.",
            "The troll's mighty blow drops you to your knees."
        },
        {
            "The axe hits your " W " and knocks it spinning.",
            "The troll swings, you parry, but the force of his\nblow disarms you.",
            "The axe knocks your " W " out of your hand.  It\nfalls to the floor.",
            "Your " W " is knocked out of your hands, but you\nparried the blow."
        },
        {
            "The troll strikes at your unconscious form, but\nmisses in his rage.",
            "The troll hesitates, fingering his axe.",
            "The troll scratches his head ruminatively:  Might\nyou be magically protected, he wonders? ",
            "The troll seems afraid to approach your crumpled\nform."
        },
        {
            "Conquering his fears, the troll puts you to death."
        }
    };
    return tm;
}
