/*********************************************************************************
 *
 * This file is part of eSRO.
 *
 * eSRO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * eSRO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright ⓒ 2013  Rafael Dominguez (npcdoom)
 *
 *********************************************************************************/

#ifndef __SRLF_ITEM_TYPES_HPP__
#define __SRLF_ITEM_TYPES_HPP__

enum ITEM_TYPE
{
	/**
	 *  CH = Chinese
	 *  EU = European
	 *
	 *  HA = Head Armor
	 *  SA = Shoulder Armor
	 *  BA = Breast Armor
	 *  LA = Leg Armor
	 *  AA = Hand Armor
	 *  FA = Foot Armor
	 *
	 *  TSWORD = Two Handed Sword
	 *  TBLADE = Two Handed Blade
	 *  TSTAFF = Two Handed Staff
	 *  DARKSTAFF = Warlock Rod
	 *
	 **/

    ITEM_NOT_REGISTERED,
	ITEM_CH_SWORD = 2,
	ITEM_CH_BLADE,
	ITEM_CH_SPEAR,
	ITEM_CH_TBLADE,
	ITEM_CH_BOW,
	ITEM_EU_SWORD,
	ITEM_EU_TSWORD,
	ITEM_EU_AXE,
	ITEM_EU_DARKSTAFF,
	ITEM_EU_TSTAFF,
	ITEM_EU_CROSSBOW,
	ITEM_EU_DAGGER,
	ITEM_EU_HARP,
	ITEM_EU_STAFF,
	ITEM_FORTRESS_WEAPON,
	ITEM_CH_SHIELD,
	ITEM_EU_SHIELD,
	ITEM_CH_HEAVY_HA,
	ITEM_CH_HEAVY_SA,
	ITEM_CH_HEAVY_BA,
	ITEM_CH_HEAVY_LA,
	ITEM_CH_HEAVY_AA,
	ITEM_CH_HEAVY_FA,
	ITEM_CH_LIGHT_HA,
	ITEM_CH_LIGHT_SA,
	ITEM_CH_LIGHT_BA,
	ITEM_CH_LIGHT_LA,
	ITEM_CH_LIGHT_AA,
	ITEM_CH_LIGHT_FA,
	ITEM_CH_CLOTHES_HA,
	ITEM_CH_CLOTHES_SA,
	ITEM_CH_CLOTHES_BA,
	ITEM_CH_CLOTHES_LA,
	ITEM_CH_CLOTHES_AA,
	ITEM_CH_CLOTHES_FA,
	ITEM_EU_HEAVY_HA,
	ITEM_EU_HEAVY_SA,
	ITEM_EU_HEAVY_BA,
	ITEM_EU_HEAVY_LA,
	ITEM_EU_HEAVY_AA,
	ITEM_EU_HEAVY_FA,
	ITEM_EU_LIGHT_HA,
	ITEM_EU_LIGHT_SA,
	ITEM_EU_LIGHT_BA,
	ITEM_EU_LIGHT_LA,
	ITEM_EU_LIGHT_AA,
	ITEM_EU_LIGHT_FA,
	ITEM_EU_CLOTHES_HA,
	ITEM_EU_CLOTHES_SA,
	ITEM_EU_CLOTHES_BA,
	ITEM_EU_CLOTHES_LA,
	ITEM_EU_CLOTHES_AA,
	ITEM_EU_CLOTHES_FA,
	ITEM_CH_RING,
	ITEM_CH_EARRING,
	ITEM_CH_NECKLACE,
	ITEM_EU_RING,
	ITEM_EU_EARRING,
	ITEM_EU_NECKLACE,
	ITEM_AVATAR_ATTACH,
	ITEM_AVATAR_FLAG,
	ITEM_AVATAR_NASRUN,
	ITEM_AVATAR_ARMOR,
	ITEM_AVATAR_HAT,
	ITEM_GOLD,
	ITEM_HP_POT,
	ITEM_MP_POT,
	ITEM_ALL_POT,
	ITEM_COS_HP_POT,
	ITEM_COS_REVIVAL,
	ITEM_BERSEK_SCROLL,
	ITEM_HGP_POT,
	ITEM_FORT_REPAIR_KIT,
	ITEM_SD_TOKEN,
	ITEM_FIREWORKS,
	ITEM_FORTRESS_SHOCK_BOMB,
	ITEM_CAMP_FIRE,
	ITEM_ETC_SCROLL,
	ITEM_PURIFICATION_PILL,
	ITEM_CURE_ALL,
	ITEM_COS_CURE_ALL,
	ITEM_RETURN_SCROLL,
	ITEM_COS_SCROLL,
	ITEM_REVERSE_RETURN_SCROLL,
	ITEM_GLOBAL_CHAT,
	ITEM_STALL_AVATAR_SCROLL,
	ITEM_FORTRESS_MOB_SCROLL,
	ITEM_FORTRESS_GUARD_SCROLL,
	ITEM_FORTRESS_STRUCT_SCROLL,
	ITEM_FORTRESS_FLAG_SCROLL,
	ITEM_FORTRESS_SCROLL,
	ITEM_SP_EXP_SCROLL,
	ITEM_TRADE_ITEM,
	ITEM_TRADE_SPECIAL,
	ITEM_JOB_TRADER,
	ITEM_JOB_THIEF,
	ITEM_JOB_HUNTER,
	ITEM_PVP_CAPE,
	ITEM_QUEST,
	ITEM_ALCHEMY_MATERIAL,
	ITEM_ALCHEMY_ELEMENT,
	ITEM_ALCHEMY_TABLET,
	ITEM_ALCHEMY_RONDO,
	ITEM_ALCHEMY_ELIXIR,
	ITEM_ALCHEMY_LUCKY_POWDER,
	ITEM_ALCHEMY_ADVANCED_ELIXIR,
	ITEM_SKILL_RESTORE_POT,
	ITEM_GUILD_SOLDIER_SCROLL,
	ITEM_GUILD_EMBLEM_SCROLL,
	ITEM_GUILD_RECALL_SCROLL,
	ITEM_LOTTERY_CARD,
	ITEM_LOTTERY_CARD_RESULT,
	ITEM_PANDORA_BOX,
	ITEM_PANDORA_PARTY_BOX,
	ITEM_BUFF,
	ITEM_XP_SP_TICKET,
	ITEM_SP_TICKET,
    ITEM_RESURRECT_SCROLL,
	ITEM_REPAIR_SCROLL,
	ITEM_TRANSGENDER_SCROLL,
	ITEM_SKIN_SCROLL,
	ITEM_WAREHOUSE_SCROLL,
	ITEM_ENCHANT_SCROLL,
	ITEM_COS_EXT_SCROLL,
	ITEM_STAT_SCROLL,
	ITEM_XP_SCROLL,
	ITEM_PET_SCROLL,
	ITEM_DEVIL_EXT_SCROLL,
	ITEM_STORAGE_SPACE_EXPANSION,
	ITEM_MONSTER_MASK,
	ITEM_MAGIC_CUBE_ELIXIR,
	ITEM_ARROW,
	ITEM_BOLT,
	ITEM_ALCHEMY_STATUS_STONE,
	ITEM_ALCHEMY_MAGIC_STONE,
	ITEM_ALCHEMY_ATTR_STONE,
	ITEM_COS_PET,
	ITEM_COS_GRAB_PET
};

enum ITEM_GROUPS
{
    WK_CH_WEAPON_SWORD = 1,
    WK_CH_WEAPON_BLADE,
    WK_CH_WEAPON_SPEAR,
    WK_CH_WEAPON_TBLADE,
    WK_CH_WEAPON_BOW,
    WK_CH_WEAPON_SHIELD,
    WK_CH_ARMOR_HEAVY,
    WK_CH_ARMOR_LIGHT,
    WK_CH_ARMOR_CLOTHES,
    WK_CH_ACCESSORY_NECKLACE,
    WK_CH_ACCESSORY_EARRING,
    WK_CH_ACCESSORY_RING,
    WK_EU_WEAPON_SWORD,
    WK_EU_WEAPON_TSWORD,
    WK_EU_WEAPON_DUALAXE,
    WK_EU_WEAPON_WROD,
    WK_EU_WEAPON_CROD,
    WK_EU_WEAPON_TSTAFF,
    WK_EU_WEAPON_CROSSBOW,
    WK_EU_WEAPON_DAGGER,
    WK_EU_WEAPON_HARP,
    WK_EU_WEAPON_SHIELD,
    WK_EU_ARMOR_HEAVY,
    WK_EU_ARMOR_LIGHT,
    WK_EU_ARMOR_ROBE,
    WK_EU_ACCESSORY_NECKLACE,
    WK_EU_ACCESSORY_EARRING,
    WK_EU_ACCESSORY_RING,
    WK_COSTUME_TRIANGLE,
    WK_COSTUME_AVATAR,
    WK_COSTUME_ETC,
    WK_COSTUME_NASRUN,
    WK_ALCHEMY_ELIXIR,
    WK_ALCHEMY_ELEMENT,
    WK_ALCHEMY_MAGICSTONE,
    WK_ALCHEMY_ATTRSTONE,
    WK_ALCHEMY_TABLET,
    WK_ALCHEMY_MATERIAL,
    WK_COS_COS,
    WK_COS_ETC,
    WK_ARTICLES_RECOVERY,
    WK_ARTICLES_CURE,
    WK_ARTICLES_RETURN,
    WK_ARTICLES_FORTIFY,
    WK_ARTICLES_ARROW,
    WK_GUILD_ITEM,
    WK_FORTWAR_WEAPON,
    WK_FORTWAR_ITEM,
    WK_EXCHANGE_COIN,
    WK_EVENT_ITEM,
    WK_ETC_CHANGE,
    WK_ETC_SPECIAL,
    WK_ETC_SKILL,
    WK_ETC_CHAT,
    WK_ETC_REPAIR,
    WK_ETC_ETC

};

#endif
