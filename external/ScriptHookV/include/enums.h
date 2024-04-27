/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
		(C) Alexander Blade 2015-2016
*/

#pragma once

#include <windows.h>

enum TEXT_FONTS {
    FONT_STANDARD = 0,
    FONT_CURSIVE,
    FONT_ROCKSTAR_TAG,
    FONT_LEADERBOARD,
    FONT_CONDENSED,
    FONT_STYLE_FIXED_WIDTH_NUMBERS,
    FONT_CONDENSED_NOT_GAMERNAME,
    FONT_STYLE_PRICEDOWN,
    FONT_STYLE_TAXI
};

enum eTextJustification {
    FONT_CENTRE = 0,
    FONT_LEFT,
    FONT_RIGHT,
    FONT_JUSTIFY
};

enum eTaskDataInfoFlags {
    TDIF_ConsiderAsInWaterInLowLodPhysics = 1 << 0,
    TDIF_DisableCover = 1 << 1,
    TDIF_DisableCower = 1 << 2,
    TDIF_DisableHandsUp = 1 << 3,
    TDIF_DisableVehicleUsage = 1 << 4,
    TDIF_DisableNonStandardDamageTypes = 1 << 5,
    TDIF_DisableUseScenariosWithNoModelSet = 1 << 6,
    TDIF_DisableWallHitAnimation = 1 << 7,
    TDIF_DisableReactAndFleeAnimation = 1 << 8,
    TDIF_DisablePotentialBlastResponse = 1 << 9,
    TDIF_DisablePotentialToBeWalkedIntoResponse = 1 << 10,
    TDIF_PreferFleeOnPavements = 1 << 11,
    TDIF_DisableMeleeIntroAnimation = 1 << 12,
    TDIF_PlayNudgeAnimationForBumps = 1 << 13,
    TDIF_DontInfluenceWantedLevel = 1 << 14,
    TDIF_DisableBraceForImpact = 1 << 15,
    TDIF_CanScreamDuringFlee = 1 << 16,
    TDIF_IgnorePavementCheckWhenLeavingScenarios = 1 << 17,
    TDIF_DiesInstantlyToFire = 1 << 18,
    TDIF_UseAmbientScaling = 1 << 19,
    TDIF_CanBeShoved = 1 << 20,
    TDIF_DisableEvasiveStep = 1 << 21,
    TDIF_FleeFromCombatWhenTargetIsInVehicle = 1 << 22,
    TDIF_CanBeTalkedTo = 1 << 23,
    TDIF_AlwaysSprintWhenFleeingInThreatResponse = 1 << 24,
    TDIF_UseAquaticRoamMode = 1 << 25,
    TDIF_ApplyExtraHeadingChangesInFishLocomotion = 1 << 26,
    TDIF_AlignPitchToWavesInFishLocomotion = 1 << 27,
    TDIF_UseSimplePitchingInFishLocomotion = 1 << 28,
    TDIF_ProbeForCollisionsInScenarioFlee = 1 << 29,
    TDIF_SwimStraightInSwimmingWander = 1 << 30,
    TDIF_UseSimpleWander = 1 << 31,
    TDIF_BlockIdleTurnsInSmartFleeWhileWaitingOnPath = 1 << 32,
    TDIF_ForceSlowChaseInAnimalMelee = 1 << 33,
    TDIF_ExpandAvoidanceRadius = 1 << 34,
    TDIF_DependentAmbientFriend = 1 << 35,
    TDIF_UseLooseCrowdAroundMetrics = 1 << 36,
    TDIF_UseLooseHeadingAdjustmentsInMelee = 1 << 37,
    TDIF_ForceNoTurningInFishLocomotion = 1 << 38,
    TDIF_UseLongerBlendsInFishLocomotion = 1 << 39,
    TDIF_ForceSlowSwimWhenUnderPlayerControl = 1 << 40,
    TDIF_CanShove = 1 << 41,
    TDIF_BlockPlayerFishPitchingWhenSlow = 1 << 42,
    TDIF_UseSlowPlayerFishPitchAcceleration = 1 << 43,
    TDIF_IgnoreDelaysOnGunshotEvents = 1 << 44,
    TDIF_DiesInstantlyToMele = 1 << 45,
};

enum eMicroMorphType {
    MMT_NOSE_WIDTH = 0,
    MMT_NOSE_HEIGHT,
    MMT_NOSE_LENGTH,
    MMT_NOSE_PROFILE,
    MMT_NOSE_TIP,
    MMT_NOSE_BROKE,
    MMT_BROW_HEIGHT,
    MMT_BROW_DEPTH,
    MMT_CHEEK_HEIGHT,
    MMT_CHEEK_DEPTH,
    MMT_CHEEK_PUFFED,
    MMT_EYES_SIZE,
    MMT_LIPS_SIZE,
    MMT_JAW_WIDTH,
    MMT_JAW_ROUND,
    MMT_CHIN_HEIGHT,
    MMT_CHIN_DEPTH,
    MMT_CHIN_POINTED,
    MMT_NUM_PAIRS,

    MMT_CHIN_BUM = MMT_NUM_PAIRS,
    MMT_NECK_MALE,
    MMT_SINGLES_END,

    MMT_MAX = MMT_SINGLES_END
};

enum eHeadBlendSlots {
    HBS_HEAD_0 = 0,
    HBS_HEAD_1,
    HBS_HEAD_2,
    HBS_PARENT_HEAD_0,
    HBS_PARENT_HEAD_1,
    HBS_HEAD_DRAWABLES,
    HBS_TEX_0 = HBS_HEAD_DRAWABLES,
    HBS_TEX_1,
    HBS_TEX_2,
    HBS_OVERLAY_TEX_BLEMISHES,
    HBS_OVERLAY_TEX_FACIAL_HAIR,
    HBS_OVERLAY_TEX_EYEBROW,
    HBS_OVERLAY_TEX_AGING,
    HBS_OVERLAY_TEX_MAKEUP,
    HBS_OVERLAY_TEX_BLUSHER,
    HBS_OVERLAY_TEX_DAMAGE,
    HBS_OVERLAY_TEX_BASE_DETAIL,
    HBS_OVERLAY_TEX_SKIN_DETAIL_1,
    HBS_OVERLAY_TEX_SKIN_DETAIL_2,
    HBS_BODY_OVERLAY_1,
    HBS_BODY_OVERLAY_2,
    HBS_BODY_OVERLAY_3,
    HBS_SKIN_FEET_0,
    HBS_SKIN_FEET_1,
    HBS_SKIN_FEET_2,
    HBS_SKIN_UPPR_0,
    HBS_SKIN_UPPR_1,
    HBS_SKIN_UPPR_2,
    HBS_SKIN_LOWR_0,
    HBS_SKIN_LOWR_1,
    HBS_SKIN_LOWR_2,

    HBS_MICRO_MORPH_SLOTS,
    HBS_MICRO_MORPH_NOSE_WIDTH = HBS_MICRO_MORPH_SLOTS,
    HBS_MICRO_MORPH_NOSE_HEIGHT,
    HBS_MICRO_MORPH_NOSE_LENGTH,
    HBS_MICRO_MORPH_NOSE_PROFILE,
    HBS_MICRO_MORPH_NOSE_TIP,
    HBS_MICRO_MORPH_NOSE_BROKE,
    HBS_MICRO_MORPH_BROW_HEIGHT,
    HBS_MICRO_MORPH_BROW_DEPTH,
    HBS_MICRO_MORPH_CHEEK_HEIGHT,
    HBS_MICRO_MORPH_CHEEK_DEPTH,
    HBS_MICRO_MORPH_CHEEK_PUFFED,
    HBS_MICRO_MORPH_EYES_SIZE,
    HBS_MICRO_MORPH_LIPS_SIZE,
    HBS_MICRO_MORPH_JAW_WIDTH,
    HBS_MICRO_MORPH_JAW_ROUND,
    HBS_MICRO_MORPH_CHIN_HEIGHT,
    HBS_MICRO_MORPH_CHIN_DEPTH,
    HBS_MICRO_MORPH_CHIN_POINTED,
    HBS_MICRO_MORPH_CHIN_BUM,
    HBS_MICRO_MORPH_NECK_MALE,
    HBS_MAX
};

enum eHeadOverlaySlots {
    HOS_BLEMISHES = 0,
    HOS_FACIAL_HAIR,
    HOS_EYEBROW,
    HOS_AGING,
    HOS_MAKEUP,
    HOS_BLUSHER,
    HOS_DAMAGE,
    HOS_BASE_DETAIL,
    HOS_SKIN_DETAIL_1,
    HOS_SKIN_DETAIL_2,
    HOS_BODY_1,
    HOS_BODY_2,
    HOS_BODY_3,
    HOS_MAX
};

enum CONTROL_ACTION {
    INPUT_NEXT_CAMERA = 0,
    INPUT_LOOK_LR,
    INPUT_LOOK_UD,
    INPUT_LOOK_UP_ONLY,
    INPUT_LOOK_DOWN_ONLY,
    INPUT_LOOK_LEFT_ONLY,
    INPUT_LOOK_RIGHT_ONLY,
    INPUT_CINEMATIC_SLOWMO,
    INPUT_SCRIPTED_FLY_UD,
    INPUT_SCRIPTED_FLY_LR,
    INPUT_SCRIPTED_FLY_ZUP,
    INPUT_SCRIPTED_FLY_ZDOWN,
    INPUT_WEAPON_WHEEL_UD,
    INPUT_WEAPON_WHEEL_LR,
    INPUT_WEAPON_WHEEL_NEXT,
    INPUT_WEAPON_WHEEL_PREV,
    INPUT_SELECT_NEXT_WEAPON,
    INPUT_SELECT_PREV_WEAPON,
    INPUT_SKIP_CUTSCENE,
    INPUT_CHARACTER_WHEEL,
    INPUT_MULTIPLAYER_INFO,
    INPUT_SPRINT,
    INPUT_JUMP,
    INPUT_ENTER,
    INPUT_ATTACK,
    INPUT_AIM,
    INPUT_LOOK_BEHIND,
    INPUT_PHONE,
    INPUT_SPECIAL_ABILITY,
    INPUT_SPECIAL_ABILITY_SECONDARY,
    INPUT_MOVE_UP_ONLY,
    INPUT_MOVE_DOWN_ONLY,
    INPUT_MOVE_LEFT_ONLY,
    INPUT_MOVE_RIGHT_ONLY,
    INPUT_DUCK,
    INPUT_SELECT_WEAPON,
    INPUT_PICKUP,
    INPUT_SNIPER_ZOOM,
    INPUT_SNIPER_ZOOM_IN_ONLY,
    INPUT_SNIPER_ZOOM_OUT_ONLY,
    INPUT_SNIPER_ZOOM_IN_SECONDARY,
    INPUT_SNIPER_ZOOM_OUT_SECONDARY,
    INPUT_COVER,
    INPUT_RELOAD,
    INPUT_TALK,
    INPUT_DETONATE,
    INPUT_HUD_SPECIAL,
    INPUT_ARREST,
    INPUT_ACCURATE_AIM,
    INPUT_CONTEXT,
    INPUT_CONTEXT_SECONDARY,
    INPUT_WEAPON_SPECIAL,
    INPUT_WEAPON_SPECIAL_TWO,
    INPUT_DIVE,
    INPUT_DROP_WEAPON,
    INPUT_DROP_AMMO,
    INPUT_THROW_GRENADE,
    INPUT_VEH_MOVE_UP_ONLY,
    INPUT_VEH_MOVE_DOWN_ONLY,
    INPUT_VEH_MOVE_LEFT_ONLY,
    INPUT_VEH_MOVE_RIGHT_ONLY,
    INPUT_VEH_SPECIAL,
    INPUT_VEH_GUN_LR,
    INPUT_VEH_GUN_UD,
    INPUT_VEH_AIM,
    INPUT_VEH_ATTACK,
    INPUT_VEH_ATTACK2,
    INPUT_VEH_ACCELERATE,
    INPUT_VEH_BRAKE,
    INPUT_VEH_DUCK,
    INPUT_VEH_HEADLIGHT,
    INPUT_VEH_EXIT,
    INPUT_VEH_HANDBRAKE,
    INPUT_VEH_HOTWIRE_LEFT,
    INPUT_VEH_HOTWIRE_RIGHT,
    INPUT_VEH_LOOK_BEHIND,
    INPUT_VEH_CIN_CAM,
    INPUT_VEH_NEXT_RADIO,
    INPUT_VEH_PREV_RADIO,
    INPUT_VEH_NEXT_RADIO_TRACK,
    INPUT_VEH_PREV_RADIO_TRACK,
    INPUT_VEH_RADIO_WHEEL,
    INPUT_VEH_HORN,
    INPUT_VEH_FLY_THROTTLE_UP,
    INPUT_VEH_FLY_THROTTLE_DOWN,
    INPUT_VEH_FLY_YAW_LEFT,
    INPUT_VEH_FLY_YAW_RIGHT,
    INPUT_VEH_PASSENGER_AIM,
    INPUT_VEH_PASSENGER_ATTACK,
    INPUT_VEH_SPECIAL_ABILITY_FRANKLIN,
    INPUT_VEH_STUNT_UD,
    INPUT_VEH_CINEMATIC_UD,
    INPUT_VEH_CINEMATIC_UP_ONLY,
    INPUT_VEH_CINEMATIC_DOWN_ONLY,
    INPUT_VEH_CINEMATIC_LR,
    INPUT_VEH_SELECT_NEXT_WEAPON,
    INPUT_VEH_SELECT_PREV_WEAPON,
    INPUT_VEH_ROOF,
    INPUT_VEH_JUMP,
    INPUT_VEH_GRAPPLING_HOOK,
    INPUT_VEH_SHUFFLE,
    INPUT_VEH_DROP_PROJECTILE,
    INPUT_VEH_MOUSE_CONTROL_OVERRIDE,
    INPUT_VEH_FLY_ROLL_LR,
    INPUT_VEH_FLY_ROLL_LEFT_ONLY,
    INPUT_VEH_FLY_ROLL_RIGHT_ONLY,
    INPUT_VEH_FLY_PITCH_UD,
    INPUT_VEH_FLY_PITCH_UP_ONLY,
    INPUT_VEH_FLY_PITCH_DOWN_ONLY,
    INPUT_VEH_FLY_UNDERCARRIAGE,
    INPUT_VEH_FLY_ATTACK,
    INPUT_VEH_FLY_SELECT_NEXT_WEAPON,
    INPUT_VEH_FLY_SELECT_PREV_WEAPON,
    INPUT_VEH_FLY_SELECT_TARGET_LEFT,
    INPUT_VEH_FLY_SELECT_TARGET_RIGHT,
    INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE,
    INPUT_VEH_FLY_DUCK,
    INPUT_VEH_FLY_ATTACK_CAMERA,
    INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE,
    INPUT_VEH_SUB_TURN_LR,
    INPUT_VEH_SUB_TURN_LEFT_ONLY,
    INPUT_VEH_SUB_TURN_RIGHT_ONLY,
    INPUT_VEH_SUB_PITCH_UD,
    INPUT_VEH_SUB_PITCH_UP_ONLY,
    INPUT_VEH_SUB_PITCH_DOWN_ONLY,
    INPUT_VEH_SUB_THROTTLE_UP,
    INPUT_VEH_SUB_THROTTLE_DOWN,
    INPUT_VEH_SUB_ASCEND,
    INPUT_VEH_SUB_DESCEND,
    INPUT_VEH_SUB_TURN_HARD_LEFT,
    INPUT_VEH_SUB_TURN_HARD_RIGHT,
    INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE,
    INPUT_VEH_PUSHBIKE_PEDAL,
    INPUT_VEH_PUSHBIKE_SPRINT,
    INPUT_VEH_PUSHBIKE_FRONT_BRAKE,
    INPUT_VEH_PUSHBIKE_REAR_BRAKE,
    INPUT_MELEE_ATTACK_LIGHT,
    INPUT_MELEE_ATTACK_HEAVY,
    INPUT_MELEE_ATTACK_ALTERNATE,
    INPUT_MELEE_BLOCK,
    INPUT_PARACHUTE_DEPLOY,
    INPUT_PARACHUTE_DETACH,
    INPUT_PARACHUTE_TURN_LR,
    INPUT_PARACHUTE_TURN_LEFT_ONLY,
    INPUT_PARACHUTE_TURN_RIGHT_ONLY,
    INPUT_PARACHUTE_PITCH_UD,
    INPUT_PARACHUTE_PITCH_UP_ONLY,
    INPUT_PARACHUTE_PITCH_DOWN_ONLY,
    INPUT_PARACHUTE_BRAKE_LEFT,
    INPUT_PARACHUTE_BRAKE_RIGHT,
    INPUT_PARACHUTE_SMOKE,
    INPUT_PARACHUTE_PRECISION_LANDING,
    INPUT_MAP,
    INPUT_SELECT_WEAPON_UNARMED,
    INPUT_SELECT_WEAPON_MELEE,
    INPUT_SELECT_WEAPON_HANDGUN,
    INPUT_SELECT_WEAPON_SHOTGUN,
    INPUT_SELECT_WEAPON_SMG,
    INPUT_SELECT_WEAPON_AUTO_RIFLE,
    INPUT_SELECT_WEAPON_SNIPER,
    INPUT_SELECT_WEAPON_HEAVY,
    INPUT_SELECT_WEAPON_SPECIAL,
    INPUT_SELECT_CHARACTER_MICHAEL,
    INPUT_SELECT_CHARACTER_FRANKLIN,
    INPUT_SELECT_CHARACTER_TREVOR,
    INPUT_SELECT_CHARACTER_MULTIPLAYER,
    INPUT_SAVE_REPLAY_CLIP,
    INPUT_SPECIAL_ABILITY_PC,
    INPUT_CELLPHONE_UP,
    INPUT_CELLPHONE_DOWN,
    INPUT_CELLPHONE_LEFT,
    INPUT_CELLPHONE_RIGHT,
    INPUT_CELLPHONE_SELECT,
    INPUT_CELLPHONE_CANCEL,
    INPUT_CELLPHONE_OPTION,
    INPUT_CELLPHONE_EXTRA_OPTION,
    INPUT_CELLPHONE_SCROLL_FORWARD,
    INPUT_CELLPHONE_SCROLL_BACKWARD,
    INPUT_CELLPHONE_CAMERA_FOCUS_LOCK,
    INPUT_CELLPHONE_CAMERA_GRID,
    INPUT_CELLPHONE_CAMERA_SELFIE,
    INPUT_CELLPHONE_CAMERA_DOF,
    INPUT_CELLPHONE_CAMERA_EXPRESSION,
    INPUT_FRONTEND_DOWN,
    INPUT_FRONTEND_UP,
    INPUT_FRONTEND_LEFT,
    INPUT_FRONTEND_RIGHT,
    INPUT_FRONTEND_RDOWN,
    INPUT_FRONTEND_RUP,
    INPUT_FRONTEND_RLEFT,
    INPUT_FRONTEND_RRIGHT,
    INPUT_FRONTEND_AXIS_X,
    INPUT_FRONTEND_AXIS_Y,
    INPUT_FRONTEND_RIGHT_AXIS_X,
    INPUT_FRONTEND_RIGHT_AXIS_Y,
    INPUT_FRONTEND_PAUSE,
    INPUT_FRONTEND_PAUSE_ALTERNATE,
    INPUT_FRONTEND_ACCEPT,
    INPUT_FRONTEND_CANCEL,
    INPUT_FRONTEND_X,
    INPUT_FRONTEND_Y,
    INPUT_FRONTEND_LB,
    INPUT_FRONTEND_RB,
    INPUT_FRONTEND_LT,
    INPUT_FRONTEND_RT,
    INPUT_FRONTEND_LS,
    INPUT_FRONTEND_RS,
    INPUT_FRONTEND_LEADERBOARD,
    INPUT_FRONTEND_SOCIAL_CLUB,
    INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY,
    INPUT_FRONTEND_DELETE,
    INPUT_FRONTEND_ENDSCREEN_ACCEPT,
    INPUT_FRONTEND_ENDSCREEN_EXPAND,
    INPUT_FRONTEND_SELECT,
    INPUT_SCRIPT_LEFT_AXIS_X,
    INPUT_SCRIPT_LEFT_AXIS_Y,
    INPUT_SCRIPT_RIGHT_AXIS_X,
    INPUT_SCRIPT_RIGHT_AXIS_Y,
    INPUT_SCRIPT_RUP,
    INPUT_SCRIPT_RDOWN,
    INPUT_SCRIPT_RLEFT,
    INPUT_SCRIPT_RRIGHT,
    INPUT_SCRIPT_LB,
    INPUT_SCRIPT_RB,
    INPUT_SCRIPT_LT,
    INPUT_SCRIPT_RT,
    INPUT_SCRIPT_LS,
    INPUT_SCRIPT_RS,
    INPUT_SCRIPT_PAD_UP,
    INPUT_SCRIPT_PAD_DOWN,
    INPUT_SCRIPT_PAD_LEFT,
    INPUT_SCRIPT_PAD_RIGHT,
    INPUT_SCRIPT_SELECT,
    INPUT_CURSOR_ACCEPT,
    INPUT_CURSOR_CANCEL,
    INPUT_CURSOR_X,
    INPUT_CURSOR_Y,
    INPUT_CURSOR_SCROLL_UP,
    INPUT_CURSOR_SCROLL_DOWN,
    INPUT_ENTER_CHEAT_CODE,
    INPUT_INTERACTION_MENU,
    INPUT_MP_TEXT_CHAT_ALL,
    INPUT_MP_TEXT_CHAT_TEAM,
    INPUT_MP_TEXT_CHAT_FRIENDS,
    INPUT_MP_TEXT_CHAT_CREW,
    INPUT_PC_PUSH_TO_TALK,
    INPUT_CREATOR_LS,
    INPUT_CREATOR_RS,
    INPUT_CREATOR_LT,
    INPUT_CREATOR_RT,
    INPUT_CREATOR_MENU_TOGGLE,
    INPUT_CREATOR_ACCEPT,
    INPUT_CREATOR_DELETE,
    INPUT_ATTACK2,
    INPUT_RAPPEL_JUMP,
    INPUT_RAPPEL_LONG_JUMP,
    INPUT_RAPPEL_SMASH_WINDOW,
    INPUT_PREV_WEAPON,
    INPUT_NEXT_WEAPON,
    INPUT_MELEE_ATTACK1,
    INPUT_MELEE_ATTACK2,
    INPUT_WHISTLE,
    INPUT_MOVE_LEFT,
    INPUT_MOVE_RIGHT,
    INPUT_MOVE_UP,
    INPUT_MOVE_DOWN,
    INPUT_LOOK_LEFT,
    INPUT_LOOK_RIGHT,
    INPUT_LOOK_UP,
    INPUT_LOOK_DOWN,
    INPUT_SNIPER_ZOOM_IN,
    INPUT_SNIPER_ZOOM_OUT,
    INPUT_SNIPER_ZOOM_IN_ALTERNATE,
    INPUT_SNIPER_ZOOM_OUT_ALTERNATE,
    INPUT_VEH_MOVE_LEFT,
    INPUT_VEH_MOVE_RIGHT,
    INPUT_VEH_MOVE_UP,
    INPUT_VEH_MOVE_DOWN,
    INPUT_VEH_GUN_LEFT,
    INPUT_VEH_GUN_RIGHT,
    INPUT_VEH_GUN_UP,
    INPUT_VEH_GUN_DOWN,
    INPUT_VEH_LOOK_LEFT,
    INPUT_VEH_LOOK_RIGHT,
    INPUT_REPLAY_START_STOP_RECORDING,
    INPUT_REPLAY_START_STOP_RECORDING_SECONDARY,
    INPUT_SCALED_LOOK_LR,
    INPUT_SCALED_LOOK_UD,
    INPUT_SCALED_LOOK_UP_ONLY,
    INPUT_SCALED_LOOK_DOWN_ONLY,
    INPUT_SCALED_LOOK_LEFT_ONLY,
    INPUT_SCALED_LOOK_RIGHT_ONLY,
    INPUT_REPLAY_MARKER_DELETE,
    INPUT_REPLAY_CLIP_DELETE,
    INPUT_REPLAY_PAUSE,
    INPUT_REPLAY_REWIND,
    INPUT_REPLAY_FFWD,
    INPUT_REPLAY_NEWMARKER,
    INPUT_REPLAY_RECORD,
    INPUT_REPLAY_SCREENSHOT,
    INPUT_REPLAY_HIDEHUD,
    INPUT_REPLAY_STARTPOINT,
    INPUT_REPLAY_ENDPOINT,
    INPUT_REPLAY_ADVANCE,
    INPUT_REPLAY_BACK,
    INPUT_REPLAY_TOOLS,
    INPUT_REPLAY_RESTART,
    INPUT_REPLAY_SHOWHOTKEY,
    INPUT_REPLAY_CYCLEMARKERLEFT,
    INPUT_REPLAY_CYCLEMARKERRIGHT,
    INPUT_REPLAY_FOVINCREASE,
    INPUT_REPLAY_FOVDECREASE,
    INPUT_REPLAY_CAMERAUP,
    INPUT_REPLAY_CAMERADOWN,
    INPUT_REPLAY_SAVE,
    INPUT_REPLAY_TOGGLETIME,
    INPUT_REPLAY_TOGGLETIPS,
    INPUT_REPLAY_PREVIEW,
    INPUT_REPLAY_TOGGLE_TIMELINE,
    INPUT_REPLAY_TIMELINE_PICKUP_CLIP,
    INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP,
    INPUT_REPLAY_TIMELINE_PLACE_CLIP,
    INPUT_REPLAY_CTRL,
    INPUT_REPLAY_TIMELINE_SAVE,
    INPUT_REPLAY_PREVIEW_AUDIO,
    INPUT_VEH_DRIVE_LOOK,
    INPUT_VEH_DRIVE_LOOK2,
    INPUT_VEH_FLY_ATTACK2,
    INPUT_RADIO_WHEEL_UD,
    INPUT_RADIO_WHEEL_LR,
    INPUT_VEH_SLOWMO_UP,
    INPUT_VEH_SLOWMO_UP_ONLY,
    INPUT_VEH_SLOWMO_DOWN_ONLY,
    INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE,
    INPUT_VEH_HYDRAULICS_CONTROL_LEFT,
    INPUT_VEH_HYDRAULICS_CONTROL_RIGHT,
    INPUT_VEH_HYDRAULICS_CONTROL_UP,
    INPUT_VEH_HYDRAULICS_CONTROL_DOWN,
    INPUT_VEH_HYDRAULICS_CONTROL_LR,
    INPUT_VEH_HYDRAULICS_CONTROL_UD,
    INPUT_SWITCH_VISOR,
    INPUT_VEH_MELEE_HOLD,
    INPUT_VEH_MELEE_LEFT,
    INPUT_VEH_MELEE_RIGHT,
    INPUT_MAP_POI,
    INPUT_REPLAY_SNAPMATIC_PHOTO,
    INPUT_VEH_CAR_JUMP,
    INPUT_VEH_ROCKET_BOOST,
    INPUT_VEH_FLY_BOOST,
    INPUT_VEH_PARACHUTE,
    INPUT_VEH_BIKE_WINGS,
    INPUT_VEH_FLY_BOMB_BAY,
    INPUT_VEH_FLY_COUNTER,
    INPUT_VEH_TRANSFORM,
    INPUT_QUAD_LOCO_REVERSE,
    INPUT_RESPAWN_FASTER,
    // INPUT_CNC_INTERACT_ATM,
    INPUT_HUDMARKER_SELECT,
    INPUT_EAT_SNACK,
    INPUT_USE_ARMOR,
    MAX_INPUTS
};

enum CONTROL_TYPE {
    PLAYER_CONTROL = 0,
    CAMERA_CONTROL,
    FRONTEND_CONTROL
};

enum FEED_TEXT_ICON {
    TEXT_ICON_BLANK = 0,
    TEXT_ICON_MESSAGE,
    TEXT_ICON_EMAIL,
    TEXT_ICON_NEW_CONTACT,
    TEXT_ICON_DRIVER,
    TEXT_ICON_HACKER,
    TEXT_ICON_SHOOTER,
    TEXT_ICON_INVITE,
    TEXT_ICON_RP,
    TEXT_ICON_CASH,
    TEXT_ICON_AP,
    TEXT_ICON_XP_ALT,
    TEXT_ICON_CASH_ALT
};

enum HUD_COLOURS {
    HUD_COLOUR_PURE_WHITE = 0,
    HUD_COLOUR_WHITE,
    HUD_COLOUR_BLACK,
    HUD_COLOUR_GREY,
    HUD_COLOUR_GREYLIGHT,
    HUD_COLOUR_GREYDARK,
    HUD_COLOUR_RED,
    HUD_COLOUR_REDLIGHT,
    HUD_COLOUR_REDDARK,
    HUD_COLOUR_BLUE,
    HUD_COLOUR_BLUELIGHT,
    HUD_COLOUR_BLUEDARK,
    HUD_COLOUR_YELLOW,
    HUD_COLOUR_YELLOWLIGHT,
    HUD_COLOUR_YELLOWDARK,
    HUD_COLOUR_ORANGE,
    HUD_COLOUR_ORANGELIGHT,
    HUD_COLOUR_ORANGEDARK,
    HUD_COLOUR_GREEN,
    HUD_COLOUR_GREENLIGHT,
    HUD_COLOUR_GREENDARK,
    HUD_COLOUR_PURPLE,
    HUD_COLOUR_PURPLELIGHT,
    HUD_COLOUR_PURPLEDARK,
    HUD_COLOUR_PINK,
    HUD_COLOUR_STAR,
    HUD_COLOUR_STARLIGHT,
    HUD_COLOUR_STARDARK,
    HUD_COLOUR_NET_PLAYER1,
    HUD_COLOUR_NET_PLAYER2,
    HUD_COLOUR_NET_PLAYER3,
    HUD_COLOUR_NET_PLAYER4,
    HUD_COLOUR_NET_PLAYER5,
    HUD_COLOUR_NET_PLAYER6,
    HUD_COLOUR_NET_PLAYER7,
    HUD_COLOUR_NET_PLAYER8,
    HUD_COLOUR_NET_PLAYER9,
    HUD_COLOUR_NET_PLAYER10,
    HUD_COLOUR_NET_PLAYER11,
    HUD_COLOUR_NET_PLAYER12,
    HUD_COLOUR_NET_PLAYER13,
    HUD_COLOUR_NET_PLAYER14,
    HUD_COLOUR_NET_PLAYER15,
    HUD_COLOUR_NET_PLAYER16,
    HUD_COLOUR_NET_PLAYER17,
    HUD_COLOUR_NET_PLAYER18,
    HUD_COLOUR_NET_PLAYER19,
    HUD_COLOUR_NET_PLAYER20,
    HUD_COLOUR_NET_PLAYER21,
    HUD_COLOUR_NET_PLAYER22,
    HUD_COLOUR_NET_PLAYER23,
    HUD_COLOUR_NET_PLAYER24,
    HUD_COLOUR_NET_PLAYER25,
    HUD_COLOUR_NET_PLAYER26,
    HUD_COLOUR_NET_PLAYER27,
    HUD_COLOUR_NET_PLAYER28,
    HUD_COLOUR_NET_PLAYER29,
    HUD_COLOUR_NET_PLAYER30,
    HUD_COLOUR_NET_PLAYER31,
    HUD_COLOUR_NET_PLAYER32,
    HUD_COLOUR_SIMPLEBLIP_DEFAULT,
    HUD_COLOUR_MENU_BLUE,
    HUD_COLOUR_MENU_GREY_LIGHT,
    HUD_COLOUR_MENU_BLUE_EXTRA_DARK,
    HUD_COLOUR_MENU_YELLOW,
    HUD_COLOUR_MENU_YELLOW_DARK,
    HUD_COLOUR_MENU_GREEN,
    HUD_COLOUR_MENU_GREY,
    HUD_COLOUR_MENU_GREY_DARK,
    HUD_COLOUR_MENU_HIGHLIGHT,
    HUD_COLOUR_MENU_STANDARD,
    HUD_COLOUR_MENU_DIMMED,
    HUD_COLOUR_MENU_EXTRA_DIMMED,
    HUD_COLOUR_BRIEF_TITLE,
    HUD_COLOUR_MID_GREY_MP,
    HUD_COLOUR_NET_PLAYER1_DARK,
    HUD_COLOUR_NET_PLAYER2_DARK,
    HUD_COLOUR_NET_PLAYER3_DARK,
    HUD_COLOUR_NET_PLAYER4_DARK,
    HUD_COLOUR_NET_PLAYER5_DARK,
    HUD_COLOUR_NET_PLAYER6_DARK,
    HUD_COLOUR_NET_PLAYER7_DARK,
    HUD_COLOUR_NET_PLAYER8_DARK,
    HUD_COLOUR_NET_PLAYER9_DARK,
    HUD_COLOUR_NET_PLAYER10_DARK,
    HUD_COLOUR_NET_PLAYER11_DARK,
    HUD_COLOUR_NET_PLAYER12_DARK,
    HUD_COLOUR_NET_PLAYER13_DARK,
    HUD_COLOUR_NET_PLAYER14_DARK,
    HUD_COLOUR_NET_PLAYER15_DARK,
    HUD_COLOUR_NET_PLAYER16_DARK,
    HUD_COLOUR_NET_PLAYER17_DARK,
    HUD_COLOUR_NET_PLAYER18_DARK,
    HUD_COLOUR_NET_PLAYER19_DARK,
    HUD_COLOUR_NET_PLAYER20_DARK,
    HUD_COLOUR_NET_PLAYER21_DARK,
    HUD_COLOUR_NET_PLAYER22_DARK,
    HUD_COLOUR_NET_PLAYER23_DARK,
    HUD_COLOUR_NET_PLAYER24_DARK,
    HUD_COLOUR_NET_PLAYER25_DARK,
    HUD_COLOUR_NET_PLAYER26_DARK,
    HUD_COLOUR_NET_PLAYER27_DARK,
    HUD_COLOUR_NET_PLAYER28_DARK,
    HUD_COLOUR_NET_PLAYER29_DARK,
    HUD_COLOUR_NET_PLAYER30_DARK,
    HUD_COLOUR_NET_PLAYER31_DARK,
    HUD_COLOUR_NET_PLAYER32_DARK,
    HUD_COLOUR_BRONZE,
    HUD_COLOUR_SILVER,
    HUD_COLOUR_GOLD,
    HUD_COLOUR_PLATINUM,
    HUD_COLOUR_GANG1,
    HUD_COLOUR_GANG2,
    HUD_COLOUR_GANG3,
    HUD_COLOUR_GANG4,
    HUD_COLOUR_SAME_CREW,
    HUD_COLOUR_FREEMODE,
    HUD_COLOUR_PAUSE_BG,
    HUD_COLOUR_FRIENDLY,
    HUD_COLOUR_ENEMY,
    HUD_COLOUR_LOCATION,
    HUD_COLOUR_PICKUP,
    HUD_COLOUR_PAUSE_SINGLEPLAYER,
    HUD_COLOUR_FREEMODE_DARK,
    HUD_COLOUR_INACTIVE_MISSION,
    HUD_COLOUR_DAMAGE,
    HUD_COLOUR_PINKLIGHT,
    HUD_COLOUR_PM_MITEM_HIGHLIGHT,
    HUD_COLOUR_SCRIPT_VARIABLE,
    HUD_COLOUR_YOGA,
    HUD_COLOUR_TENNIS,
    HUD_COLOUR_GOLF,
    HUD_COLOUR_SHOOTING_RANGE,
    HUD_COLOUR_FLIGHT_SCHOOL,
    HUD_COLOUR_NORTH_BLUE,
    HUD_COLOUR_SOCIAL_CLUB,
    HUD_COLOUR_PLATFORM_BLUE,
    HUD_COLOUR_PLATFORM_GREEN,
    HUD_COLOUR_PLATFORM_GREY,
    HUD_COLOUR_FACEBOOK_BLUE,
    HUD_COLOUR_INGAME_BG,
    HUD_COLOUR_DARTS,
    HUD_COLOUR_WAYPOINT,
    HUD_COLOUR_MICHAEL,
    HUD_COLOUR_FRANKLIN,
    HUD_COLOUR_TREVOR,
    HUD_COLOUR_GOLF_P1,
    HUD_COLOUR_GOLF_P2,
    HUD_COLOUR_GOLF_P3,
    HUD_COLOUR_GOLF_P4,
    HUD_COLOUR_WAYPOINTLIGHT,
    HUD_COLOUR_WAYPOINTDARK,
    HUD_COLOUR_PANEL_LIGHT,
    HUD_COLOUR_MICHAEL_DARK,
    HUD_COLOUR_FRANKLIN_DARK,
    HUD_COLOUR_TREVOR_DARK,
    HUD_COLOUR_OBJECTIVE_ROUTE,
    HUD_COLOUR_PAUSEMAP_TINT,
    HUD_COLOUR_PAUSE_DESELECT,
    HUD_COLOUR_PM_WEAPONS_PURCHASABLE,
    HUD_COLOUR_PM_WEAPONS_LOCKED,
    HUD_COLOUR_END_SCREEN_BG,
    HUD_COLOUR_CHOP,
    HUD_COLOUR_PAUSEMAP_TINT_HALF,
    HUD_COLOUR_NORTH_BLUE_OFFICIAL,
    HUD_COLOUR_SCRIPT_VARIABLE_2,
    HUD_COLOUR_H,
    HUD_COLOUR_HDARK,
    HUD_COLOUR_T,
    HUD_COLOUR_TDARK,
    HUD_COLOUR_HSHARD,
    HUD_COLOUR_CONTROLLER_MICHAEL,
    HUD_COLOUR_CONTROLLER_FRANKLIN,
    HUD_COLOUR_CONTROLLER_TREVOR,
    HUD_COLOUR_CONTROLLER_CHOP,
    HUD_COLOUR_VIDEO_EDITOR_VIDEO,
    HUD_COLOUR_VIDEO_EDITOR_AUDIO,
    HUD_COLOUR_VIDEO_EDITOR_TEXT,
    HUD_COLOUR_HB_BLUE,
    HUD_COLOUR_HB_YELLOW,
    HUD_COLOUR_VIDEO_EDITOR_SCORE,
    HUD_COLOUR_VIDEO_EDITOR_AUDIO_FADEOUT,
    HUD_COLOUR_VIDEO_EDITOR_TEXT_FADEOUT,
    HUD_COLOUR_VIDEO_EDITOR_SCORE_FADEOUT,
    HUD_COLOUR_HEIST_BACKGROUND,
    HUD_COLOUR_VIDEO_EDITOR_AMBIENT,
    HUD_COLOUR_VIDEO_EDITOR_AMBIENT_FADEOUT,
    HUD_COLOUR_GANG_BOSS,
    HUD_COLOUR_GOON,
    HUD_COLOUR_BOSS,
    HUD_COLOUR_LOW_FLOW,
    HUD_COLOUR_LOW_FLOW_DARK,
    HUD_COLOUR_G1,
    HUD_COLOUR_G2,
    HUD_COLOUR_G3,
    HUD_COLOUR_G4,
    HUD_COLOUR_G5,
    HUD_COLOUR_G6,
    HUD_COLOUR_G7,
    HUD_COLOUR_G8,
    HUD_COLOUR_G9,
    HUD_COLOUR_G10,
    HUD_COLOUR_G11,
    HUD_COLOUR_G12,
    HUD_COLOUR_G13,
    HUD_COLOUR_G14,
    HUD_COLOUR_G15,
    HUD_COLOUR_ADVERSARY,
    HUD_COLOUR_DEGEN_RED,
    HUD_COLOUR_DEGEN_YELLOW,
    HUD_COLOUR_DEGEN_GREEN,
    HUD_COLOUR_DEGEN_CYAN,
    HUD_COLOUR_DEGEN_BLUE,
    HUD_COLOUR_DEGEN_MAGENTA,
    HUD_COLOUR_STUNT_1,
    HUD_COLOUR_STUNT_2,
    HUD_COLOUR_SPECIAL_RACE_SERIES,
    HUD_COLOUR_SPECIAL_RACE_SERIES_DARK,
    HUD_COLOUR_CS,
    HUD_COLOUR_CS_DARK,
    HUD_COLOUR_TECH_GREEN,
    HUD_COLOUR_TECH_GREEN_DARK,
    HUD_COLOUR_TECH_RED,
    HUD_COLOUR_TECH_GREEN_VERY_DARK,
    HUD_COLOUR_PLACEHOLDER_01,
    HUD_COLOUR_PLACEHOLDER_02,
    HUD_COLOUR_PLACEHOLDER_03,
    HUD_COLOUR_PLACEHOLDER_04,
    HUD_COLOUR_PLACEHOLDER_05,
    HUD_COLOUR_PLACEHOLDER_06,
    HUD_COLOUR_PLACEHOLDER_07,
    HUD_COLOUR_PLACEHOLDER_08,
    HUD_COLOUR_PLACEHOLDER_09,
    HUD_COLOUR_PLACEHOLDER_10,
    HUD_COLOUR_JUNK_ENERGY
};

enum LOCK_STATE {
    VEHICLELOCK_NONE = 0,
    VEHICLELOCK_UNLOCKED,
    VEHICLELOCK_LOCKED,
    VEHICLELOCK_LOCKOUT_PLAYER_ONLY,
    VEHICLELOCK_LOCKED_PLAYER_INSIDE,
    VEHICLELOCK_LOCKED_INITIALLY,
    VEHICLELOCK_FORCE_SHUT_DOORS,
    VEHICLELOCK_LOCKED_BUT_CAN_BE_DAMAGED,
    VEHICLELOCK_LOCKED_BUT_BOOT_UNLOCKED,
    VEHICLELOCK_LOCKED_NO_PASSENGERS,
    VEHICLELOCK_CANNOT_ENTER
};

enum ENTER_EXIT_VEHICLE_FLAGS {
    ECF_RESUME_IF_INTERRUPTED = 1,
    ECF_WARP_ENTRY_POINT = 2,
    ECF_JACK_ANYONE = 8,
    ECF_WARP_PED = 16,
    ECF_DONT_WAIT_FOR_VEHICLE_TO_STOP = 64,
    ECF_DONT_CLOSE_DOOR = 256,
    ECF_WARP_IF_DOOR_IS_BLOCKED = 512,
    ECF_JUMP_OUT = 4096,
    ECF_DONT_DEFAULT_WARP_IF_DOOR_BLOCKED = 65536,
    ECF_USE_LEFT_ENTRY = 131072,
    ECF_USE_RIGHT_ENTRY = 262144,
    ECF_JUST_PULL_PED_OUT = 524288,
    ECF_BLOCK_SEAT_SHUFFLING = 1048576,
    ECF_WARP_IF_SHUFFLE_LINK_IS_BLOCKED = 4194304,
    ECF_DONT_JACK_ANYONE = 8388608,
    ECF_WAIT_FOR_ENTRY_POINT_TO_BE_CLEAR = 16777216
};

enum DRIVINGSTYLE {
    DRIVINGSTYLE_NORMAL = 0,
    DRIVINGSTYLE_ACCURATE = 0,
    DRIVINGSTYLE_STRAIGHTLINE = 0,
    DRIVINGSTYLE_RACING = 1,
    DRIVINGSTYLE_REVERSING = 2
};

enum DRIVINGMODE {

    DF_StopForCars = 1,
    DF_StopForPeds = 2,
    DF_SwerveAroundAllCars = 4,
    DF_SteerAroundStationaryCars = 8,
    DF_SteerAroundPeds = 16,
    DF_SteerAroundObjects = 32,
    DF_DontSteerAroundPlayerPed = 64,
    DF_StopAtLights = 128,
    DF_GoOffRoadWhenAvoiding = 256,
    DF_DriveIntoOncomingTraffic = 512,
    DF_DriveInReverse = 1024,
    DF_UseWanderFallbackInsteadOfStraightLine = 2048,
    DF_AvoidRestrictedAreas = 4096,
    DF_PreventBackgroundPathfinding = 8192,
    DF_AdjustCruiseSpeedBasedOnRoadSpeed = 16384,
    DF_UseShortCutLinks = 262144,
    DF_ChangeLanesAroundObstructions = 524288,
    DF_UseSwitchedOffNodes = 2097152,
    DF_PreferNavmeshRoute = 4194304,
    DF_PlaneTaxiMode = 8388608,
    DF_ForceStraightLine = 16777216,
    DF_UseStringPullingAtJunctions = 33554432,
    DF_AvoidHighways = 536870912,
    DF_ForceJoinInRoadDirection = 1073741824,
    DRIVINGMODE_STOPFORCARS = 786603,
    DRIVINGMODE_STOPFORCARS_STRICT = 262275,
    DRIVINGMODE_AVOIDCARS = 786469,
    DRIVINGMODE_AVOIDCARS_RECKLESS = 786468,
    DRIVINGMODE_PLOUGHTHROUGH = 262144,
    DRIVINGMODE_STOPFORCARS_IGNORELIGHTS = 786475,
    DRIVINGMODE_AVOIDCARS_OBEYLIGHTS = 786597,
    DRIVINGMODE_AVOIDCARS_STOPFORPEDS_OBEYLIGHTS = 786599
};

enum EGOTO_ENTITY_FLAGS {
    EGOTO_ENTITY_DEFAULT = 0,
    EGOTO_ENTITY_NEVER_SLOW_FOR_PATH_LENGTH = 1
};

enum ENAV_SCRIPT_FLAGS {
    ENAV_DEFAULT = 0,
    ENAV_NO_STOPPING = 1,
    ENAV_ADV_SLIDE_TO_COORD_AND_ACHIEVE_HEADING_AT_END = 2,
    ENAV_GO_FAR_AS_POSSIBLE_IF_TARGET_NAVMESH_NOT_LOADED = 4,
    ENAV_ALLOW_SWIMMING_UNDERWATER = 8,
    ENAV_KEEP_TO_PAVEMENTS = 16,
    ENAV_NEVER_ENTER_WATER = 32,
    ENAV_DONT_AVOID_OBJECTS = 64,
    ENAV_ADVANCED_USE_MAX_SLOPE_NAVIGABLE = 128,
    ENAV_STOP_EXACTLY = 512,
    ENAV_ACCURATE_WALKRUN_START = 1024,
    ENAV_DONT_AVOID_PEDS = 2048,
    ENAV_DONT_ADJUST_TARGET_POSITION = 4096,
    ENAV_SUPPRESS_EXACT_STOP = 8192,
    ENAV_ADVANCED_USE_CLAMP_MAX_SEARCH_DISTANCE = 16384,
    ENAV_PULL_FROM_EDGE_EXTRA = 32768
};

enum ANIMATION_FLAGS {
    AF_DEFAULT = 0,
    AF_LOOPING = 1,
    AF_HOLD_LAST_FRAME = 2,
    AF_REPOSITION_WHEN_FINISHED = 4,
    AF_NOT_INTERRUPTABLE = 8,
    AF_UPPERBODY = 16,
    AF_SECONDARY = 32,
    AF_REORIENT_WHEN_FINISHED = 64,
    AF_ABORT_ON_PED_MOVEMENT = 128,
    AF_ADDITIVE = 256,
    AF_TURN_OFF_COLLISION = 512,
    AF_OVERRIDE_PHYSICS = 1024,
    AF_IGNORE_GRAVITY = 2048,
    AF_EXTRACT_INITIAL_OFFSET = 4096,
    AF_EXIT_AFTER_INTERRUPTED = 8192,
    AF_TAG_SYNC_IN = 16384,
    AF_TAG_SYNC_OUT = 32768,
    AF_TAG_SYNC_CONTINUOUS = 65536,
    AF_FORCE_START = 131072,
    AF_USE_KINEMATIC_PHYSICS = 262144,
    AF_USE_MOVER_EXTRACTION = 524288,
    AF_HIDE_WEAPON = 1048576,
    AF_ENDS_IN_DEAD_POSE = 2097152,
    AF_ACTIVATE_RAGDOLL_ON_COLLISION = 4194304,
    AF_DONT_EXIT_ON_DEATH = 8388608,
    AF_ABORT_ON_WEAPON_DAMAGE = 16777216,
    AF_DISABLE_FORCED_PHYSICS_UPDATE = 33554432,
    AF_PROCESS_ATTACHMENTS_ON_START = 67108864,
    AF_EXPAND_PED_CAPSULE_FROM_SKELETON = 134217728,
    AF_USE_ALTERNATIVE_FP_ANIM = 268435456,
    AF_BLENDOUT_WRT_LAST_FRAME = 536870912,
    AF_USE_FULL_BLENDING = 1073741824
};

enum IK_CONTROL_FLAGS {
    AIK_NONE = 0,
    AIK_DISABLE_LEG_IK = 1,
    AIK_DISABLE_ARM_IK = 2,
    AIK_DISABLE_HEAD_IK = 4,
    AIK_DISABLE_TORSO_IK = 8,
    AIK_DISABLE_TORSO_REACT_IK = 16,
    AIK_USE_LEG_ALLOW_TAGS = 32,
    AIK_USE_LEG_BLOCK_TAGS = 64,
    AIK_USE_ARM_ALLOW_TAGS = 128,
    AIK_USE_ARM_BLOCK_TAGS = 256,
    AIK_PROCESS_WEAPON_HAND_GRIP = 512,
    AIK_USE_FP_ARM_LEFT = 1024,
    AIK_USE_FP_ARM_RIGHT = 2048,
    AIK_DISABLE_TORSO_VEHICLE_IK = 4096,
    AIK_LINKED_FACIAL = 8192
};

enum SCRIPT_LOOK_FLAG {
    SLF_DEFAULT = 0,
    SLF_SLOW_TURN_RATE = 1,
    SLF_FAST_TURN_RATE = 2,
    SLF_EXTEND_YAW_LIMIT = 4,
    SLF_EXTEND_PITCH_LIMIT = 8,
    SLF_WIDEST_YAW_LIMIT = 16,
    SLF_WIDEST_PITCH_LIMIT = 32,
    SLF_NARROW_YAW_LIMIT = 64,
    SLF_NARROW_PITCH_LIMIT = 128,
    SLF_NARROWEST_YAW_LIMIT = 256,
    SLF_NARROWEST_PITCH_LIMIT = 512,
    SLF_USE_TORSO = 1024,
    SLF_WHILE_NOT_IN_FOV = 2048,
    SLF_USE_CAMERA_FOCUS = 4096,
    SLF_USE_EYES_ONLY = 8192,
    SLF_USE_LOOK_DIR = 16384,
    SLF_FROM_SCRIPT = 32768,
    SLF_USE_REF_DIR_ABSOLUTE = 65536
};

enum SCRIPT_LOOK_PRIORITY {
    SLF_LOOKAT_VERY_LOW = 0,
    SLF_LOOKAT_LOW,
    SLF_LOOKAT_MEDIUM,
    SLF_LOOKAT_HIGH,
    SLF_LOOKAT_VERY_HIGH
};

enum SCRIPTTASKSTATUS {
    WAITING_TO_START_TASK = 0,
    PERFORMING_TASK,
    DORMANT_TASK,
    VACANT_STAGE,
    GROUP_TASK_STAGE,
    ATTRACTOR_SCRIPT_TASK_STAGE,
    SECONDARY_TASK_STAGE,
    FINISHED_TASK
};

enum CHAT_FLAGS {
    CF_IS_INITIATOR = 1,
    CF_DO_QUICK_CHAT = 2,
    CF_GO_TO_SPECIFIC_POS = 4,
    CF_USE_CUSTOM_HEADING = 8,
    CF_AUTO_CHAT = 16,
    CF_PLAY_GREETING_GESTURES = 32,
    CF_PLAY_GOODBYE_GESTURES = 64
};

enum VEHICLE_SEAT {
    VS_ANY_PASSENGER = -2,
    VS_DRIVER = -1,
    VS_FRONT_RIGHT = 0,
    VS_BACK_LEFT,
    VS_BACK_RIGHT,
    VS_EXTRA_LEFT_1,
    VS_EXTRA_RIGHT_1,
    VS_EXTRA_LEFT_2,
    VS_EXTRA_RIGHT_2,
    VS_EXTRA_LEFT_3,
    VS_EXTRA_RIGHT_3
};

enum FIRING_TYPE {
    FIRING_PATTERN_BURST_FIRE = -687903391,
    FIRING_PATTERN_BURST_FIRE_DRIVEBY = -753768974,
    FIRING_PATTERN_FULL_AUTO = -957453492,
    FIRING_PATTERN_SINGLE_SHOT = 1566631136,
    FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC = 2055493265,
    FIRING_PATTERN_BURST_FIRE_HELI = -1857128337,
    FIRING_PATTERN_SHORT_BURSTS = 445831135,
    FIRING_PATTERN_BURST_FIRE_MICRO = 1122960381,
    FIRING_PATTERN_SLOW_FIRE_TANK = -490063247,
    FIRING_PATTERN_TAMPA_MORTAR = -1842093953
};

enum TASK_COMBAT_PED_FLAGS {
    COMBAT_PED_NONE = 0,
    COMBAT_PED_PREVENT_CHANGING_TARGET = 67108864,
    COMBAT_PED_DISABLE_AIM_INTRO = 134217728
};

enum TASK_THREAT_RESPONSE_FLAGS {
    TASK_THREAT_RESPONSE_NONE = 0,
    TASK_THREAT_RESPONSE_CAN_FIGHT_ARMED_PEDS_WHEN_NOT_ARMED = 16
};

enum SWITCH_FLAGS {
    SWITCH_FLAG_SKIP_INTRO = 1,
    SWITCH_FLAG_SKIP_OUTRO = 2,
    SWITCH_FLAG_PAUSE_BEFORE_PAN = 4,
    SWITCH_FLAG_PAUSE_BEFORE_OUTRO = 8,
    SWITCH_FLAG_SKIP_PAN = 16,
    SWITCH_FLAG_UNKNOWN_DEST = 32,
    SWITCH_FLAG_DESCENT_ONLY = 64,
    SWITCH_FLAG_START_FROM_CAMPOS = 128,
    SWITCH_FLAG_PAUSE_BEFORE_ASCENT = 256,
    SWITCH_FLAG_PAUSE_BEFORE_DESCENT = 512,
    SWITCH_FLAG_ALLOW_SNIPER_AIM_INTRO = 1024,
    SWITCH_FLAG_ALLOW_SNIPER_AIM_OUTRO = 2048,
    SWITCH_FLAG_SKIP_TOP_DESCENT = 4096,
    SWITCH_FLAG_SUPPRESS_OUTRO_FX = 8192,
    SWITCH_FLAG_SUPPRESS_INTRO_FX = 16384,
    SWITCH_FLAG_DELAY_ASCENT_FX = 32768
};

enum SWITCH_STATE {
    SWITCH_STATE_INTRO = 0,
    SWITCH_STATE_PREP_DESCENT,
    SWITCH_STATE_PREP_FOR_CUT,
    SWITCH_STATE_JUMPCUT_ASCENT,
    SWITCH_STATE_WAITFORINPUT_INTRO,
    SWITCH_STATE_WAITFORINPUT,
    SWITCH_STATE_WAITFORINPUT_OUTRO,
    SWITCH_STATE_PAN,
    SWITCH_STATE_JUMPCUT_DESCENT,
    SWITCH_STATE_OUTRO_HOLD,
    SWITCH_STATE_OUTRO_SWOOP,
    SWITCH_STATE_ESTABLISHING_SHOT,
    SWITCH_STATE_FINISHED,
    SWITCH_STATE_OUTRO = SWITCH_STATE_OUTRO_HOLD
};

enum SHORT_SWITCH_STATE {
    SHORT_SWITCH_STATE_INTRO = 0,
    SHORT_SWITCH_STATE_OUTRO
};

enum SHORT_SWITCH_STYLE {
    SHORT_SWITCH_STYLE_ROTATION = 0,
    SHORT_SWITCH_STYLE_TRANSLATION,
    SHORT_SWITCH_STYLE_ZOOM_TO_HEAD,
    SHORT_SWITCH_STYLE_ZOOM_IN_OUT
};

enum SWITCH_TYPE {
    SWITCH_TYPE_AUTO = 0,
    SWITCH_TYPE_LONG,
    SWITCH_TYPE_MEDIUM,
    SWITCH_TYPE_SHORT
};

enum LOS_FLAGS {
    SCRIPT_INCLUDE_MOVER = 1,
    SCRIPT_INCLUDE_VEHICLE = 2,
    SCRIPT_INCLUDE_PED = 4,
    SCRIPT_INCLUDE_RAGDOLL = 8,
    SCRIPT_INCLUDE_OBJECT = 16,
    SCRIPT_INCLUDE_PICKUP = 32,
    SCRIPT_INCLUDE_GLASS = 64,
    SCRIPT_INCLUDE_RIVER = 128,
    SCRIPT_INCLUDE_FOLIAGE = 256,
    SCRIPT_INCLUDE_ALL = 511
};

enum EULER_ROT_ORDER {
    EULER_XYZ = 0,
    EULER_XZY = 1,
    EULER_YXZ = 2,
    EULER_YZX = 3,
    EULER_ZXY = 4,
    EULER_ZYX = 5,
};

enum ENTITY_TYPE {
    ET_NONE = 0,
    ET_PED = 1,
    ET_VEHICLE = 2,
    ET_OBJECT = 3
};

enum PED_BONETAG {
    BONETAG_NULL = -1,
    BONETAG_ROOT = 0,
    BONETAG_PELVIS = 11816,
    BONETAG_SPINE = 23553,
    BONETAG_SPINE1 = 24816,
    BONETAG_SPINE2 = 24817,
    BONETAG_SPINE3 = 24818,
    BONETAG_NECK = 39317,
    BONETAG_HEAD = 31086,
    BONETAG_R_CLAVICLE = 10706,
    BONETAG_R_UPPERARM = 40269,
    BONETAG_R_FOREARM = 28252,
    BONETAG_R_HAND = 57005,
    BONETAG_R_FINGER0 = 58866,
    BONETAG_R_FINGER01 = 64016,
    BONETAG_R_FINGER02 = 64017,
    BONETAG_R_FINGER1 = 58867,
    BONETAG_R_FINGER11 = 64096,
    BONETAG_R_FINGER12 = 64097,
    BONETAG_R_FINGER2 = 58868,
    BONETAG_R_FINGER21 = 64112,
    BONETAG_R_FINGER22 = 64113,
    BONETAG_R_FINGER3 = 58869,
    BONETAG_R_FINGER31 = 64064,
    BONETAG_R_FINGER32 = 64065,
    BONETAG_R_FINGER4 = 58870,
    BONETAG_R_FINGER41 = 64080,
    BONETAG_R_FINGER42 = 64081,
    BONETAG_L_CLAVICLE = 64729,
    BONETAG_L_UPPERARM = 45509,
    BONETAG_L_FOREARM = 61163,
    BONETAG_L_HAND = 18905,
    BONETAG_L_FINGER0 = 26610,
    BONETAG_L_FINGER01 = 4089,
    BONETAG_L_FINGER02 = 4090,
    BONETAG_L_FINGER1 = 26611,
    BONETAG_L_FINGER11 = 4169,
    BONETAG_L_FINGER12 = 4170,
    BONETAG_L_FINGER2 = 26612,
    BONETAG_L_FINGER21 = 4185,
    BONETAG_L_FINGER22 = 4186,
    BONETAG_L_FINGER3 = 26613,
    BONETAG_L_FINGER31 = 4137,
    BONETAG_L_FINGER32 = 4138,
    BONETAG_L_FINGER4 = 26614,
    BONETAG_L_FINGER41 = 4153,
    BONETAG_L_FINGER42 = 4154,
    BONETAG_L_THIGH = 58271,
    BONETAG_L_CALF = 63931,
    BONETAG_L_FOOT = 14201,
    BONETAG_L_TOE = 2108,
    BONETAG_R_THIGH = 51826,
    BONETAG_R_CALF = 36864,
    BONETAG_R_FOOT = 52301,
    BONETAG_R_TOE = 20781,
    BONETAG_PH_L_HAND = 60309,
    BONETAG_PH_R_HAND = 28422
};