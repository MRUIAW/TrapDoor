//
// Created by xhy on 2021/2/3.
//

#ifndef MOD_VANILLABLOCKTYPE_H
#define MOD_VANILLABLOCKTYPE_H

#include <cstdint>
#include <unordered_map>

namespace trapdoor {
    class BlockLegacy;

    class Block;

    enum BlockType : short {
        AIR = 0,
        STONE = 1,
        GRASS = 2,
        DIRT = 3,
        COBBLESTONE = 4,
        PLANKS = 5,
        SAPLING = 6,
        BEDROCK = 7,
        FLOWING_WATER = 8,
        WATER = 9,
        FLOWING_LAVA = 10,
        LAVA = 11,
        SAND = 12,
        GRAVEL = 13,
        GOLD_ORE = 14,
        IRON_ORE = 15,
        COAL_ORE = 16,
        LOG = 17,
        LEAVES = 18,
        SPONGE = 19,
        GLASS = 20,
        LAPIS_ORE = 21,
        LAPIS_BLOCK = 22,
        DISPENSER = 23,
        SANDSTONE = 24,
        NOTEBLOCK = 25,
        BED = 26,
        GOLDEN_RAIL = 27,
        DETECTOR_RAIL = 28,
        STICKY_PISTON = 29,
        WEB = 30,
        TALLGRASS = 31,
        DEADBUSH = 32,
        PISTON = 33,
        PISTONARMCOLLISION = 34,
        WOOL = 35,
        ELEMENT_0 = 36,
        YELLOW_FLOWER = 37,
        RED_FLOWER = 38,
        BROWN_MUSHROOM = 39,
        RED_MUSHROOM = 40,
        GOLD_BLOCK = 41,
        IRON_BLOCK = 42,
        DOUBLE_STONE_SLAB = 43,
        STONE_SLAB = 44,
        BRICK_BLOCK = 45,
        TNT = 46,
        BOOKSHELF = 47,
        MOSSY_COBBLESTONE = 48,
        OBSIDIAN = 49,
        TORCH = 50,
        FIRE = 51,
        MOB_SPAWNER = 52,
        OAK_STAIRS = 53,
        CHEST = 54,
        REDSTONE_WIRE = 55,
        DIAMOND_ORE = 56,
        DIAMOND_BLOCK = 57,
        CRAFTING_TABLE = 58,
        WHEAT = 59,
        FARMLAND = 60,
        FURNACE = 61,
        LIT_FURNACE = 62,
        STANDING_SIGN = 63,
        WOODEN_DOOR = 64,
        LADDER = 65,
        RAIL = 66,
        STONE_STAIRS = 67,
        WALL_SIGN = 68,
        LEVER = 69,
        STONE_PRESSURE_PLATE = 70,
        IRON_DOOR = 71,
        WOODEN_PRESSURE_PLATE = 72,
        REDSTONE_ORE = 73,
        LIT_REDSTONE_ORE = 74,
        UNLIT_REDSTONE_TORCH = 75,
        REDSTONE_TORCH = 76,
        STONE_BUTTON = 77,
        SNOW_LAYER = 78,
        ICE = 79,
        SNOW = 80,
        CACTUS = 81,
        CLAY = 82,
        REEDS = 83,
        JUKEBOX = 84,
        FENCE = 85,
        PUMPKIN = 86,
        NETHERRACK = 87,
        SOUL_SAND = 88,
        GLOWSTONE = 89,
        PORTAL = 90,
        LIT_PUMPKIN = 91,
        CAKE = 92,
        UNPOWERED_REPEATER = 93,
        POWERED_REPEATER = 94,
        INVISIBLEBEDROCK = 95,
        TRAPDOOR = 96,
        MONSTER_EGG = 97,
        STONEBRICK = 98,
        BROWN_MUSHROOM_BLOCK = 99,
        RED_MUSHROOM_BLOCK = 100,
        IRON_BARS = 101,
        GLASS_PANE = 102,
        MELON_BLOCK = 103,
        PUMPKIN_STEM = 104,
        MELON_STEM = 105,
        VINE = 106,
        FENCE_GATE = 107,
        BRICK_STAIRS = 108,
        STONE_BRICK_STAIRS = 109,
        MYCELIUM = 110,
        WATERLILY = 111,
        NETHER_BRICK = 112,
        NETHER_BRICK_FENCE = 113,
        NETHER_BRICK_STAIRS = 114,
        NETHER_WART = 115,
        ENCHANTING_TABLE = 116,
        BREWING_STAND = 117,
        CAULDRON = 118,
        END_PORTAL = 119,
        END_PORTAL_FRAME = 120,
        END_STONE = 121,
        DRAGON_EGG = 122,
        REDSTONE_LAMP = 123,
        LIT_REDSTONE_LAMP = 124,
        DROPPER = 125,
        ACTIVATOR_RAIL = 126,
        COCOA = 127,
        SANDSTONE_STAIRS = 128,
        EMERALD_ORE = 129,
        ENDER_CHEST = 130,
        TRIPWIRE_HOOK = 131,
        TRIPWIRE = 132,
        EMERALD_BLOCK = 133,
        SPRUCE_STAIRS = 134,
        BIRCH_STAIRS = 135,
        JUNGLE_STAIRS = 136,
        COMMAND_BLOCK = 137,
        BEACON = 138,
        COBBLESTONE_WALL = 139,
        FLOWER_POT = 140,
        CARROTS = 141,
        POTATOES = 142,
        WOODEN_BUTTON = 143,
        SKULL = 144,
        ANVIL = 145,
        TRAPPED_CHEST = 146,
        LIGHT_WEIGHTED_PRESSURE_PLATE = 147,
        HEAVY_WEIGHTED_PRESSURE_PLATE = 148,
        UNPOWERED_COMPARATOR = 149,
        POWERED_COMPARATOR = 150,
        DAYLIGHT_DETECTOR = 151,
        REDSTONE_BLOCK = 152,
        QUARTZ_ORE = 153,
        HOPPER = 154,
        QUARTZ_BLOCK = 155,
        QUARTZ_STAIRS = 156,
        DOUBLE_WOODEN_SLAB = 157,
        WOODEN_SLAB = 158,
        STAINED_HARDENED_CLAY = 159,
        STAINED_GLASS_PANE = 160,
        LEAVES2 = 161,
        LOG2 = 162,
        ACACIA_STAIRS = 163,
        DARK_OAK_STAIRS = 164,
        SLIME = 165,
        IRON_TRAPDOOR = 167,
        PRISMARINE = 168,
        SEALANTERN = 169,
        HAY_BLOCK = 170,
        CARPET = 171,
        HARDENED_CLAY = 172,
        COAL_BLOCK = 173,
        PACKED_ICE = 174,
        DOUBLE_PLANT = 175,
        STANDING_BANNER = 176,
        WALL_BANNER = 177,
        DAYLIGHT_DETECTOR_INVERTED = 178,
        RED_SANDSTONE = 179,
        RED_SANDSTONE_STAIRS = 180,
        DOUBLE_STONE_SLAB2 = 181,
        STONE_SLAB2 = 182,
        SPRUCE_FENCE_GATE = 183,
        BIRCH_FENCE_GATE = 184,
        JUNGLE_FENCE_GATE = 185,
        DARK_OAK_FENCE_GATE = 186,
        ACACIA_FENCE_GATE = 187,
        REPEATING_COMMAND_BLOCK = 188,
        CHAIN_COMMAND_BLOCK = 189,
        HARD_GLASS_PANE = 190,
        HARD_STAINED_GLASS_PANE = 191,
        CHEMICAL_HEAT = 192,
        SPRUCE_DOOR = 193,
        BIRCH_DOOR = 194,
        JUNGLE_DOOR = 195,
        ACACIA_DOOR = 196,
        DARK_OAK_DOOR = 197,
        GRASS_PATH = 198,
        FRAME = 199,
        CHORUS_FLOWER = 200,
        PURPUR_BLOCK = 201,
        COLORED_TORCH_RG = 202,
        PURPUR_STAIRS = 203,
        COLORED_TORCH_BP = 204,
        UNDYED_SHULKER_BOX = 205,
        END_BRICKS = 206,
        FROSTED_ICE = 207,
        END_ROD = 208,
        END_GATEWAY = 209,
        ALLOW = 210,
        DENY = 211,
        BORDER_BLOCK = 212,
        MAGMA = 213,
        NETHER_WART_BLOCK = 214,
        RED_NETHER_BRICK = 215,
        BONE_BLOCK = 216,
        STRUCTURE_VOID = 217,
        SHULKER_BOX = 218,
        GLAZEDTERRACOTTA_PURPLE = 219,
        GLAZEDTERRACOTTA_WHITE = 220,
        GLAZEDTERRACOTTA_ORANGE = 221,
        GLAZEDTERRACOTTA_MAGENTA = 222,
        GLAZEDTERRACOTTA_LIGHT_BLUE = 223,
        GLAZEDTERRACOTTA_YELLOW = 224,
        GLAZEDTERRACOTTA_LIME = 225,
        GLAZEDTERRACOTTA_PINK = 226,
        GLAZEDTERRACOTTA_GRAY = 227,
        GLAZEDTERRACOTTA_SILVER = 228,
        GLAZEDTERRACOTTA_CYAN = 229,
        GLAZEDTERRACOTTA_BLUE = 231,
        GLAZEDTERRACOTTA_BROWN = 232,
        GLAZEDTERRACOTTA_GREEN = 233,
        GLAZEDTERRACOTTA_RED = 234,
        GLAZEDTERRACOTTA_BLACK = 235,
        CONCRETE = 236,
        CONCRETEPOWDER = 237,
        CHEMISTRY_TABLE = 238,
        UNDERWATER_TORCH = 239,
        CHORUS_PLANT = 240,
        STAINED_GLASS = 241,
        CAMERA = 242,
        PODZOL = 243,
        BEETROOT = 244,
        STONECUTTER = 245,
        GLOWINGOBSIDIAN = 246,
        NETHERREACTOR = 247,
        INFO_UPDATE = 248,
        INFO_UPDATE2 = 249,
        MOVINGBLOCK = 250,
        OBSERVER = 251,
        STRUCTURE_BLOCK = 252,
        HARD_GLASS = 253,
        HARD_STAINED_GLASS = 254,
        RESERVED6 = 255,
        PRISMARINE_STAIRS = 257,
        DARK_PRISMARINE_STAIRS = 258,
        PRISMARINE_BRICKS_STAIRS = 259,
        STRIPPED_SPRUCE_LOG = 260,
        STRIPPED_BIRCH_LOG = 261,
        STRIPPED_JUNGLE_LOG = 262,
        STRIPPED_ACACIA_LOG = 263,
        STRIPPED_DARK_OAK_LOG = 264,
        STRIPPED_OAK_LOG = 265,
        BLUE_ICE = 266,
        ELEMENT_1 = 267,
        ELEMENT_2 = 268,
        ELEMENT_3 = 269,
        ELEMENT_4 = 270,
        ELEMENT_5 = 271,
        ELEMENT_6 = 272,
        ELEMENT_7 = 273,
        ELEMENT_8 = 274,
        ELEMENT_9 = 275,
        ELEMENT_10 = 276,
        ELEMENT_11 = 277,
        ELEMENT_12 = 278,
        ELEMENT_13 = 279,
        ELEMENT_14 = 280,
        ELEMENT_15 = 281,
        ELEMENT_16 = 282,
        ELEMENT_17 = 283,
        ELEMENT_18 = 284,
        ELEMENT_19 = 285,
        ELEMENT_20 = 286,
        ELEMENT_21 = 287,
        ELEMENT_22 = 288,
        ELEMENT_23 = 289,
        ELEMENT_24 = 290,
        ELEMENT_25 = 291,
        ELEMENT_26 = 292,
        ELEMENT_27 = 293,
        ELEMENT_28 = 294,
        ELEMENT_29 = 295,
        ELEMENT_30 = 296,
        ELEMENT_31 = 297,
        ELEMENT_32 = 298,
        ELEMENT_33 = 299,
        ELEMENT_34 = 300,
        ELEMENT_35 = 301,
        ELEMENT_36 = 302,
        ELEMENT_37 = 303,
        ELEMENT_38 = 304,
        ELEMENT_39 = 305,
        ELEMENT_40 = 306,
        ELEMENT_41 = 307,
        ELEMENT_42 = 308,
        ELEMENT_43 = 309,
        ELEMENT_44 = 310,
        ELEMENT_45 = 311,
        ELEMENT_46 = 312,
        ELEMENT_47 = 313,
        ELEMENT_48 = 314,
        ELEMENT_49 = 315,
        ELEMENT_50 = 316,
        ELEMENT_51 = 317,
        ELEMENT_52 = 318,
        ELEMENT_53 = 319,
        ELEMENT_54 = 320,
        ELEMENT_55 = 321,
        ELEMENT_56 = 322,
        ELEMENT_57 = 323,
        ELEMENT_58 = 324,
        ELEMENT_59 = 325,
        ELEMENT_60 = 326,
        ELEMENT_61 = 327,
        ELEMENT_62 = 328,
        ELEMENT_63 = 329,
        ELEMENT_64 = 330,
        ELEMENT_65 = 331,
        ELEMENT_66 = 332,
        ELEMENT_67 = 333,
        ELEMENT_68 = 334,
        ELEMENT_69 = 335,
        ELEMENT_70 = 336,
        ELEMENT_71 = 337,
        ELEMENT_72 = 338,
        ELEMENT_73 = 339,
        ELEMENT_74 = 340,
        ELEMENT_75 = 341,
        ELEMENT_76 = 342,
        ELEMENT_77 = 343,
        ELEMENT_78 = 344,
        ELEMENT_79 = 345,
        ELEMENT_80 = 346,
        ELEMENT_81 = 347,
        ELEMENT_82 = 348,
        ELEMENT_83 = 349,
        ELEMENT_84 = 350,
        ELEMENT_85 = 351,
        ELEMENT_86 = 352,
        ELEMENT_87 = 353,
        ELEMENT_88 = 354,
        ELEMENT_89 = 355,
        ELEMENT_90 = 356,
        ELEMENT_91 = 357,
        ELEMENT_92 = 358,
        ELEMENT_93 = 359,
        ELEMENT_94 = 360,
        ELEMENT_95 = 361,
        ELEMENT_96 = 362,
        ELEMENT_97 = 363,
        ELEMENT_98 = 364,
        ELEMENT_99 = 365,
        ELEMENT_100 = 366,
        ELEMENT_101 = 367,
        ELEMENT_102 = 368,
        ELEMENT_103 = 369,
        ELEMENT_104 = 370,
        ELEMENT_105 = 371,
        ELEMENT_106 = 372,
        ELEMENT_107 = 373,
        ELEMENT_108 = 374,
        ELEMENT_109 = 375,
        ELEMENT_110 = 376,
        ELEMENT_111 = 377,
        ELEMENT_112 = 378,
        ELEMENT_113 = 379,
        ELEMENT_114 = 380,
        ELEMENT_115 = 381,
        ELEMENT_116 = 382,
        ELEMENT_117 = 383,
        ELEMENT_118 = 384,
        SEAGRASS = 385,
        CORAL = 386,
        CORAL_BLOCK = 387,
        CORAL_FAN = 388,
        CORAL_FAN_DEAD = 389,
        CORAL_FAN_HANG = 390,
        CORAL_FAN_HANG2 = 391,
        CORAL_FAN_HANG3 = 392,
        KELP = 393,
        DRIED_KELP_BLOCK = 394,
        ACACIA_BUTTON = 395,
        BIRCH_BUTTON = 396,
        DARK_OAK_BUTTON = 397,
        JUNGLE_BUTTON = 398,
        SPRUCE_BUTTON = 399,
        ACACIA_TRAPDOOR = 400,
        BIRCH_TRAPDOOR = 401,
        DARK_OAK_TRAPDOOR = 402,
        JUNGLE_TRAPDOOR = 403,
        SPRUCE_TRAPDOOR = 404,
        ACACIA_PRESSURE_PLATE = 405,
        BIRCH_PRESSURE_PLATE = 406,
        DARK_OAK_PRESSURE_PLATE = 407,
        JUNGLE_PRESSURE_PLATE = 408,
        SPRUCE_PRESSURE_PLATE = 409,
        CARVED_PUMPKIN = 410,
        SEA_PICKLE = 411,
        CONDUIT = 412,
        TURTLE_EGG = 414,
        BUBBLE_COLUMN = 415,
        BARRIER = 416,
        STONE_SLAB3 = 417,
        BAMBOO = 418,
        BAMBOO_SAPLING = 419,
        SCAFFOLDING = 420,
        STONE_SLAB4 = 421,
        DOUBLE_STONE_SLAB3 = 422,
        DOUBLE_STONE_SLAB4 = 423,
        GRANITE_STAIRS = 424,
        DIORITE_STAIRS = 425,
        ANDESITE_STAIRS = 426,
        POLISHED_GRANITE_STAIRS = 427,
        POLISHED_DIORITE_STAIRS = 428,
        POLISHED_ANDESITE_STAIRS = 429,
        MOSSY_STONE_BRICK_STAIRS = 430,
        SMOOTH_RED_SANDSTONE_STAIRS = 431,
        SMOOTH_SANDSTONE_STAIRS = 432,
        END_BRICK_STAIRS = 433,
        MOSSY_COBBLESTONE_STAIRS = 434,
        NORMAL_STONE_STAIRS = 435,
        SPRUCE_STANDING_SIGN = 436,
        SPRUCE_WALL_SIGN = 437,
        SMOOTH_STONE = 438,
        RED_NETHER_BRICK_STAIRS = 439,
        SMOOTH_QUARTZ_STAIRS = 440,
        BIRCH_STANDING_SIGN = 441,
        BIRCH_WALL_SIGN = 442,
        JUNGLE_STANDING_SIGN = 443,
        JUNGLE_WALL_SIGN = 444,
        ACACIA_STANDING_SIGN = 445,
        ACACIA_WALL_SIGN = 446,
        DARKOAK_STANDING_SIGN = 447,
        DARKOAK_WALL_SIGN = 448,
        LECTERN = 449,
        GRINDSTONE = 450,
        BLAST_FURNACE = 451,
        STONECUTTER_BLOCK = 452,
        SMOKER = 453,
        LIT_SMOKER = 454,
        CARTOGRAPHY_TABLE = 455,
        FLETCHING_TABLE = 456,
        SMITHING_TABLE = 457,
        BARREL = 458,
        LOOM = 459,
        BELL = 461,
        SWEET_BERRY_BUSH = 462,
        LANTERN = 463,
        CAMPFIRE = 464,
        LAVA_CAULDRON = 465,
        JIGSAW = 466,
        WOOD = 467,
        COMPOSTER = 468,
        LIT_BLAST_FURNACE = 469,
        LIGHT_BLOCK = 470,
        WITHER_ROSE = 471,
        STICKYPISTONARMCOLLISION = 472,
        BEE_NEST = 473,
        BEEHIVE = 474,
        HONEY_BLOCK = 475,
        HONEYCOMB_BLOCK = 476,
        LODESTONE = 477,
        CRIMSON_ROOTS = 478,
        WARPED_ROOTS = 479,
        CRIMSON_STEM = 480,
        WARPED_STEM = 481,
        WARPED_WART_BLOCK = 482,
        CRIMSON_FUNGUS = 483,
        WARPED_FUNGUS = 484,
        SHROOMLIGHT = 485,
        WEEPING_VINES = 486,
        CRIMSON_NYLIUM = 487,
        WARPED_NYLIUM = 488,
        BASALT = 489,
        POLISHED_BASALT = 490,
        SOUL_SOIL = 491,
        SOUL_FIRE = 492,
        NETHER_SPROUTS = 493,
        TARGET = 494,
        STRIPPED_CRIMSON_STEM = 495,
        STRIPPED_WARPED_STEM = 496,
        CRIMSON_PLANKS = 497,
        WARPED_PLANKS = 498,
        CRIMSON_DOOR = 499,
        WARPED_DOOR = 500,
        CRIMSON_TRAPDOOR = 501,
        WARPED_TRAPDOOR = 502,
        CRIMSON_STANDING_SIGN = 505,
        WARPED_STANDING_SIGN = 506,
        CRIMSON_WALL_SIGN = 507,
        WARPED_WALL_SIGN = 508,
        CRIMSON_STAIRS = 509,
        WARPED_STAIRS = 510,
        CRIMSON_FENCE = 511,
        WARPED_FENCE = 512,
        CRIMSON_FENCE_GATE = 513,
        WARPED_FENCE_GATE = 514,
        CRIMSON_BUTTON = 515,
        WARPED_BUTTON = 516,
        CRIMSON_PRESSURE_PLATE = 517,
        WARPED_PRESSURE_PLATE = 518,
        CRIMSON_SLAB = 519,
        WARPED_SLAB = 520,
        CRIMSON_DOUBLE_SLAB = 521,
        WARPED_DOUBLE_SLAB = 522,
        SOUL_TORCH = 523,
        SOUL_LANTERN = 524,
        NETHERITE_BLOCK = 525,
        ANCIENT_DEBRIS = 526,
        RESPAWN_ANCHOR = 527,
        BLACKSTONE = 528,
        POLISHED_BLACKSTONE_BRICKS = 529,
        POLISHED_BLACKSTONE_BRICK_STAIRS = 530,
        BLACKSTONE_STAIRS = 531,
        BLACKSTONE_WALL = 532,
        POLISHED_BLACKSTONE_BRICK_WALL = 533,
        CHISELED_POLISHED_BLACKSTONE = 534,
        CRACKED_POLISHED_BLACKSTONE_BRICKS = 535,
        GILDED_BLACKSTONE = 536,
        BLACKSTONE_SLAB = 537,
        BLACKSTONE_DOUBLE_SLAB = 538,
        POLISHED_BLACKSTONE_BRICK_SLAB = 539,
        POLISHED_BLACKSTONE_BRICK_DOUBLE_SLAB = 540,
        CHAIN = 541,
        TWISTING_VINES = 542,
        NETHER_GOLD_ORE = 543,
        CRYING_OBSIDIAN = 544,
        SOUL_CAMPFIRE = 545,
        POLISHED_BLACKSTONE = 546,
        POLISHED_BLACKSTONE_STAIRS = 547,
        POLISHED_BLACKSTONE_SLAB = 548,
        POLISHED_BLACKSTONE_DOUBLE_SLAB = 549,
        POLISHED_BLACKSTONE_PRESSURE_PLATE = 550,
        POLISHED_BLACKSTONE_BUTTON = 551,
        POLISHED_BLACKSTONE_WALL = 552,
        WARPED_HYPHAE = 553,
        CRIMSON_HYPHAE = 554,
        STRIPPED_CRIMSON_HYPHAE = 555,
        STRIPPED_WARPED_HYPHAE = 556,
        CHISELED_NETHER_BRICKS = 557,
        CRACKED_NETHER_BRICKS = 558,
        QUARTZ_BRICKS = 559,
    };

    trapdoor::Block *getBlockByID(BlockType type, unsigned short variant = 0);

    trapdoor::BlockLegacy *getBlockLegacyByID(BlockType type);

    void initBlockMap();

}  // namespace trapdoor

#endif  // MOD_VANILLABLOCKTYPE_H
