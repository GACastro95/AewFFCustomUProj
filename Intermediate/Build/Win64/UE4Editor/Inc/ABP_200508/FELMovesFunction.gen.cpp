// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/FELMovesFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFELMovesFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UFELMovesFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UFELMovesFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesTestMenuStructDefine();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_Part();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EStickinputDir();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EChainWrestlingPoseType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESpecialMovesType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EEnvironmentGroggy();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EDownDirType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERecoilAttackType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERopeGroggy();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWhipState();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFELMovesFunction::execFormatCurrentPathName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Left);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFELMovesFunction::FormatCurrentPathName(Z_Param_Out_Left,Z_Param_Out_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetActionSkillNo)
	{
		P_GET_TMAP_REF(int32,FMovesTestMenuStructDefine,Z_Param_Out__OutMenu);
		P_GET_STRUCT_REF(FMovesTestMenuStructDefine,Z_Param_Out__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFELMovesFunction::GetActionSkillNo(Z_Param_Out__OutMenu,Z_Param_Out__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetFinisher_SettingData)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DetailTable);
		P_GET_TMAP_REF(int32,FMovesTestMenuStructDefine,Z_Param_Out__Menu);
		P_GET_STRUCT_REF(FELMoves_Finisher_Part,Z_Param_Out_Finisher);
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetFinisher_SettingData(Z_Param_DetailTable,Z_Param_Out__Menu,Z_Param_Out_Finisher,Z_Param_Out__OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetFinisherMatchMenuData)
	{
		P_GET_UBOOL(Z_Param_bFinisher);
		P_GET_TMAP_REF(int32,FMovesTestMenuStructDefine,Z_Param_Out__OutMenu);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__Finisher);
		P_GET_STRUCT_REF(FWrestlingSkillParam,Z_Param_Out__SkillParam);
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out_MENU);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetFinisherMatchMenuData(Z_Param_bFinisher,Z_Param_Out__OutMenu,Z_Param_Out__MovesSituation,Z_Param_Out__Finisher,Z_Param_Out__SkillParam,Z_Param_Out_MENU);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMoves_CornerGroggyStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Front);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_Grapple);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_Running);
		P_GET_UBOOL(Z_Param_OverTheTopRopeRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMoves_CornerGroggyStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Front,Z_Param_Kick,Z_Param_Grapple,EStickinputDir(Z_Param_InputDir),Z_Param_Running,Z_Param_OverTheTopRopeRule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesChildrenMenuList)
	{
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__MenuData);
		P_GET_STRUCT_REF(FMovesTestMenuStructDefine,Z_Param_Out__TopMenu);
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__OutMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesChildrenMenuList(Z_Param_Out__MenuData,Z_Param_Out__TopMenu,Z_Param_Out__OutMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesCurrentPathName)
	{
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__MenuData);
		P_GET_STRUCT_REF(FMovesTestMenuStructDefine,Z_Param_Out__CrrentMenu);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out__PathNames);
		P_GET_UBOOL(Z_Param__WithCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesCurrentPathName(Z_Param_Out__MenuData,Z_Param_Out__CrrentMenu,Z_Param_Out__PathNames,Z_Param__WithCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesMenuMap)
	{
		P_GET_OBJECT(UDataTable,Z_Param_MenuTable);
		P_GET_TMAP_REF(int32,FMovesTestMenuStructDefine,Z_Param_Out__OutMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesMenuMap(Z_Param_MenuTable,Z_Param_Out__OutMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesParentMenuName)
	{
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__MenuData);
		P_GET_STRUCT_REF(FMovesTestMenuStructDefine,Z_Param_Out__CrrentMenu);
		P_GET_TARRAY_REF(FText,Z_Param_Out__ParentMenuNames);
		P_GET_UBOOL(Z_Param__WithCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFELMovesFunction::GetMovesParentMenuName(Z_Param_Out__MenuData,Z_Param_Out__CrrentMenu,Z_Param_Out__ParentMenuNames,Z_Param__WithCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableBarricadeLeanAgainst)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneRunningAttack);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bRunning);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(EEnvironmentLeanAgainst,Z_Param_TargetBarricadeLeanAgainst);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableBarricadeLeanAgainst(Z_Param_Out_Value,Z_Param_Out_bDoneRunningAttack,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bRunning,Z_Param_Kick,Z_Param_bGrapple,EEnvironmentLeanAgainst(Z_Param_TargetBarricadeLeanAgainst));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableChainWrestling)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_ENUM(EChainWrestlingAttackType,Z_Param_ChainWrestlingAttackType);
		P_GET_ENUM(EChainWrestlingPoseType,Z_Param_ChainWrestlingPoseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFELMovesFunction::GetMovesTableChainWrestling(Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,EStickinputDir(Z_Param_InputDir),EChainWrestlingAttackType(Z_Param_ChainWrestlingAttackType),EChainWrestlingPoseType(Z_Param_ChainWrestlingPoseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueApronSpringboard)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bToOutRing);
		P_GET_UBOOL(Z_Param_bToCorner);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_bDown);
		P_GET_UBOOL(Z_Param_bFaceUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueApronSpringboard(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bToOutRing,Z_Param_bToCorner,Z_Param_bFront,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType),Z_Param_bDown,Z_Param_bFaceUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueApronStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bFromApron);
		P_GET_UBOOL(Z_Param_bToTagWait);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bRun);
		P_GET_UBOOL(Z_Param_bFromOutside);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueApronStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bFromApron,Z_Param_bToTagWait,Z_Param_bGrapple,Z_Param_bRun,Z_Param_bFromOutside,Z_Param_bFront,ESpecialMovesType(Z_Param_SpecialType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueApronToApron)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bRun);
		P_GET_UBOOL(Z_Param_bMiddleRope);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueApronToApron(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bRun,Z_Param_bMiddleRope);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueChainGrapple)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneEnvironmentAttack);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_bStrong);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_CornerChain);
		P_GET_UBOOL(Z_Param_bRopeChain);
		P_GET_UBOOL(Z_Param_bRingToApron);
		P_GET_UBOOL(Z_Param_bApronToRing);
		P_GET_UBOOL(Z_Param_bInputLookAtRing);
		P_GET_UBOOL(Z_Param_bTagWait);
		P_GET_ENUM(EEnvironmentGroggy,Z_Param_EnvironmentGroggy);
		P_GET_ENUM(EChainWrestlingAttackType,Z_Param_ChainWrestlingAttackType);
		P_GET_ENUM(EChainWrestlingPoseType,Z_Param_ChainWrestlingPoseType);
		P_GET_UBOOL(Z_Param_bKickCatchThrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueChainGrapple(Z_Param_Out_Value,Z_Param_Out_bDoneEnvironmentAttack,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,Z_Param_bStrong,EStickinputDir(Z_Param_InputDir),Z_Param_CornerChain,Z_Param_bRopeChain,Z_Param_bRingToApron,Z_Param_bApronToRing,Z_Param_bInputLookAtRing,Z_Param_bTagWait,EEnvironmentGroggy(Z_Param_EnvironmentGroggy),EChainWrestlingAttackType(Z_Param_ChainWrestlingAttackType),EChainWrestlingPoseType(Z_Param_ChainWrestlingPoseType),Z_Param_bKickCatchThrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueChainStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bStrong);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_CornerChain);
		P_GET_UBOOL(Z_Param_bRopeChain);
		P_GET_UBOOL(Z_Param_bRingToApron);
		P_GET_UBOOL(Z_Param_bApronToRing);
		P_GET_UBOOL(Z_Param_bInputLookAtRing);
		P_GET_UBOOL(Z_Param_bTagWait);
		P_GET_ENUM(EChainWrestlingAttackType,Z_Param_ChainWrestlingAttackType);
		P_GET_ENUM(EChainWrestlingPoseType,Z_Param_ChainWrestlingPoseType);
		P_GET_UBOOL(Z_Param_bKickCatchThrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueChainStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,Z_Param_Kick,Z_Param_bStrong,EStickinputDir(Z_Param_InputDir),Z_Param_CornerChain,Z_Param_bRopeChain,Z_Param_bRingToApron,Z_Param_bApronToRing,Z_Param_bInputLookAtRing,Z_Param_bTagWait,EChainWrestlingAttackType(Z_Param_ChainWrestlingAttackType),EChainWrestlingPoseType(Z_Param_ChainWrestlingPoseType),Z_Param_bKickCatchThrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueCornerSpringboard)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bToOutRing);
		P_GET_UBOOL(Z_Param_bToApron);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_bDown);
		P_GET_UBOOL(Z_Param_bFaceUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueCornerSpringboard(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bToOutRing,Z_Param_bToApron,Z_Param_bFront,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType),Z_Param_bDown,Z_Param_bFaceUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueDiving)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_bDown);
		P_GET_UBOOL(Z_Param_bFaceUp);
		P_GET_UBOOL(Z_Param_FromCorner);
		P_GET_UBOOL(Z_Param_FromBarricade);
		P_GET_UBOOL(Z_Param_FromLadder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueDiving(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType),Z_Param_bDown,Z_Param_bFaceUp,Z_Param_FromCorner,Z_Param_FromBarricade,Z_Param_FromLadder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueDownGrapple)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Running);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueDownGrapple(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Running,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueDownRunningStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueDownRunningStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueDownSpecial)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueDownSpecial(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,ESpecialMovesType(Z_Param_SpecialType),Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueDownStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueDownStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueKickCatchThrow)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_UBOOL(Z_Param_bFromKickButtun);
		P_GET_UBOOL(Z_Param_bFromGrappleButtun);
		P_GET_UBOOL(Z_Param_bReversal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueKickCatchThrow(Z_Param_Out_Value,Z_Param_Out_MovesCategoryName,Z_Param_Out_TargetMoves,Z_Param_bFromKickButtun,Z_Param_bFromGrappleButtun,Z_Param_bReversal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRecoilAttack)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFromGrappleButtun);
		P_GET_ENUM(ERecoilAttackType,Z_Param_RecoilAttackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFELMovesFunction::GetMovesTableValueRecoilAttack(Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFromGrappleButtun,ERecoilAttackType(Z_Param_RecoilAttackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRingSideToRing)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRingSideToRing(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRiseUpStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRiseUpStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRopeGroggyStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bInRingToMiddleRope);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bRun);
		P_GET_UBOOL(Z_Param_bOutside);
		P_GET_UBOOL(Z_Param_bApron);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_ENUM(ERopeGroggy,Z_Param_TargetRopeGroggy);
		P_GET_UBOOL(Z_Param_OverTheTopRopeRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRopeGroggyStrike(Z_Param_Out_Value,Z_Param_Out_bInRingToMiddleRope,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bRun,Z_Param_bOutside,Z_Param_bApron,EStickinputDir(Z_Param_InputDir),ESpecialMovesType(Z_Param_SpecialType),ERopeGroggy(Z_Param_TargetRopeGroggy),Z_Param_OverTheTopRopeRule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRopeSpringboard)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bRun);
		P_GET_UBOOL(Z_Param_bToOutRing);
		P_GET_UBOOL(Z_Param_bToCorner);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_bDown);
		P_GET_UBOOL(Z_Param_bFaceUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRopeSpringboard(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bRun,Z_Param_bToOutRing,Z_Param_bToCorner,Z_Param_bFront,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType),Z_Param_bDown,Z_Param_bFaceUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRunningAttack)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneEnvironmentAttack);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bStrong);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_TargetDown);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_GET_UBOOL(Z_Param_bSetupAction);
		P_GET_ENUM(EEnvironmentLeanAgainst,Z_Param_TargetLeanAgainst);
		P_GET_ENUM(EEnvironmentGroggy,Z_Param_EnvironmentGroggy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRunningAttack(Z_Param_Out_Value,Z_Param_Out_bDoneEnvironmentAttack,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bStrong,ESpecialMovesType(Z_Param_SpecialType),EStickinputDir(Z_Param_InputDir),Z_Param_TargetDown,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType),Z_Param_bSetupAction,EEnvironmentLeanAgainst(Z_Param_TargetLeanAgainst),EEnvironmentGroggy(Z_Param_EnvironmentGroggy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueRunningCounter)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_bSetupAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueRunningCounter(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,ESpecialMovesType(Z_Param_SpecialType),EStickinputDir(Z_Param_InputDir),Z_Param_bSetupAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueSitDownAttack)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_bRunning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueSitDownAttack(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bFront,Z_Param_bRunning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueSpecialGrapple)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_CornerChain);
		P_GET_UBOOL(Z_Param_bRopeChain);
		P_GET_UBOOL(Z_Param_bRingToApron);
		P_GET_UBOOL(Z_Param_bApronToRing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueSpecialGrapple(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,ESpecialMovesType(Z_Param_SpecialType),Z_Param_CornerChain,Z_Param_bRopeChain,Z_Param_bRingToApron,Z_Param_bApronToRing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueSpecialStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialType);
		P_GET_UBOOL(Z_Param_bRun);
		P_GET_UBOOL(Z_Param_bRunningCounter);
		P_GET_UBOOL(Z_Param_bOutside);
		P_GET_UBOOL(Z_Param_TargetDown);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_GET_ENUM(ERopeGroggy,Z_Param_TargetRopeGroggy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueSpecialStrike(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,ESpecialMovesType(Z_Param_SpecialType),Z_Param_bRun,Z_Param_bRunningCounter,Z_Param_bOutside,Z_Param_TargetDown,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType),ERopeGroggy(Z_Param_TargetRopeGroggy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueStandStrike)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneRunningAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneRunningCounter);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneWhipAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneDownAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneEnvironmentAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneApronToApronAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneRiseUpAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bDoneRecoilAttack);
		P_GET_UBOOL_REF(Z_Param_Out_bInRingToMiddleRope);
		P_GET_UBOOL_REF(Z_Param_Out_bIgnoreSync);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_bFront);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bStrong);
		P_GET_UBOOL(Z_Param_bNear);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_bRunning);
		P_GET_UBOOL(Z_Param_bFromGrappleButtun);
		P_GET_UBOOL(Z_Param_bRunningCounter);
		P_GET_UBOOL(Z_Param_bApron);
		P_GET_UBOOL(Z_Param_bOutside);
		P_GET_UBOOL(Z_Param_bRiseUp);
		P_GET_PROPERTY(FIntProperty,Z_Param_ComboCount);
		P_GET_UBOOL(Z_Param_TargetDown);
		P_GET_UBOOL(Z_Param_TargetSitDown);
		P_GET_UBOOL(Z_Param_TargetFaceDown);
		P_GET_ENUM(EDownDirType,Z_Param_TargetDownDirType);
		P_GET_UBOOL(Z_Param_TargetCornerTop);
		P_GET_UBOOL(Z_Param_TargetCornerGroggy);
		P_GET_ENUM(ERopeGroggy,Z_Param_TargetRopeGroggy);
		P_GET_UBOOL(Z_Param_TargetApron);
		P_GET_UBOOL(Z_Param_TargetDiving);
		P_GET_ENUM(EWhipState,Z_Param_TargetWhipState);
		P_GET_UBOOL(Z_Param_bTargetTagWait);
		P_GET_UBOOL(Z_Param_bSetupAction);
		P_GET_ENUM(EEnvironmentGroggy,Z_Param_EnvironmentGroggy);
		P_GET_ENUM(EEnvironmentLeanAgainst,Z_Param_TargetBarricadeLeanAgainst);
		P_GET_UBOOL(Z_Param_OverTheTopRopeRule);
		P_GET_UBOOL(Z_Param_bRingSideToRing);
		P_GET_ENUM(ERecoilAttackType,Z_Param_RecoilAttackType);
		P_GET_UBOOL(Z_Param_bIsSpecialState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueStandStrike(Z_Param_Out_Value,Z_Param_Out_bDoneRunningAttack,Z_Param_Out_bDoneRunningCounter,Z_Param_Out_bDoneWhipAttack,Z_Param_Out_bDoneDownAttack,Z_Param_Out_bDoneEnvironmentAttack,Z_Param_Out_bDoneApronToApronAttack,Z_Param_Out_bDoneRiseUpAttack,Z_Param_Out_bDoneRecoilAttack,Z_Param_Out_bInRingToMiddleRope,Z_Param_Out_bIgnoreSync,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_bFront,Z_Param_Kick,Z_Param_bStrong,Z_Param_bNear,EStickinputDir(Z_Param_InputDir),Z_Param_bRunning,Z_Param_bFromGrappleButtun,Z_Param_bRunningCounter,Z_Param_bApron,Z_Param_bOutside,Z_Param_bRiseUp,Z_Param_ComboCount,Z_Param_TargetDown,Z_Param_TargetSitDown,Z_Param_TargetFaceDown,EDownDirType(Z_Param_TargetDownDirType),Z_Param_TargetCornerTop,Z_Param_TargetCornerGroggy,ERopeGroggy(Z_Param_TargetRopeGroggy),Z_Param_TargetApron,Z_Param_TargetDiving,EWhipState(Z_Param_TargetWhipState),Z_Param_bTargetTagWait,Z_Param_bSetupAction,EEnvironmentGroggy(Z_Param_EnvironmentGroggy),EEnvironmentLeanAgainst(Z_Param_TargetBarricadeLeanAgainst),Z_Param_OverTheTopRopeRule,Z_Param_bRingSideToRing,ERecoilAttackType(Z_Param_RecoilAttackType),Z_Param_bIsSpecialState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueTwoPlatoons)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_ENUM(ETwoPlatoonsStuation,Z_Param_Situation);
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_bChainGrappleDestroy);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bRunning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueTwoPlatoons(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,ETwoPlatoonsStuation(Z_Param_Situation),EStickinputDir(Z_Param_InputDir),Z_Param_bChainGrappleDestroy,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bRunning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTableValueWhipAttack)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_TargetMoves);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MovesCategoryName);
		P_GET_UBOOL(Z_Param_Kick);
		P_GET_UBOOL(Z_Param_bGrapple);
		P_GET_UBOOL(Z_Param_bTargetDiving);
		P_GET_ENUM(EWhipState,Z_Param_TargetWhipState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTableValueWhipAttack(Z_Param_Out_Value,Z_Param_Out_TargetMoves,Z_Param_Out_MovesCategoryName,Z_Param_Kick,Z_Param_bGrapple,Z_Param_bTargetDiving,EWhipState(Z_Param_TargetWhipState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetMovesTopMenuList)
	{
		P_GET_OBJECT(UDataTable,Z_Param_UpdateTable);
		P_GET_TARRAY_REF(FMovesTestMenuStructDefine,Z_Param_Out__OutMenuTop);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::GetMovesTopMenuList(Z_Param_UpdateTable,Z_Param_Out__OutMenuTop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execGetSlotDetalMatchData)
	{
		P_GET_TMAP_REF(int32,FMovesTestMenuStructDefine,Z_Param_Out__OutMenu);
		P_GET_STRUCT_REF(FELMovesSituation_SlotDetail,Z_Param_Out__SlotDetail);
		P_GET_STRUCT_REF(FWrestlingSkillParam,Z_Param_Out__SkillParam);
		P_GET_STRUCT_REF(FMovesTestMenuStructDefine,Z_Param_Out_MENU);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFELMovesFunction::GetSlotDetalMatchData(Z_Param_Out__OutMenu,Z_Param_Out__SlotDetail,Z_Param_Out__SkillParam,Z_Param_Out_MENU);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execMakeUniqueIndexELMoves)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out_MOVES);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::MakeUniqueIndexELMoves(Z_Param_Out_MOVES);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesFunction::execSetSceneCaptureOnly)
	{
		P_GET_TARRAY(AActor*,Z_Param_SceneActors);
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesFunction::SetSceneCaptureOnly(Z_Param_SceneActors,Z_Param_Flag);
		P_NATIVE_END;
	}
	void UFELMovesFunction::StaticRegisterNativesUFELMovesFunction()
	{
		UClass* Class = UFELMovesFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FormatCurrentPathName", &UFELMovesFunction::execFormatCurrentPathName },
			{ "GetActionSkillNo", &UFELMovesFunction::execGetActionSkillNo },
			{ "GetFinisher_SettingData", &UFELMovesFunction::execGetFinisher_SettingData },
			{ "GetFinisherMatchMenuData", &UFELMovesFunction::execGetFinisherMatchMenuData },
			{ "GetMoves_CornerGroggyStrike", &UFELMovesFunction::execGetMoves_CornerGroggyStrike },
			{ "GetMovesChildrenMenuList", &UFELMovesFunction::execGetMovesChildrenMenuList },
			{ "GetMovesCurrentPathName", &UFELMovesFunction::execGetMovesCurrentPathName },
			{ "GetMovesMenuMap", &UFELMovesFunction::execGetMovesMenuMap },
			{ "GetMovesParentMenuName", &UFELMovesFunction::execGetMovesParentMenuName },
			{ "GetMovesTableBarricadeLeanAgainst", &UFELMovesFunction::execGetMovesTableBarricadeLeanAgainst },
			{ "GetMovesTableChainWrestling", &UFELMovesFunction::execGetMovesTableChainWrestling },
			{ "GetMovesTableValueApronSpringboard", &UFELMovesFunction::execGetMovesTableValueApronSpringboard },
			{ "GetMovesTableValueApronStrike", &UFELMovesFunction::execGetMovesTableValueApronStrike },
			{ "GetMovesTableValueApronToApron", &UFELMovesFunction::execGetMovesTableValueApronToApron },
			{ "GetMovesTableValueChainGrapple", &UFELMovesFunction::execGetMovesTableValueChainGrapple },
			{ "GetMovesTableValueChainStrike", &UFELMovesFunction::execGetMovesTableValueChainStrike },
			{ "GetMovesTableValueCornerSpringboard", &UFELMovesFunction::execGetMovesTableValueCornerSpringboard },
			{ "GetMovesTableValueDiving", &UFELMovesFunction::execGetMovesTableValueDiving },
			{ "GetMovesTableValueDownGrapple", &UFELMovesFunction::execGetMovesTableValueDownGrapple },
			{ "GetMovesTableValueDownRunningStrike", &UFELMovesFunction::execGetMovesTableValueDownRunningStrike },
			{ "GetMovesTableValueDownSpecial", &UFELMovesFunction::execGetMovesTableValueDownSpecial },
			{ "GetMovesTableValueDownStrike", &UFELMovesFunction::execGetMovesTableValueDownStrike },
			{ "GetMovesTableValueKickCatchThrow", &UFELMovesFunction::execGetMovesTableValueKickCatchThrow },
			{ "GetMovesTableValueRecoilAttack", &UFELMovesFunction::execGetMovesTableValueRecoilAttack },
			{ "GetMovesTableValueRingSideToRing", &UFELMovesFunction::execGetMovesTableValueRingSideToRing },
			{ "GetMovesTableValueRiseUpStrike", &UFELMovesFunction::execGetMovesTableValueRiseUpStrike },
			{ "GetMovesTableValueRopeGroggyStrike", &UFELMovesFunction::execGetMovesTableValueRopeGroggyStrike },
			{ "GetMovesTableValueRopeSpringboard", &UFELMovesFunction::execGetMovesTableValueRopeSpringboard },
			{ "GetMovesTableValueRunningAttack", &UFELMovesFunction::execGetMovesTableValueRunningAttack },
			{ "GetMovesTableValueRunningCounter", &UFELMovesFunction::execGetMovesTableValueRunningCounter },
			{ "GetMovesTableValueSitDownAttack", &UFELMovesFunction::execGetMovesTableValueSitDownAttack },
			{ "GetMovesTableValueSpecialGrapple", &UFELMovesFunction::execGetMovesTableValueSpecialGrapple },
			{ "GetMovesTableValueSpecialStrike", &UFELMovesFunction::execGetMovesTableValueSpecialStrike },
			{ "GetMovesTableValueStandStrike", &UFELMovesFunction::execGetMovesTableValueStandStrike },
			{ "GetMovesTableValueTwoPlatoons", &UFELMovesFunction::execGetMovesTableValueTwoPlatoons },
			{ "GetMovesTableValueWhipAttack", &UFELMovesFunction::execGetMovesTableValueWhipAttack },
			{ "GetMovesTopMenuList", &UFELMovesFunction::execGetMovesTopMenuList },
			{ "GetSlotDetalMatchData", &UFELMovesFunction::execGetSlotDetalMatchData },
			{ "MakeUniqueIndexELMoves", &UFELMovesFunction::execMakeUniqueIndexELMoves },
			{ "SetSceneCaptureOnly", &UFELMovesFunction::execSetSceneCaptureOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics
	{
		struct FELMovesFunction_eventFormatCurrentPathName_Parms
		{
			FText Left;
			FText Right;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Right;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventFormatCurrentPathName_Parms, Left), METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventFormatCurrentPathName_Parms, Right), METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Right_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventFormatCurrentPathName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "FormatCurrentPathName", nullptr, nullptr, sizeof(FELMovesFunction_eventFormatCurrentPathName_Parms), Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics
	{
		struct FELMovesFunction_eventGetActionSkillNo_Parms
		{
			TMap<int32,FMovesTestMenuStructDefine> _OutMenu;
			FMovesTestMenuStructDefine _Data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenu_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__OutMenu_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__OutMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_ValueProp = { "_OutMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_Key_KeyProp = { "_OutMenu_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu = { "_OutMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetActionSkillNo_Parms, _OutMenu), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetActionSkillNo_Parms, _Data), Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__Data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetActionSkillNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__OutMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp__Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetActionSkillNo", nullptr, nullptr, sizeof(FELMovesFunction_eventGetActionSkillNo_Parms), Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics
	{
		struct FELMovesFunction_eventGetFinisher_SettingData_Parms
		{
			UDataTable* DetailTable;
			TMap<int32,FMovesTestMenuStructDefine> _Menu;
			FELMoves_Finisher_Part Finisher;
			TArray<FMovesTestMenuStructDefine> _OutArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetailTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Menu_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Menu_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Menu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__Menu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_DetailTable = { "DetailTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisher_SettingData_Parms, DetailTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_ValueProp = { "_Menu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_Key_KeyProp = { "_Menu_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu = { "_Menu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisher_SettingData_Parms, _Menu), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_Finisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisher_SettingData_Parms, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher_Part, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__OutArray_Inner = { "_OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__OutArray = { "_OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisher_SettingData_Parms, _OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_DetailTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__Menu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__OutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::NewProp__OutArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetFinisher_SettingData", nullptr, nullptr, sizeof(FELMovesFunction_eventGetFinisher_SettingData_Parms), Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics
	{
		struct FELMovesFunction_eventGetFinisherMatchMenuData_Parms
		{
			bool bFinisher;
			TMap<int32,FMovesTestMenuStructDefine> _OutMenu;
			FMovesSituation _MovesSituation;
			FELMoves_Finisher _Finisher;
			FWrestlingSkillParam _SkillParam;
			TArray<FMovesTestMenuStructDefine> MENU;
		};
		static void NewProp_bFinisher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinisher;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenu_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__OutMenu_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__OutMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Finisher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SkillParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SkillParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MENU_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MENU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_bFinisher_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetFinisherMatchMenuData_Parms*)Obj)->bFinisher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_bFinisher = { "bFinisher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetFinisherMatchMenuData_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_bFinisher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_ValueProp = { "_OutMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_Key_KeyProp = { "_OutMenu_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu = { "_OutMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisherMatchMenuData_Parms, _OutMenu), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisherMatchMenuData_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__MovesSituation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__Finisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__Finisher = { "_Finisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisherMatchMenuData_Parms, _Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__Finisher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__SkillParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__SkillParam = { "_SkillParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisherMatchMenuData_Parms, _SkillParam), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__SkillParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__SkillParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_MENU_Inner = { "MENU", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_MENU = { "MENU", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetFinisherMatchMenuData_Parms, MENU), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_bFinisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__OutMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__MovesSituation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp__SkillParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_MENU_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::NewProp_MENU,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetFinisherMatchMenuData", nullptr, nullptr, sizeof(FELMovesFunction_eventGetFinisherMatchMenuData_Parms), Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics
	{
		struct FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Front;
			bool Kick;
			bool Grapple;
			EStickinputDir InputDir;
			bool Running;
			bool OverTheTopRopeRule;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Front_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Front;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_Grapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_Running_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Running;
		static void NewProp_OverTheTopRopeRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverTheTopRopeRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Front_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms*)Obj)->Front = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Front_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Grapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms*)Obj)->Grapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Grapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Running_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms*)Obj)->Running = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Running_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_OverTheTopRopeRule_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms*)Obj)->OverTheTopRopeRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_OverTheTopRopeRule = { "OverTheTopRopeRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_OverTheTopRopeRule_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_Running,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::NewProp_OverTheTopRopeRule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMoves_CornerGroggyStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMoves_CornerGroggyStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics
	{
		struct FELMovesFunction_eventGetMovesChildrenMenuList_Parms
		{
			TArray<FMovesTestMenuStructDefine> _MenuData;
			FMovesTestMenuStructDefine _TopMenu;
			TArray<FMovesTestMenuStructDefine> _OutMenu;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MenuData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MenuData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__MenuData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TopMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TopMenu;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenu_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData_Inner = { "_MenuData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData = { "_MenuData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesChildrenMenuList_Parms, _MenuData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__TopMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__TopMenu = { "_TopMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesChildrenMenuList_Parms, _TopMenu), Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__TopMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__TopMenu_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__OutMenu_Inner = { "_OutMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__OutMenu = { "_OutMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesChildrenMenuList_Parms, _OutMenu), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__MenuData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__TopMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__OutMenu_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::NewProp__OutMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesChildrenMenuList", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesChildrenMenuList_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics
	{
		struct FELMovesFunction_eventGetMovesCurrentPathName_Parms
		{
			TArray<FMovesTestMenuStructDefine> _MenuData;
			FMovesTestMenuStructDefine _CrrentMenu;
			FText _PathNames;
			bool _WithCurrent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MenuData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MenuData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__MenuData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CrrentMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__CrrentMenu;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__PathNames;
		static void NewProp__WithCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__WithCurrent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData_Inner = { "_MenuData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData = { "_MenuData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesCurrentPathName_Parms, _MenuData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__CrrentMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__CrrentMenu = { "_CrrentMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesCurrentPathName_Parms, _CrrentMenu), Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__CrrentMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__CrrentMenu_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__PathNames = { "_PathNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesCurrentPathName_Parms, _PathNames), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__WithCurrent_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesCurrentPathName_Parms*)Obj)->_WithCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__WithCurrent = { "_WithCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesCurrentPathName_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__WithCurrent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__MenuData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__CrrentMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__PathNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::NewProp__WithCurrent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesCurrentPathName", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesCurrentPathName_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics
	{
		struct FELMovesFunction_eventGetMovesMenuMap_Parms
		{
			UDataTable* MenuTable;
			TMap<int32,FMovesTestMenuStructDefine> _OutMenu;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenu_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__OutMenu_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__OutMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp_MenuTable = { "MenuTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesMenuMap_Parms, MenuTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu_ValueProp = { "_OutMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu_Key_KeyProp = { "_OutMenu_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu = { "_OutMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesMenuMap_Parms, _OutMenu), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp_MenuTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::NewProp__OutMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesMenuMap", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesMenuMap_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics
	{
		struct FELMovesFunction_eventGetMovesParentMenuName_Parms
		{
			TArray<FMovesTestMenuStructDefine> _MenuData;
			FMovesTestMenuStructDefine _CrrentMenu;
			TArray<FText> _ParentMenuNames;
			bool _WithCurrent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MenuData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MenuData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__MenuData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CrrentMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__CrrentMenu;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__ParentMenuNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ParentMenuNames;
		static void NewProp__WithCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__WithCurrent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData_Inner = { "_MenuData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData = { "_MenuData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesParentMenuName_Parms, _MenuData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__CrrentMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__CrrentMenu = { "_CrrentMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesParentMenuName_Parms, _CrrentMenu), Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__CrrentMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__CrrentMenu_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__ParentMenuNames_Inner = { "_ParentMenuNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__ParentMenuNames = { "_ParentMenuNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesParentMenuName_Parms, _ParentMenuNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__WithCurrent_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesParentMenuName_Parms*)Obj)->_WithCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__WithCurrent = { "_WithCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesParentMenuName_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__WithCurrent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesParentMenuName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesParentMenuName_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__MenuData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__CrrentMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__ParentMenuNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__ParentMenuNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp__WithCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesParentMenuName", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesParentMenuName_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics
	{
		struct FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms
		{
			int32 Value;
			bool bDoneRunningAttack;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bRunning;
			bool Kick;
			bool bGrapple;
			EEnvironmentLeanAgainst TargetBarricadeLeanAgainst;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bDoneRunningAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneRunningAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetBarricadeLeanAgainst_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetBarricadeLeanAgainst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bDoneRunningAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms*)Obj)->bDoneRunningAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bDoneRunningAttack = { "bDoneRunningAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bDoneRunningAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetBarricadeLeanAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetBarricadeLeanAgainst = { "TargetBarricadeLeanAgainst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms, TargetBarricadeLeanAgainst), Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bDoneRunningAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetBarricadeLeanAgainst_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::NewProp_TargetBarricadeLeanAgainst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableBarricadeLeanAgainst", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableBarricadeLeanAgainst_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics
	{
		struct FELMovesFunction_eventGetMovesTableChainWrestling_Parms
		{
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			EStickinputDir InputDir;
			EChainWrestlingAttackType ChainWrestlingAttackType;
			EChainWrestlingPoseType ChainWrestlingPoseType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingAttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingAttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingPoseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingPoseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableChainWrestling_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableChainWrestling_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingAttackType = { "ChainWrestlingAttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, ChainWrestlingAttackType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingPoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingPoseType = { "ChainWrestlingPoseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, ChainWrestlingPoseType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingPoseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableChainWrestling_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingPoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ChainWrestlingPoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableChainWrestling", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableChainWrestling_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bToOutRing;
			bool bToCorner;
			bool bFront;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
			bool bDown;
			bool bFaceUp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bToOutRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToOutRing;
		static void NewProp_bToCorner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToCorner;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_bDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDown;
		static void NewProp_bFaceUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToOutRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bToOutRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToOutRing = { "bToOutRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToOutRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToCorner_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bToCorner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToCorner = { "bToCorner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToCorner_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFaceUp_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms*)Obj)->bFaceUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFaceUp = { "bFaceUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFaceUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToOutRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bToCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::NewProp_bFaceUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueApronSpringboard", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueApronSpringboard_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueApronStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bFromApron;
			bool bToTagWait;
			bool bGrapple;
			bool bRun;
			bool bFromOutside;
			bool bFront;
			ESpecialMovesType SpecialType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bFromApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromApron;
		static void NewProp_bToTagWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToTagWait;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRun;
		static void NewProp_bFromOutside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromOutside;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bFromApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromApron = { "bFromApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bToTagWait_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bToTagWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bToTagWait = { "bToTagWait", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bToTagWait_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bRun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bRun = { "bRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bRun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromOutside_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bFromOutside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromOutside = { "bFromOutside", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromOutside_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronStrike_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bToTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFromOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::NewProp_SpecialType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueApronStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueApronStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueApronToApron_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			bool bRun;
			bool bMiddleRope;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRun;
		static void NewProp_bMiddleRope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMiddleRope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronToApron_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronToApron_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bRun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronToApron_Parms*)Obj)->bRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bRun = { "bRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bRun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bMiddleRope_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueApronToApron_Parms*)Obj)->bMiddleRope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bMiddleRope = { "bMiddleRope", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bMiddleRope_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::NewProp_bMiddleRope,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueApronToApron", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueApronToApron_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms
		{
			int32 Value;
			bool bDoneEnvironmentAttack;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			bool bStrong;
			EStickinputDir InputDir;
			bool CornerChain;
			bool bRopeChain;
			bool bRingToApron;
			bool bApronToRing;
			bool bInputLookAtRing;
			bool bTagWait;
			EEnvironmentGroggy EnvironmentGroggy;
			EChainWrestlingAttackType ChainWrestlingAttackType;
			EChainWrestlingPoseType ChainWrestlingPoseType;
			bool bKickCatchThrow;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bDoneEnvironmentAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneEnvironmentAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_bStrong_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrong;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_CornerChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CornerChain;
		static void NewProp_bRopeChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRopeChain;
		static void NewProp_bRingToApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRingToApron;
		static void NewProp_bApronToRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApronToRing;
		static void NewProp_bInputLookAtRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputLookAtRing;
		static void NewProp_bTagWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTagWait;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentGroggy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingAttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingAttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingPoseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingPoseType;
		static void NewProp_bKickCatchThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKickCatchThrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bDoneEnvironmentAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bDoneEnvironmentAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bDoneEnvironmentAttack = { "bDoneEnvironmentAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bDoneEnvironmentAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bStrong_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bStrong = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bStrong = { "bStrong", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bStrong_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_CornerChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->CornerChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_CornerChain = { "CornerChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_CornerChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRopeChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bRopeChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRopeChain = { "bRopeChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRopeChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRingToApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bRingToApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRingToApron = { "bRingToApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRingToApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bApronToRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bApronToRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bApronToRing = { "bApronToRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bApronToRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bInputLookAtRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bInputLookAtRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bInputLookAtRing = { "bInputLookAtRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bInputLookAtRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bTagWait_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bTagWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bTagWait = { "bTagWait", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bTagWait_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_EnvironmentGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_EnvironmentGroggy = { "EnvironmentGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, EnvironmentGroggy), Z_Construct_UEnum_ELITE_Game_EEnvironmentGroggy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingAttackType = { "ChainWrestlingAttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, ChainWrestlingAttackType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingPoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingPoseType = { "ChainWrestlingPoseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms, ChainWrestlingPoseType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingPoseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bKickCatchThrow_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms*)Obj)->bKickCatchThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bKickCatchThrow = { "bKickCatchThrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bKickCatchThrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bDoneEnvironmentAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRopeChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bRingToApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bApronToRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bInputLookAtRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_EnvironmentGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_EnvironmentGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingPoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_ChainWrestlingPoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::NewProp_bKickCatchThrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueChainGrapple", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueChainGrapple_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueChainStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			bool Kick;
			bool bStrong;
			EStickinputDir InputDir;
			bool CornerChain;
			bool bRopeChain;
			bool bRingToApron;
			bool bApronToRing;
			bool bInputLookAtRing;
			bool bTagWait;
			EChainWrestlingAttackType ChainWrestlingAttackType;
			EChainWrestlingPoseType ChainWrestlingPoseType;
			bool bKickCatchThrow;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bStrong_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrong;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_CornerChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CornerChain;
		static void NewProp_bRopeChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRopeChain;
		static void NewProp_bRingToApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRingToApron;
		static void NewProp_bApronToRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApronToRing;
		static void NewProp_bInputLookAtRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputLookAtRing;
		static void NewProp_bTagWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTagWait;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingAttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingAttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainWrestlingPoseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainWrestlingPoseType;
		static void NewProp_bKickCatchThrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKickCatchThrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bStrong_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bStrong = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bStrong = { "bStrong", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bStrong_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_CornerChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->CornerChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_CornerChain = { "CornerChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_CornerChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRopeChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bRopeChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRopeChain = { "bRopeChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRopeChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRingToApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bRingToApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRingToApron = { "bRingToApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRingToApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bApronToRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bApronToRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bApronToRing = { "bApronToRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bApronToRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bInputLookAtRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bInputLookAtRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bInputLookAtRing = { "bInputLookAtRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bInputLookAtRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bTagWait_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bTagWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bTagWait = { "bTagWait", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bTagWait_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingAttackType = { "ChainWrestlingAttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, ChainWrestlingAttackType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingPoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingPoseType = { "ChainWrestlingPoseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms, ChainWrestlingPoseType), Z_Construct_UEnum_ELITE_Game_EChainWrestlingPoseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bKickCatchThrow_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueChainStrike_Parms*)Obj)->bKickCatchThrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bKickCatchThrow = { "bKickCatchThrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bKickCatchThrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRopeChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bRingToApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bApronToRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bInputLookAtRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingPoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_ChainWrestlingPoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::NewProp_bKickCatchThrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueChainStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueChainStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bToOutRing;
			bool bToApron;
			bool bFront;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
			bool bDown;
			bool bFaceUp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bToOutRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToOutRing;
		static void NewProp_bToApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToApron;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_bDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDown;
		static void NewProp_bFaceUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToOutRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bToOutRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToOutRing = { "bToOutRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToOutRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bToApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToApron = { "bToApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFaceUp_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms*)Obj)->bFaceUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFaceUp = { "bFaceUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFaceUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToOutRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bToApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::NewProp_bFaceUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueCornerSpringboard", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueCornerSpringboard_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueDiving_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
			bool bDown;
			bool bFaceUp;
			bool FromCorner;
			bool FromBarricade;
			bool FromLadder;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_bDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDown;
		static void NewProp_bFaceUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceUp;
		static void NewProp_FromCorner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromCorner;
		static void NewProp_FromBarricade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromBarricade;
		static void NewProp_FromLadder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromLadder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDiving_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDiving_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDiving_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDiving_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->bDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFaceUp_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->bFaceUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFaceUp = { "bFaceUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFaceUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromCorner_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->FromCorner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromCorner = { "FromCorner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromCorner_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromBarricade_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->FromBarricade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromBarricade = { "FromBarricade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromBarricade_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromLadder_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDiving_Parms*)Obj)->FromLadder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromLadder = { "FromLadder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromLadder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_bFaceUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromBarricade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::NewProp_FromLadder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueDiving", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueDiving_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Running;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Running_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Running;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Running_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms*)Obj)->Running = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Running_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_Running,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::NewProp_TargetDownDirType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueDownGrapple", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueDownGrapple_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::NewProp_TargetDownDirType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueDownRunningStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueDownRunningStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			ESpecialMovesType SpecialType;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::NewProp_TargetDownDirType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueDownSpecial", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueDownSpecial_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueDownStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueDownStrike_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::NewProp_TargetDownDirType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueDownStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueDownStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms
		{
			int32 Value;
			FString MovesCategoryName;
			FELMoves TargetMoves;
			bool bFromKickButtun;
			bool bFromGrappleButtun;
			bool bReversal;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static void NewProp_bFromKickButtun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromKickButtun;
		static void NewProp_bFromGrappleButtun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromGrappleButtun;
		static void NewProp_bReversal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_TargetMoves_MetaData)) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromKickButtun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms*)Obj)->bFromKickButtun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromKickButtun = { "bFromKickButtun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromKickButtun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromGrappleButtun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms*)Obj)->bFromGrappleButtun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromGrappleButtun = { "bFromGrappleButtun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromGrappleButtun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bReversal_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms*)Obj)->bReversal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bReversal = { "bReversal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bReversal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromKickButtun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bFromGrappleButtun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::NewProp_bReversal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueKickCatchThrow", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueKickCatchThrow_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms
		{
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFromGrappleButtun;
			ERecoilAttackType RecoilAttackType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFromGrappleButtun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromGrappleButtun;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecoilAttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RecoilAttackType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_bFromGrappleButtun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms*)Obj)->bFromGrappleButtun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_bFromGrappleButtun = { "bFromGrappleButtun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_bFromGrappleButtun_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_RecoilAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_RecoilAttackType = { "RecoilAttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms, RecoilAttackType), Z_Construct_UEnum_ELITE_Game_ERecoilAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_bFromGrappleButtun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_RecoilAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_RecoilAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRecoilAttack", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRecoilAttack_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::NewProp_bFront,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRingSideToRing", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRingSideToRing_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::NewProp_SpecialType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRiseUpStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRiseUpStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms
		{
			int32 Value;
			bool bInRingToMiddleRope;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			bool bRun;
			bool bOutside;
			bool bApron;
			EStickinputDir InputDir;
			ESpecialMovesType SpecialType;
			ERopeGroggy TargetRopeGroggy;
			bool OverTheTopRopeRule;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bInRingToMiddleRope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRingToMiddleRope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRun;
		static void NewProp_bOutside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutside;
		static void NewProp_bApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApron;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetRopeGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetRopeGroggy;
		static void NewProp_OverTheTopRopeRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverTheTopRopeRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bInRingToMiddleRope_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->bInRingToMiddleRope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bInRingToMiddleRope = { "bInRingToMiddleRope", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bInRingToMiddleRope_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bRun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->bRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bRun = { "bRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bRun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bOutside_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->bOutside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bOutside = { "bOutside", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bOutside_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->bApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bApron = { "bApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetRopeGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetRopeGroggy = { "TargetRopeGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms, TargetRopeGroggy), Z_Construct_UEnum_ELITE_Game_ERopeGroggy, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_OverTheTopRopeRule_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms*)Obj)->OverTheTopRopeRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_OverTheTopRopeRule = { "OverTheTopRopeRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_OverTheTopRopeRule_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bInRingToMiddleRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_bApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetRopeGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_TargetRopeGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::NewProp_OverTheTopRopeRule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRopeGroggyStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRopeGroggyStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bRun;
			bool bToOutRing;
			bool bToCorner;
			bool bFront;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
			bool bDown;
			bool bFaceUp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRun;
		static void NewProp_bToOutRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToOutRing;
		static void NewProp_bToCorner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToCorner;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_bDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDown;
		static void NewProp_bFaceUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bRun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bRun = { "bRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bRun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToOutRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bToOutRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToOutRing = { "bToOutRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToOutRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToCorner_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bToCorner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToCorner = { "bToCorner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToCorner_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFaceUp_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms*)Obj)->bFaceUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFaceUp = { "bFaceUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFaceUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToOutRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bToCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::NewProp_bFaceUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRopeSpringboard", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRopeSpringboard_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms
		{
			int32 Value;
			bool bDoneEnvironmentAttack;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			bool Kick;
			bool bGrapple;
			bool bStrong;
			ESpecialMovesType SpecialType;
			EStickinputDir InputDir;
			bool TargetDown;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
			bool bSetupAction;
			EEnvironmentLeanAgainst TargetLeanAgainst;
			EEnvironmentGroggy EnvironmentGroggy;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bDoneEnvironmentAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneEnvironmentAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bStrong_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrong;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_TargetDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetDown;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static void NewProp_bSetupAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetupAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetLeanAgainst_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetLeanAgainst;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentGroggy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bDoneEnvironmentAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->bDoneEnvironmentAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bDoneEnvironmentAttack = { "bDoneEnvironmentAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bDoneEnvironmentAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bStrong_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->bStrong = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bStrong = { "bStrong", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bStrong_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->TargetDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDown = { "TargetDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bSetupAction_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms*)Obj)->bSetupAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bSetupAction = { "bSetupAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bSetupAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetLeanAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetLeanAgainst = { "TargetLeanAgainst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, TargetLeanAgainst), Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_EnvironmentGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_EnvironmentGroggy = { "EnvironmentGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms, EnvironmentGroggy), Z_Construct_UEnum_ELITE_Game_EEnvironmentGroggy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bDoneEnvironmentAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetDownDirType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_bSetupAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetLeanAgainst_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_TargetLeanAgainst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_EnvironmentGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::NewProp_EnvironmentGroggy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRunningAttack", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRunningAttack_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			ESpecialMovesType SpecialType;
			EStickinputDir InputDir;
			bool bSetupAction;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_bSetupAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetupAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bSetupAction_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms*)Obj)->bSetupAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bSetupAction = { "bSetupAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bSetupAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::NewProp_bSetupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueRunningCounter", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueRunningCounter_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			bool bFront;
			bool bRunning;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::NewProp_bRunning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueSitDownAttack", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueSitDownAttack_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			ESpecialMovesType SpecialType;
			bool CornerChain;
			bool bRopeChain;
			bool bRingToApron;
			bool bApronToRing;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_CornerChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CornerChain;
		static void NewProp_bRopeChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRopeChain;
		static void NewProp_bRingToApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRingToApron;
		static void NewProp_bApronToRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApronToRing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_CornerChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms*)Obj)->CornerChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_CornerChain = { "CornerChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_CornerChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRopeChain_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms*)Obj)->bRopeChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRopeChain = { "bRopeChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRopeChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRingToApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms*)Obj)->bRingToApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRingToApron = { "bRingToApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRingToApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bApronToRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms*)Obj)->bApronToRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bApronToRing = { "bApronToRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bApronToRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRopeChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bRingToApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::NewProp_bApronToRing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueSpecialGrapple", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueSpecialGrapple_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			ESpecialMovesType SpecialType;
			bool bRun;
			bool bRunningCounter;
			bool bOutside;
			bool TargetDown;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
			ERopeGroggy TargetRopeGroggy;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
		static void NewProp_bRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRun;
		static void NewProp_bRunningCounter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunningCounter;
		static void NewProp_bOutside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutside;
		static void NewProp_TargetDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetDown;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetRopeGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetRopeGroggy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->bRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRun = { "bRun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRunningCounter_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->bRunningCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRunningCounter = { "bRunningCounter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRunningCounter_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bOutside_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->bOutside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bOutside = { "bOutside", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bOutside_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->TargetDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDown = { "TargetDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetRopeGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetRopeGroggy = { "TargetRopeGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms, TargetRopeGroggy), Z_Construct_UEnum_ELITE_Game_ERopeGroggy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bRunningCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_bOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetDownDirType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetRopeGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::NewProp_TargetRopeGroggy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueSpecialStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueSpecialStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueStandStrike_Parms
		{
			int32 Value;
			bool bDoneRunningAttack;
			bool bDoneRunningCounter;
			bool bDoneWhipAttack;
			bool bDoneDownAttack;
			bool bDoneEnvironmentAttack;
			bool bDoneApronToApronAttack;
			bool bDoneRiseUpAttack;
			bool bDoneRecoilAttack;
			bool bInRingToMiddleRope;
			bool bIgnoreSync;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool bFront;
			bool Kick;
			bool bStrong;
			bool bNear;
			EStickinputDir InputDir;
			bool bRunning;
			bool bFromGrappleButtun;
			bool bRunningCounter;
			bool bApron;
			bool bOutside;
			bool bRiseUp;
			int32 ComboCount;
			bool TargetDown;
			bool TargetSitDown;
			bool TargetFaceDown;
			EDownDirType TargetDownDirType;
			bool TargetCornerTop;
			bool TargetCornerGroggy;
			ERopeGroggy TargetRopeGroggy;
			bool TargetApron;
			bool TargetDiving;
			EWhipState TargetWhipState;
			bool bTargetTagWait;
			bool bSetupAction;
			EEnvironmentGroggy EnvironmentGroggy;
			EEnvironmentLeanAgainst TargetBarricadeLeanAgainst;
			bool OverTheTopRopeRule;
			bool bRingSideToRing;
			ERecoilAttackType RecoilAttackType;
			bool bIsSpecialState;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bDoneRunningAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneRunningAttack;
		static void NewProp_bDoneRunningCounter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneRunningCounter;
		static void NewProp_bDoneWhipAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneWhipAttack;
		static void NewProp_bDoneDownAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneDownAttack;
		static void NewProp_bDoneEnvironmentAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneEnvironmentAttack;
		static void NewProp_bDoneApronToApronAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneApronToApronAttack;
		static void NewProp_bDoneRiseUpAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneRiseUpAttack;
		static void NewProp_bDoneRecoilAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneRecoilAttack;
		static void NewProp_bInRingToMiddleRope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRingToMiddleRope;
		static void NewProp_bIgnoreSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_bFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFront;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bStrong_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrong;
		static void NewProp_bNear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNear;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
		static void NewProp_bFromGrappleButtun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromGrappleButtun;
		static void NewProp_bRunningCounter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunningCounter;
		static void NewProp_bApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApron;
		static void NewProp_bOutside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutside;
		static void NewProp_bRiseUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRiseUp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComboCount;
		static void NewProp_TargetDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetDown;
		static void NewProp_TargetSitDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetSitDown;
		static void NewProp_TargetFaceDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetFaceDown;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDownDirType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDownDirType;
		static void NewProp_TargetCornerTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetCornerTop;
		static void NewProp_TargetCornerGroggy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetCornerGroggy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetRopeGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetRopeGroggy;
		static void NewProp_TargetApron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetApron;
		static void NewProp_TargetDiving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetDiving;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetWhipState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetWhipState;
		static void NewProp_bTargetTagWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetTagWait;
		static void NewProp_bSetupAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetupAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentGroggy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentGroggy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetBarricadeLeanAgainst_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetBarricadeLeanAgainst;
		static void NewProp_OverTheTopRopeRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverTheTopRopeRule;
		static void NewProp_bRingSideToRing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRingSideToRing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecoilAttackType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RecoilAttackType;
		static void NewProp_bIsSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpecialState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneRunningAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningAttack = { "bDoneRunningAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningCounter_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneRunningCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningCounter = { "bDoneRunningCounter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningCounter_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneWhipAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneWhipAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneWhipAttack = { "bDoneWhipAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneWhipAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneDownAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneDownAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneDownAttack = { "bDoneDownAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneDownAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneEnvironmentAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneEnvironmentAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneEnvironmentAttack = { "bDoneEnvironmentAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneEnvironmentAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneApronToApronAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneApronToApronAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneApronToApronAttack = { "bDoneApronToApronAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneApronToApronAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRiseUpAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneRiseUpAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRiseUpAttack = { "bDoneRiseUpAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRiseUpAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRecoilAttack_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bDoneRecoilAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRecoilAttack = { "bDoneRecoilAttack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRecoilAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bInRingToMiddleRope_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bInRingToMiddleRope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bInRingToMiddleRope = { "bInRingToMiddleRope", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bInRingToMiddleRope_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIgnoreSync_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bIgnoreSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIgnoreSync = { "bIgnoreSync", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIgnoreSync_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFront_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFront = { "bFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bStrong_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bStrong = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bStrong = { "bStrong", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bStrong_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bNear_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bNear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bNear = { "bNear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bNear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFromGrappleButtun_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bFromGrappleButtun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFromGrappleButtun = { "bFromGrappleButtun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFromGrappleButtun_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunningCounter_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bRunningCounter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunningCounter = { "bRunningCounter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunningCounter_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bApron = { "bApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bOutside_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bOutside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bOutside = { "bOutside", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bOutside_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRiseUp_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bRiseUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRiseUp = { "bRiseUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRiseUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, ComboCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDown = { "TargetDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetSitDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetSitDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetSitDown = { "TargetSitDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetSitDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetFaceDown_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetFaceDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetFaceDown = { "TargetFaceDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetFaceDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDownDirType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDownDirType = { "TargetDownDirType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, TargetDownDirType), Z_Construct_UEnum_ELITE_Game_EDownDirType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerTop_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetCornerTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerTop = { "TargetCornerTop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerTop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerGroggy_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetCornerGroggy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerGroggy = { "TargetCornerGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerGroggy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetRopeGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetRopeGroggy = { "TargetRopeGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, TargetRopeGroggy), Z_Construct_UEnum_ELITE_Game_ERopeGroggy, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetApron_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetApron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetApron = { "TargetApron", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetApron_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDiving_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->TargetDiving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDiving = { "TargetDiving", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDiving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetWhipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetWhipState = { "TargetWhipState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, TargetWhipState), Z_Construct_UEnum_ELITE_Game_EWhipState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bTargetTagWait_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bTargetTagWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bTargetTagWait = { "bTargetTagWait", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bTargetTagWait_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bSetupAction_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bSetupAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bSetupAction = { "bSetupAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bSetupAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_EnvironmentGroggy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_EnvironmentGroggy = { "EnvironmentGroggy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, EnvironmentGroggy), Z_Construct_UEnum_ELITE_Game_EEnvironmentGroggy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetBarricadeLeanAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetBarricadeLeanAgainst = { "TargetBarricadeLeanAgainst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, TargetBarricadeLeanAgainst), Z_Construct_UEnum_ELITE_Game_EEnvironmentLeanAgainst, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_OverTheTopRopeRule_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->OverTheTopRopeRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_OverTheTopRopeRule = { "OverTheTopRopeRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_OverTheTopRopeRule_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRingSideToRing_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bRingSideToRing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRingSideToRing = { "bRingSideToRing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRingSideToRing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_RecoilAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_RecoilAttackType = { "RecoilAttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms, RecoilAttackType), Z_Construct_UEnum_ELITE_Game_ERecoilAttackType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIsSpecialState_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueStandStrike_Parms*)Obj)->bIsSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIsSpecialState = { "bIsSpecialState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIsSpecialState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRunningCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneWhipAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneDownAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneEnvironmentAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneApronToApronAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRiseUpAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bDoneRecoilAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bInRingToMiddleRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIgnoreSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bNear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bFromGrappleButtun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRunningCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRiseUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_ComboCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetSitDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetFaceDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDownDirType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDownDirType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetCornerGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetRopeGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetRopeGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetDiving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetWhipState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetWhipState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bTargetTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bSetupAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_EnvironmentGroggy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_EnvironmentGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetBarricadeLeanAgainst_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_TargetBarricadeLeanAgainst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_OverTheTopRopeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bRingSideToRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_RecoilAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_RecoilAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::NewProp_bIsSpecialState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueStandStrike", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueStandStrike_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			ETwoPlatoonsStuation Situation;
			EStickinputDir InputDir;
			bool bChainGrappleDestroy;
			bool Kick;
			bool bGrapple;
			bool bRunning;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Situation_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Situation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static void NewProp_bChainGrappleDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChainGrappleDestroy;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Situation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Situation = { "Situation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms, Situation), Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bChainGrappleDestroy_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms*)Obj)->bChainGrappleDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bChainGrappleDestroy = { "bChainGrappleDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bChainGrappleDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms*)Obj)->bRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Situation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Situation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_InputDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bChainGrappleDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::NewProp_bRunning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueTwoPlatoons", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueTwoPlatoons_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics
	{
		struct FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms
		{
			int32 Value;
			FELMoves TargetMoves;
			FString MovesCategoryName;
			bool Kick;
			bool bGrapple;
			bool bTargetDiving;
			EWhipState TargetWhipState;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMoves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovesCategoryName;
		static void NewProp_Kick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Kick;
		static void NewProp_bGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrapple;
		static void NewProp_bTargetDiving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetDiving;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetWhipState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetWhipState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetMoves = { "TargetMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms, TargetMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetMoves_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_MovesCategoryName = { "MovesCategoryName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms, MovesCategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Kick_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms*)Obj)->Kick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Kick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bGrapple_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms*)Obj)->bGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bGrapple = { "bGrapple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bGrapple_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bTargetDiving_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms*)Obj)->bTargetDiving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bTargetDiving = { "bTargetDiving", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bTargetDiving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetWhipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetWhipState = { "TargetWhipState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms, TargetWhipState), Z_Construct_UEnum_ELITE_Game_EWhipState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_MovesCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_bTargetDiving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetWhipState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::NewProp_TargetWhipState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTableValueWhipAttack", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTableValueWhipAttack_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics
	{
		struct FELMovesFunction_eventGetMovesTopMenuList_Parms
		{
			UDataTable* UpdateTable;
			TArray<FMovesTestMenuStructDefine> _OutMenuTop;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenuTop_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutMenuTop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp_UpdateTable = { "UpdateTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTopMenuList_Parms, UpdateTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp__OutMenuTop_Inner = { "_OutMenuTop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp__OutMenuTop = { "_OutMenuTop", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetMovesTopMenuList_Parms, _OutMenuTop), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp_UpdateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp__OutMenuTop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::NewProp__OutMenuTop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetMovesTopMenuList", nullptr, nullptr, sizeof(FELMovesFunction_eventGetMovesTopMenuList_Parms), Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics
	{
		struct FELMovesFunction_eventGetSlotDetalMatchData_Parms
		{
			TMap<int32,FMovesTestMenuStructDefine> _OutMenu;
			FELMovesSituation_SlotDetail _SlotDetail;
			FWrestlingSkillParam _SkillParam;
			FMovesTestMenuStructDefine MENU;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__OutMenu_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__OutMenu_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__OutMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SlotDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SlotDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SkillParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SkillParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MENU;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_ValueProp = { "_OutMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_Key_KeyProp = { "_OutMenu_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu = { "_OutMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetSlotDetalMatchData_Parms, _OutMenu), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SlotDetail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SlotDetail = { "_SlotDetail", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetSlotDetalMatchData_Parms, _SlotDetail), Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SlotDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SlotDetail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SkillParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SkillParam = { "_SkillParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetSlotDetalMatchData_Parms, _SkillParam), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SkillParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SkillParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_MENU = { "MENU", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventGetSlotDetalMatchData_Parms, MENU), Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FELMovesFunction_eventGetSlotDetalMatchData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventGetSlotDetalMatchData_Parms), &Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__OutMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SlotDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp__SkillParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_MENU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "GetSlotDetalMatchData", nullptr, nullptr, sizeof(FELMovesFunction_eventGetSlotDetalMatchData_Parms), Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics
	{
		struct FELMovesFunction_eventMakeUniqueIndexELMoves_Parms
		{
			FELMoves MOVES;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MOVES;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventMakeUniqueIndexELMoves_Parms, MOVES), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::NewProp_MOVES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "MakeUniqueIndexELMoves", nullptr, nullptr, sizeof(FELMovesFunction_eventMakeUniqueIndexELMoves_Parms), Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics
	{
		struct FELMovesFunction_eventSetSceneCaptureOnly_Parms
		{
			TArray<AActor*> SceneActors;
			bool Flag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SceneActors;
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_SceneActors_Inner = { "SceneActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_SceneActors = { "SceneActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesFunction_eventSetSceneCaptureOnly_Parms, SceneActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((FELMovesFunction_eventSetSceneCaptureOnly_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMovesFunction_eventSetSceneCaptureOnly_Parms), &Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_SceneActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_SceneActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesFunction, nullptr, "SetSceneCaptureOnly", nullptr, nullptr, sizeof(FELMovesFunction_eventSetSceneCaptureOnly_Parms), Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFELMovesFunction_NoRegister()
	{
		return UFELMovesFunction::StaticClass();
	}
	struct Z_Construct_UClass_UFELMovesFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFELMovesFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFELMovesFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFELMovesFunction_FormatCurrentPathName, "FormatCurrentPathName" }, // 3299499962
		{ &Z_Construct_UFunction_UFELMovesFunction_GetActionSkillNo, "GetActionSkillNo" }, // 4122519626
		{ &Z_Construct_UFunction_UFELMovesFunction_GetFinisher_SettingData, "GetFinisher_SettingData" }, // 1941930426
		{ &Z_Construct_UFunction_UFELMovesFunction_GetFinisherMatchMenuData, "GetFinisherMatchMenuData" }, // 1304664808
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMoves_CornerGroggyStrike, "GetMoves_CornerGroggyStrike" }, // 590133686
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesChildrenMenuList, "GetMovesChildrenMenuList" }, // 4118882186
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesCurrentPathName, "GetMovesCurrentPathName" }, // 2551631541
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesMenuMap, "GetMovesMenuMap" }, // 2432039826
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesParentMenuName, "GetMovesParentMenuName" }, // 3304315112
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableBarricadeLeanAgainst, "GetMovesTableBarricadeLeanAgainst" }, // 2797521834
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableChainWrestling, "GetMovesTableChainWrestling" }, // 2056015152
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronSpringboard, "GetMovesTableValueApronSpringboard" }, // 3789893183
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronStrike, "GetMovesTableValueApronStrike" }, // 2404657752
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueApronToApron, "GetMovesTableValueApronToApron" }, // 2516705512
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainGrapple, "GetMovesTableValueChainGrapple" }, // 871986251
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueChainStrike, "GetMovesTableValueChainStrike" }, // 436444357
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueCornerSpringboard, "GetMovesTableValueCornerSpringboard" }, // 885113935
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDiving, "GetMovesTableValueDiving" }, // 2733649555
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownGrapple, "GetMovesTableValueDownGrapple" }, // 1791070959
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownRunningStrike, "GetMovesTableValueDownRunningStrike" }, // 39280176
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownSpecial, "GetMovesTableValueDownSpecial" }, // 2463582176
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueDownStrike, "GetMovesTableValueDownStrike" }, // 3898873875
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueKickCatchThrow, "GetMovesTableValueKickCatchThrow" }, // 3932346218
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRecoilAttack, "GetMovesTableValueRecoilAttack" }, // 3865395034
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRingSideToRing, "GetMovesTableValueRingSideToRing" }, // 1402776485
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRiseUpStrike, "GetMovesTableValueRiseUpStrike" }, // 1686503321
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeGroggyStrike, "GetMovesTableValueRopeGroggyStrike" }, // 4243373400
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRopeSpringboard, "GetMovesTableValueRopeSpringboard" }, // 1570480143
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningAttack, "GetMovesTableValueRunningAttack" }, // 3101937225
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueRunningCounter, "GetMovesTableValueRunningCounter" }, // 2537461549
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSitDownAttack, "GetMovesTableValueSitDownAttack" }, // 1597158580
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialGrapple, "GetMovesTableValueSpecialGrapple" }, // 2477900061
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueSpecialStrike, "GetMovesTableValueSpecialStrike" }, // 1173550280
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueStandStrike, "GetMovesTableValueStandStrike" }, // 2713607792
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueTwoPlatoons, "GetMovesTableValueTwoPlatoons" }, // 3327988001
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTableValueWhipAttack, "GetMovesTableValueWhipAttack" }, // 108313972
		{ &Z_Construct_UFunction_UFELMovesFunction_GetMovesTopMenuList, "GetMovesTopMenuList" }, // 675598121
		{ &Z_Construct_UFunction_UFELMovesFunction_GetSlotDetalMatchData, "GetSlotDetalMatchData" }, // 4004983923
		{ &Z_Construct_UFunction_UFELMovesFunction_MakeUniqueIndexELMoves, "MakeUniqueIndexELMoves" }, // 2619001416
		{ &Z_Construct_UFunction_UFELMovesFunction_SetSceneCaptureOnly, "SetSceneCaptureOnly" }, // 2949376900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFELMovesFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FELMovesFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FELMovesFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFELMovesFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFELMovesFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFELMovesFunction_Statics::ClassParams = {
		&UFELMovesFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFELMovesFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFELMovesFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFELMovesFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFELMovesFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFELMovesFunction, 1851140758);
	template<> ABP_200508_API UClass* StaticClass<UFELMovesFunction>()
	{
		return UFELMovesFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFELMovesFunction(Z_Construct_UClass_UFELMovesFunction, &UFELMovesFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UFELMovesFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFELMovesFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
