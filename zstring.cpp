#include "zstring.h"
const std::string msg_string = "Muddle 105 Version/Please report strange occurances.";
const std::vector<std::string> device_table = { "A", "AI", "D", "DM", "C", "ML", "H", "AI", "L", "AI", "M", "ML", "N", "MC", "P", "ML", "U", "MC", "Z", "ML"};
const std::string flushstr1 = "There appears before you a threatening figure clad all over in heavy\nblack armor.  His legs seem like the massive trunk of the oak tree.\nHis broad shoulders and helmeted head loom high over your own puny\nframe and you realize that his powerful arms could easily crush the\nvery life from your body.  There hangs from his belt a veritable\narsenal of deadly weapons: sword, mace, ball and chain, dagger,\nlance, and trident. He speaks with a commanding voice:\n\n		     \"YOU SHALL NOT PASS \"\n\nAs he grabs you by the neck all grows dim about you.";
const std::string flushstr2 = "Suddenly, a sinister, wraithlike figure appears before you, seeming\nto float in the air.  He glows with an eldritch light.  In a barely\naudible voice he says, \"Begone, defiler!  Your presence upsets the\nvery balance of the System itself!\"  With a sinister chuckle, he\nraises his oaken staff, taps you on the head, and fades into the\ngloom.  In his place appears a tastefully lettered sign reading:\n\n			DUNGEON CLOSED\n\nAt that instant, you disappear, and all your belongings clatter to\nthe ground.\n";
const std::string end_herald_1 = "Suddenly a sinister wraithlike figure, cloaked and hooded, appears\nseeming to float in the air before you.  In a low, almost inaudible\nvoice he says, \"I welcome you to the ranks of the chosen of Zork. You\nhave persisted through many trials and tests, and have overcome them\nall, dispelling the darkness of ignorance and danger.  One such as\nyourself is fit to join even the Implementers!\"  He then raises his\noaken staff, and chuckling, drifts away like a wisp of smoke, his\nlaughter fading in the distance.";
const std::string end_herald_2 = "\nUnfortunately, as the wraith fades, in his place appears a tastefully\nlettered sign reading:\n\n	      \"Soon to be Constructed on this Site\n		  A Complete Modern Zork Endgame\n		    Designed and Built by the\n		  Frobozz Magic Dungeon Company\"\n\n";
const std::string suicidal = "You clearly are a suicidal maniac.  We don't allow psychotics in the\ncave, since they may harm other adventurers.  Your remains will be\ninstalled in the Land of the Living Dead, where your fellow\nadventurers  may gloat over them.";
const std::string no_patch = "What?  You don't trust me?  Why, only last week I patched a running\nITS and it survived for over 30 seconds.  Oh, well.";
const std::string patch = "Now, let me see...\nWell, we weren't quite able to restore your state.  You can't have\neverything.";
const std::string death = "As you take your last breath, you feel relieved of your burdens. The\nfeeling passes as you find yourself before the gates of Hell, where\nthe spirits jeer at you and deny you entry.  Your senses are\ndisturbed.  The objects in the dungeon appear indistinct, bleached of\ncolor, even unreal.";
const std::string life = "From the distance the sound of a lone trumpet is heard.  The room\nbecomes very bright and you feel disembodied.  In a moment, the\nbrightness fades and you find yourself rising as if from a long\nsleep, deep in the woods.  In the distance you can faintly hear a\nsong bird and the sounds of the forest.";
const std::string losstr = "I can't do everything, because I ran out of room.";
const std::string backstr = "He who puts his hand to the plow and looks back is not fit for the\nkingdom of winners.  In any case, \"back\" doesn't work.";
const std::string kitch_desc = "You are in the kitchen of the white house.  A table seems to have\nbeen used recently for the preparation of food.  A passage leads to\nthe west and a dark staircase can be seen leading upward.  To the\neast is a small window which is ";
const std::string lroom_desc1 = "You are in the living room.  There is a door to the east.  To the\nwest is a cyclops-shaped hole in an old wooden door, above which is\nsome strange gothic lettering ";
const std::string lroom_desc2 = "You are in the living room.  There is a door to the east, a wooden\ndoor with strange gothic lettering to the west, which appears to be\nnailed shut, ";
const std::string ltide_desc = "It appears that the dam has been opened since the water level behind\nit is low and the sluice gate has been opened.  Water is rushing\ndownstream through the gates.";
const std::string htide_desc = "The sluice gates on the dam are closed.  Behind the dam, there can be\nseen a wide lake.  A small stream is formed by the runoff from the\nlake.";
const std::string reser_desc = "You are on the reservoir.  Beaches can be seen north and south.\nUpstream a small stream enters the reservoir through a narrow cleft\nin the rocks.  The dam can be seen downstream.";
const std::string dam_desc = "You are standing on the top of the Flood Control Dam #3, which was\nquite a tourist attraction in times far distant.  There are paths to\nthe north, south, east, and down.";
const std::string cella_desc = "You are in a dark and damp cellar with a narrow passageway leading\neast, and a crawlway to the south.  On the west is the bottom of a\nsteep metal ramp which is unclimbable.";
const std::string mirr_desc = "You are in a large square room with tall ceilings.  On the south wall\nis an enormous mirror which fills the entire wall.  There are exits\non the other three sides of the room.";
const std::string trolldesc = "A nasty-looking troll, brandishing a bloody axe, blocks all passages\nout of the room.";
const std::string trollout = "An unconscious troll is sprawled on the floor.  All passages out of\nthe room are open.";
const std::string cyclokill = "The cyclops, tired of all of your games and trickery, eats you.\nThe cyclops says 'Mmm.  Just like mom used to make 'em.'";
const std::string cyclofood = "The cyclops says 'Mmm Mmm.  I love hot peppers!  But oh, could I use\na drink.  Perhaps I could drink the blood of that thing'.  From the\ngleam in his eye, it could be surmised that you are 'that thing'.";
const std::string cyclolook = "A cyclops, who looks prepared to eat horses (much less mere\nadventurers), blocks the staircase.  From his state of health, and\nthe bloodstains on the walls, you gather that he is not very\nfriendly, though he likes people.";
const std::string cycloeye = "The cyclops is standing in the corner, eyeing you closely.  I don't\nthink he likes you very much.  He looks extremely hungry even for a\ncyclops.";
const std::string robber_c_desc = "There is a suspicious-looking individual, holding a bag, leaning\nagainst one wall.  He is armed with a vicious-looking stiletto.";
const std::string robber_u_desc = "There is a suspicious-looking individual lying unconscious on the\nground.  His bag and stiletto seem to have vanished.";
const std::string resdesc = "However, with the water level lowered, there is merely a wide stream\nrunning through the center of the room.";
const std::string gladesc = "This is a large room, with giant icicles hanging from the walls\nand ceiling.  There are passages to the north and east.";
const std::string glacier_win = "The torch hits the glacier and explodes into a great ball of flame,\ndevouring the glacier.  The water from the melting glacier rushes\ndownstream, carrying the torch with it.  In the place of the glacier,\nthere is a passageway leading west.";
const std::vector<std::string> yuks = { "A valiant attempt.", "You can't be serious.", "Not a prayer.", "Not likely.", "An interesting idea...", "What a concept!"};
const std::string rusty_knife_str = "As the knife approaches its victim, your mind is submerged by an\novermastering will.  Slowly, your hand turns, until the rusty blade\nis an inch from your neck.  The knife seems to sing as it savagely\nslits your throat.";
const std::string cursestr = "A ghost appears in the room and is appalled at your having\ndesecrated the remains of a fellow adventurer.  He casts a curse\non all of your valuables and orders them banished to the Land of\nthe Living Dead.  The ghost leaves, muttering obscenities.";
const std::string torch_desc = "This is a large room with a prominent doorway leading to a down\nstaircase. To the west is a narrow twisting tunnel, covered with\na thin layer of dust.  Above you is a large dome painted with scenes\ndepicting elfin hacking rites. Up around the edge of the dome\n(20 feet up) is a wooden railing. In the center of the room there\nis a white marble pedestal.";
const std::string dome_desc = "You are at the periphery of a large dome, which forms the ceiling\nof another room below.  Protecting you from a precipitous drop is a\nwooden railing which circles the dome.";
const std::string hellgate = "You are outside a large gateway, on which is inscribed \n	\"Abandon every hope, all ye who enter here.\"  \nThe gate is open; through it you can see a desolation, with a pile of\nmangled corpses in one corner.  Thousands of voices, lamenting some\nhideous fate, can be heard.";
const std::string exor1 = "The bell suddenly becomes red hot and falls to the ground. The\nwraiths, as if paralyzed, stop their jeering and slowly turn to face\nyou.  On their ashen faces, the expression of a long-forgotten terror\ntakes shape.";
const std::string exor2 = "The flames flicker wildly and appear to dance.  The earth beneath\nyour feet trembles, and your legs nearly buckle beneath you.\nThe spirits cower at your unearthly power.";
const std::string exor3 = "Each word of the prayer reverberates through the hall in a deafening\nconfusion.  As the last word fades, a voice, loud and commanding,\nspeaks: 'Begone, fiends!'.  A heart-stopping scream fills the cavern, \nand the spirits, sensing a greater power, flee through the walls.";
const std::string exor4 = "The tension of this ceremony is broken, and the wraiths, amused but\nshaken at your clumsy attempt, resume their hideous jeering.";
const std::string xorcst2 = "There is a clap of thunder, and a voice echoes through the\ncavern: \"Begone, chomper!\"  Apparently, the voice thinks you\nare an evil spirit, and dismisses you from the realm of the living.";
const std::string lld_desc = "You have entered the Land of the Living Dead, a large desolate room.\nAlthough it is apparently uninhabited, you can hear the sounds of\nthousands of lost souls weeping and moaning.  In the east corner are\nstacked the remains of dozens of previous adventurers who were less\nfortunate than yourself.  To the east is an ornate passage,\napparently recently constructed.  A passage exits to the west.";
const std::string lld_desc1 = "Amid the desolation, you spot what appears to be your head,\nat the end of a long pole.";
const std::string bro1 = "The mailing label on this glossy brochure from MIT Tech reads:\n\n		";
const std::string bro2 = "\n		c/o Local Dungeon Master\n		White House, GUE\n\nFrom the Introduction:\n\nThe brochure describes, for the edification of the prospective\nstudent, the stringent but wide-ranging curriculum of MIT Tech.\nRequired courses are offered in Ambition, Distraction, Uglification\nand Derision.  The Humanities are not slighted in this institution,\nas the student may register for Reeling and Writhing, Mystery\n(Ancient and Modern), Seaography, and Drawling (which includes\nStretching and Fainting in Coils).  Advanced students are expected to\nlearn Laughing and Grief.\n\n				William Barton Flathead, Fovnder\n\n(The brochure continues in this vein for a few hundred more pages.)";
const std::vector<std::string> drownings = { "up to your ankles.", "up to your shin.", "up to your knees.", "up to your hips.", "up to your waist.", "up to your chest.", "up to your neck.", "over your head.", "high in your lungs."};
const std::vector<std::string> cyclomad = { "The cyclops seems somewhat agitated.", "The cyclops appears to be getting more agitated.", "The cyclops is moving about the room, looking for something.", "The cyclops was looking for salt and pepper.  I think he is gathering\ncondiments for his upcoming snack.", "The cyclops is moving toward you in an unfriendly manner.", "You have two choices: 1. Leave  2. Become dinner."};
const std::vector<std::string> hellos = { "Hello.", "Good day.", "Nice weather we've been having lately", "Goodbye."};
const std::vector<std::string> wheeeee = { "Very good.  Now you can go to the second grade.", "Have you tried hopping around the dungeon, too?", "Are you enjoying yourself?", "Wheeeeeeeeee!!!!!", "Do you expect me to applaud?"};
const std::vector<std::string> jumploss = { "You should have looked before you leaped.", "I'm afraid that leap was a bit much for your weak frame.", "In the movies, your life would be passing in front of your eyes.", "Geronimo....."};
const std::vector<std::string> dummy = { "Look around.", "You think it isn't?", "I think you've already done that."};
const std::vector<std::string> offended = { "Such language in a high-class establishment like this!", "You ought to be ashamed of yourself.", "Its not so bad.  You could have been killed already.", "Tough shit, asshole.", "Oh, dear.  Such language from a supposed winning adventurer!"};
const std::vector<std::string> doormungs = { "The door is invulnerable.", "You cannot damage this door.", "The door is still under warranty."};
const std::vector<std::string> ho_hum = { " does not seem to do anything.", " is not notably useful.", " isn't very interesting.", " doesn't appear worthwhile.", " has no effect.", " doesn't do anything."};
const std::vector<std::string> bat_drops = { "MINE1", "MINE2", "MINE3", "MINE4", "MINE5", "MINE6", "MINE7", "TLADD", "BLADD"};
const std::string machine_desc = "This is a large room which seems to be air-conditioned.  In one\ncorner there is a machine (?) which is shaped somewhat like a clothes\ndryer.  On the 'panel' there is a switch which is labelled in a\ndialect of Swahili.  Fortunately, I know this dialect and the label\ntranslates to START.  The switch does not appear to be manipulable by\nany human hand (unless the fingers are about 1/16 by 1/4 inch).  On\nthe front of the machine is a large lid, which is ";
const std::vector<std::string> cdigs = { "You are digging into a pile of bat guano.", "You seem to be getting knee deep in guano.", "You are covered with bat turds, cretin."};
const std::vector<std::string> bdigs = { "You seem to be digging a hole here.", "The hole is getting deeper, but that's about it.", "You are surrounded by a wall of sand on all sides."};
const std::string over_falls_str = "I didn't think you would REALLY try to go over the falls in a\nbarrel. It seems that some 450 feet below, you were met by a number\nof  unfriendly rocks and boulders, causing your immediate demise.  Is\nthis what 'over a barrel' means?";
const std::string over_falls_str1 = "Unfortunately, a rubber raft doesn't provide much protection from\nthe unfriendly sorts of rocks and boulders one meets at the bottom of\nmany waterfalls.  Including this one.";
const std::vector<std::string> swimyuks = { "I don't really see how.", "I think that swimming is best performed in water.", "Perhaps it is your head that is swimming."};
const std::string grue_desc1 = "The grue is a sinister, lurking presence in the dark places of the\nearth.  Its favorite diet is adventurers, but its insatiable\nappetite is tempered by its fear of light.  No grue has ever been\nseen by the light of day, and few have survived its fearsome jaws\nto tell the tale.";
const std::string grue_desc2 = "There is no grue here, but I'm sure there is at least one lurking\nin the darkness nearby.  I wouldn't let my light go out if I were\nyou!";
const std::string brick_boom = "Now you've done it.  It seems that the brick has other properties\nthan weight, namely the ability to blow you to smithereens.";
const std::string hook_desc = "There is a small hook attached to the rock here.";
const std::string greek_to_me = "This book is written in a tongue with which I am unfamiliar.";
const std::string gnome_desc = "A volcano gnome seems to walk straight out of the wall and says\n'I have a very busy appointment schedule and little time to waste on\ntresspassers, but for a small fee, I'll show you the way out.'  You\nnotice the gnome nervously glancing at his watch.";
const std::string headstr1 = "Although the implementers are dead, they foresaw that some cretin\nwould tamper with their remains.  Therefore, they took steps to\npunish such actions.";
const std::string headstr = "Unfortunately, we've run out of poles.  Therefore, in punishment for\nyour most grievous sin, we shall deprive you of all your valuables,\nand of your life.";
const std::string cagestr = "As you reach for the sphere, a steel cage falls from the ceiling\nto entrap you.  To make matters worse, poisonous gas starts coming\ninto the room.";
const std::string robotdie = "The robot is injured (being of shoddy construction) and falls to the\nfloor in a pile of garbage, which disintegrates before your eyes.";
const std::string vapors = "Just before you pass out, you notice that the vapors from the\nflask's contents are fatal.";
const std::string crushed = "The room seems to have become too small to hold you.  It seems that\nthe  walls are not as compressible as your body, which is somewhat\ndemolished.";
const std::string icemung = "The door to the room seems to be blocked by sticky orange rubble\nfrom an explosion.  Probably some careless adventurer was playing\nwith blasting cakes.";
const std::string iceblast = "You have been blasted to smithereens (wherever they are).";
const std::string cmach_desc = "This is a large room full of assorted heavy machinery.  The room\nsmells of burned resistors. The room is noisy from the whirring\nsounds of the machines. Along one wall of the room are three buttons\nwhich are, respectively, round, triangular, and square.  Naturally,\nabove these buttons are instructions written in EBCDIC.  A large sign\nin English above all the buttons says\n		'DANGER -- HIGH VOLTAGE '.\nThere are exits to the west and the south.";
const std::string spindizzy = "According to Prof. TAA of MIT Tech, the rapidly changing magnetic\nfields in the room are so intense as to cause you to be electrocuted. \nI really don't know, but in any event, something just killed you.";
const std::string spinrobot = "According to Prof. TAA of MIT Tech, the rapidly changing magnetic\nfields in the room are so intense as to fry all the delicate innards\nof the robot.  I really don't know, but in any event, smoke is coming\nout of its ears and it has stopped moving.";
const std::string robot_crush = "As the robot reaches for the sphere, a steel cage falls from the\nceiling.  The robot attempts to fend it off, but is trapped below it.\nAlas, the robot short-circuits in his vain attempt to escape, and\ncrushes the sphere beneath him as he falls to the floor.";
const std::string poison = "Time passes...and you die from some obscure poisoning.";
const std::string alarm_voice = "A metallic voice says 'Hello, Intruder!  Your unauthorized presence\nin the vault area of the Bank of Zork has set off all sorts of nasty\nsurprises, several of which seem to have been fatal.  This message\nbrought to you by the Frobozz Magic Alarm Company.";
const std::string teller_desc = "You are in a small square room, which was used by a bank officer\nwhose job it was to retrieve safety deposit boxes for the customer.\nOn the north side of the room is a sign which reads  'Viewing Room'.\nOn the ";
const std::string zgnome_desc = "An epicene gnome of Zurich wearing a three-piece suit and carrying a\nsafety-deposit box materializes in the room.  'You seem to have\nforgotten to deposit your valuables,' he says, tapping the lid of the\nbox impatiently.  'We don't usually allow customers to use the boxes\nhere, but we can make this ONE exception, I suppose...'  He looks\naskance at you over his wire-rimmed bifocals.";
const std::string zgnome_pop = "'I wouldn't put THAT in a safety deposit box,' remarks the gnome with\ndisdain, tossing it over his shoulder, where it disappears with an\nunderstated 'pop'.";
const std::string zgnome_pop_1 = "'Surely you jest,' he says.  He tosses the brick over his shoulder,\nand disappears with an understated 'pop'.";
const std::string zgnome_bye = "The gnome looks impatient:  'I may have another customer waiting;\nyou'll just have to fend for yourself, I'm afraid.  He disappears,\nleaving you alone in the bare room.";
const std::string tree_desc = "You are about 10 feet above the ground nestled among some large\nbranches.  The nearest branch above you is above your reach.";
const std::string opera = "The canary chirps, slightly off-key, an aria from a forgotten opera.\nFrom out of the greenery flies a lovely songbird.  It perches on a\nlimb just over your head and opens its beak to sing.  As it does so\na beautiful brass bauble drops from its mouth, bounces off the top of\nyour head, and lands glimmering in the grass.  As the canary winds\ndown, the songbird flies away.";
const std::string complex_desc = "....\nThe architecture of this region is getting complex, so that further\ndescriptions will be diagrams of the immediate vicinity in a 3x3\ngrid. The walls here are rock, but of two different types - sandstone\nand marble. The following notations will be used:\n			..  = current position (middle of grid)\n		        MM  = marble wall\n		        SS  = sandstone wall\n		        ??  = unknown (blocked by walls)";
const std::string gigo = "The item vanishes into the slot.  A moment later, a previously \nunseen sign flashes 'Garbage In, Garbage Out' and spews\nthe ";
const std::string confiscate = "The card slides easily into the slot and vanishes and the metal door\nslides open revealing a passageway to the west.  A moment later, a\npreviously unseen sign flashes: \n     'Unauthorized/Illegal Use of Pass Card -- Card Confiscated'";
const std::string pal_room = "This is a small and rather dreary room, which is eerily illuminated\nby a red glow emanating from a crack in one of the walls.  The light \nappears to focus on a dusty wooden table in the center of the room.";
const std::string pal_door = " side of the room is a massive wooden door, near\nthe top of which, in the center, is a window barred with iron.\nA formidable bolt lock is set within the door frame.  A keyhole";
const std::string slide_desc = "This is a small chamber, which appears to have been part of a\ncoal mine. On the south wall of the chamber the letters \"Granite\nWall\" are etched in the rock. To the east is a long passage and\nthere is a steep metal slide twisting downward. To the north is\na small opening.";
const std::string slippery = "As you descend, you realize that the rope is slippery from the grime\nof the coal chute and that your grasp will not last long.";
const std::string tomb_desc1 = "This is the Tomb of the Unknown Implementer.\nA hollow voice says:  \"That's not a bug, it's a feature!\"\nIn the north wall of the room is the Crypt of the Implementers.  It\nis made of the finest marble, and apparently large enough for four\nheadless corpses.  The crypt is ";
const std::string tomb_desc2 = " Above the entrance is the\ncryptic inscription:\n\n		     \"Feel Free.\"\n";
const std::string crypt_desc = "Though large and esthetically pleasing the marble crypt is empty; the\nsarcophagi, bodies, and rich treasure to be expected in a tomb of\nthis magnificence are missing. Inscribed on one wall is the motto of\nthe implementers, \"Feel Free\".  There is a door leading out of the\ncrypt to the south.  The door is ";
const std::string pass_word_inst = "Suddenly, as you wait in the dark, you begin to feel somewhat\ndisoriented.  The feeling passes, but something seems different.\nAs you regain your composure, the cloaked figure appears before you,\nand says, \"You are now ready to face the ultimate challenge of\nZork.  Should you wish to do this somewhat more quickly in the\nfuture, you will be given a magic phrase which will at any time\ntransport you by magic to this point.  To select the phrase, say\n	INCANT \"<word>\"\nand you will be told your own magic phrase to use by saying\n	INCANT \"... <phrase> ...\"\nGood luck, and choose wisely!\"\n";
const std::string miropen = "The mirror is mounted on a panel which has been opened outward.";
const std::string panopen = "The panel has been opened outward.";
const std::string hallway = "This is a part of the long hallway.  The east and west walls are\ndressed stone.  In the center of the hall is a shallow stone channel.\nIn the center of the room the channel widens into a large hole around\nwhich is engraved a compass rose.";
const std::string guardkill = "The Guardians awake, and in perfect unison, utterly destroy you with\ntheir stone bludgeons.  Satisfied, they resume their posts.";
const std::string guardkill1 = "Suddenly the Guardians realize someone is trying to sneak by them in\nthe structure.  They awake, and in perfect unison, hammer the box and\nits contents (including you) to pulp.  They then resume their posts,\nsatisfied.";
const std::string guard_attack = "Attacking the Guardians is about as useful as attacking a stone wall.\nUnfortunately for you, your futile blow attracts their attention, and\nthey manage to dispatch you effortlessly.";
const std::string mirbreak = "The mirror breaks, revealing a wooden panel behind it.";
const std::string mirbroke = "The mirror has already been broken.";
const std::string panelbreak = "To break the panel you would have to break the mirror first.";
const std::string panelbroke = "The panel is not that easily destroyed.";
const std::string guardstr = ", identical stone statues face each other from\npedestals on opposite sides of the corridor.  The statues represent\nGuardians of Zork, a military order of ancient lineage.  They are\nportrayed as heavily armored warriors standing at ease, hands clasped\naround formidable bludgeons.";
const std::string inside_mirror_1 = "You are inside a rectangular box of wood whose structure is rather\ncomplicated.  Four sides and the roof are filled in, and the floor is\nopen.\n     As you face the side opposite the entrance, two short sides of\ncarved and polished wood are to your left and right.  The left panel\nis mahogany, the right pine.  The wall you face is red on its left\nhalf and black on its right.  On the entrance side, the wall is white\nopposite the red part of the wall it faces, and yellow opposite the\nblack section.  The painted walls are at least twice the length of\nthe unpainted ones.  The ceiling is painted blue.\n     In the floor is a stone channel about six inches wide and a foot\ndeep.  The channel is oriented in a north-south direction.  In the\nexact center of the room the channel widens into a circular\ndepression perhaps two feet wide.  Incised in the stone around this\narea is a compass rose.\n     Running from one short wall to the other at about waist height\nis a wooden bar, carefully carved and drilled.  This bar is pierced\nin two places.  The first hole is in the center of the bar (and thus\nthe center of the room).  The second is at the left end of the room\n(as you face opposite the entrance).  Through each hole runs a wooden\npole.\n     The pole at the left end of the bar is short, extending about a foot\nabove the bar, and ends in a hand grip.  The pole ";
const std::string mirror_pole_desc = "     The long pole at the center of the bar extends from the ceiling\nthrough the bar to the circular area in the stone channel.  This\nbottom end of the pole has a T-bar a bit less than two feet long\nattached to it, and on the T-bar is carved an arrow.  The arrow and\nT-bar are pointing ";
const std::vector<std::string> longdirs = { "north", "northeast", "east", "southeast", "south", "southwest", "west", "northwest"};
const std::vector<std::string> nums = { "one", "two", "three", "four", "five", "six", "seven", "eight"};
const std::string master_attack = "The dungeon master is taken momentarily by surprise.  He dodges your\nblow, and then, with a disappointed expression on his face, he raises\nhis staff, and traces a complicated pattern in the air.  As it\ncompletes you crumble into dust.";
const std::string inq_lose = "\" The dungeon master,\nobviously disappointed in your lack of knowledge, shakes his head and\nmumbles \"I guess they'll let anyone in the Dungeon these days\".  With\nthat, he departs.";
const std::string quiz_win = "The dungeon master, obviously pleased, says \"You are indeed a\nmaster of lore. I am proud to be at your service.\"  The massive\nwooden door swings open, and the master motions for you to enter.";
const std::string quiz_rules = "The knock reverberates along the hall.  For a time it seems there\nwill be no answer.  Then you hear someone unlatching the small wooden\npanel.  Through the bars of the great door, the wrinkled face of an\nold man appears.  He gazes down at you and intones as follows:\n\n     \"I am the Master of the Dungeon, whose task it is to insure\nthat none but the most scholarly and masterful adventurers are\nadmitted into the secret realms of the Dungeon.  To ascertain whether\nyou meet the stringent requirements laid down by the Great\nImplementers, I will ask three questions which should be easy for one\nof your reputed excellence to answer.  You have undoubtedly\ndiscovered their answers during your travels through the Dungeon. \nShould you answer each of these questions correctly within five\nattempts, then I am obliged to acknowledge your skill and daring and\nadmit you to these regions.\n     \"All answers should be in the form 'ANSWER \"<answer>\"'\"";
const std::string ewc_desc = "This is a large east-west corridor which opens onto a northern\nparapet at its center.  You can see flames and smoke as you peer\ntowards the parapet.  The corridor turns south at its east and west\nends, and due south is a massive wooden door.  In the door is a small\nwindow barred with iron.  The door is ";
const std::string parapet_desc = "You are standing behind a stone retaining wall which rims a large\nparapet overlooking a fiery pit.  It is difficult to see through the\nsmoke and flame which fills the pit, but it seems to be more or less\nbottomless.  It also extends upward out of sight.  The pit itself is\nof roughly dressed stone and circular in shape.  It is about two\nhundred feet in diameter.  The flames generate considerable heat, so\nit is rather uncomfortable standing here.\nThere is an object here which looks like a sundial.  On it are an\nindicator arrow and (in the center) a large button.  On the face of\nthe dial are numbers 'one' through 'eight'.  The indicator points to\nthe number '";
const std::string win_totally = "     As you gleefully examine your new-found riches, the Dungeon\nMaster himself materializes beside you, and says, \"Now that you have\nsolved all the mysteries of the Dungeon, it is time for you to assume\nyour rightly-earned place in the scheme of things.  Long have I\nwaited for one capable of releasing me from my burden!\"  He taps you\nlightly on the head with his staff, mumbling a few well-chosen spells,\nand you feel yourself changing, growing older and more stooped.  For\na moment there are two identical mages staring at each other among\nthe treasure, then you watch as your counterpart dissolves into a\nmist and disappears, a sardonic grin on his face.\n";
const std::string deadend = "Dead End";
const std::string sdeadend = "You have come to a dead end in the maze.";
const std::string stfore = "This is a forest, with trees in all directions around you.";
const std::string forest = "Forest";
const std::string fordes = "This is a dimly lit forest, with large trees all around.  To the\neast, there appears to be sunlight.";
const std::string fortree = "This is a dimly lit forest, with large trees all around.  One\nparticularly large tree with some low branches stands here.";
const std::string tchomp = "The troll fends you off with a menacing gesture.";
const std::string mazedesc = "This is part of a maze of twisty little passages, all alike.";
const std::string smazedesc = "Maze";
const std::string nofit = "You cannot fit through this passage with that load.";
const std::string mindesc = "This is a non-descript part of a coal mine.";
const std::string smindesc = "Coal mine";
const std::string riverdesc = "Frigid River";
const std::string narrow = "The path is too narrow.";
const std::string view_room = "This is a room used by holders of safety deposit boxes to view\ntheir contents.  On the north side of the room is a sign which says \n	\n   REMAIN HERE WHILE THE BANK OFFICER RETRIEVES YOUR DEPOSIT BOX\n    WHEN YOU ARE FINISHED, LEAVE THE BOX, AND EXIT TO THE SOUTH  \n     AN ADVANCED PROTECTIVE DEVICE PREVENTS ALL CUSTOMERS FROM\n      REMOVING ANY SAFETY DEPOSIT BOX FROM THIS VIEWING AREA!\n               Thank You for banking at the Zork!\n";
const std::string bkalarm = "An alarm rings briefly and an invisible force prevents your leaving.";
const std::string timber_untied = "There is a wooden timber on the ground here.";
const std::string timber_tied = "The coil of rope is tied to the wooden timber.";
const std::string coffin_untied = "The solid-gold coffin used for the burial of Ramses II is here.";
const std::string coffin_tied = "The coil of rope is tied to Ramses II's gold coffin.";